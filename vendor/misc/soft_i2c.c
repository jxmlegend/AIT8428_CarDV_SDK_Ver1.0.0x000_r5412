
#include "soft_i2c.h"
#include "mmpf_pio.h"
#include "mmp_err.h"
#include "mmps_pio.h"
#include "AHC_OS.h"

#include "lib_retina.h"

#define  A_SDA_IN()        AHC_GPIO_SetOutputMode(MMP_GPIO52,MMP_FALSE)
#define  A_SDA_OUT()       AHC_GPIO_SetOutputMode(MMP_GPIO52,MMP_TRUE)
#define  A_SDA_L()  	   MMPS_PIO_SetData(MMP_GPIO52, 0)
#define  A_SDA_H() 	       MMPS_PIO_SetData(MMP_GPIO52, 1)
//#define  A_SDA_STATE()	   MMPS_PIO_GetData(MMP_GPIO1, MMP_UBYTE * returnValue)

#define  A_SCL_IN()     	AHC_GPIO_SetOutputMode(MMP_GPIO49,MMP_FALSE)
#define  A_SCL_OUT()    	AHC_GPIO_SetOutputMode(MMP_GPIO49,MMP_TRUE)
#define  A_SCL_L()  		MMPS_PIO_SetData(MMP_GPIO49, 0)
#define  A_SCL_H() 			MMPS_PIO_SetData(MMP_GPIO49, 1)




static  void I2C_DELAY(void)
{	
	RTNA_WAIT_US(2);	
}



static void start_I2c(void)
{
	A_SDA_OUT();
	A_SCL_OUT();
    I2C_DELAY();	
    A_SDA_H();  //�����߸ߵ�ƽ
    I2C_DELAY();

    A_SCL_H();  //��ʱ���߸ߵ�ʱ���������ɸ�����
    I2C_DELAY();

    A_SDA_L();
    I2C_DELAY();

    A_SCL_L();  //�����߻ָ��͵�ƽ��������������Ҫ
    I2C_DELAY();
}

static void stop_I2c(void)
{
    A_SCL_L();
    I2C_DELAY();

    A_SDA_L();
    I2C_DELAY();

    A_SCL_H();
    I2C_DELAY();

    A_SDA_H();
    I2C_DELAY();
	//A_SCL_IN();
	//A_SDA_IN();
    I2C_DELAY();	
}

static MMP_UBYTE wait_Ack(void)
{
    MMP_UBYTE ErrTime = 0;
	MMP_UBYTE recvbit;

    A_SDA_IN();//SDA����Ϊ����
    I2C_DELAY();

    A_SCL_H();
    I2C_DELAY();
    I2C_DELAY();
    I2C_DELAY();
    I2C_DELAY();
    I2C_DELAY();
    I2C_DELAY();

	MMPS_PIO_GetData(MMP_GPIO52, &recvbit);

    while(recvbit)//�ȴ�
    {
        ErrTime++;
        if (ErrTime > 250)
        {
            stop_I2c();
            printc("ErrTime out \r\n");
            return 1;
        }
    }

    A_SCL_L();//ʱ�����0
    I2C_DELAY();
    return 0;
}

static void Ack(void)
{
    A_SCL_L();
    I2C_DELAY();

    A_SDA_L();
    I2C_DELAY();

    A_SCL_H();
    I2C_DELAY();

    A_SCL_L();
    I2C_DELAY();
}

static void no_Ack(void)
{
    A_SCL_L();
    I2C_DELAY();

    A_SDA_H();
    I2C_DELAY();

    A_SCL_H();
    I2C_DELAY();

    A_SCL_L();
    I2C_DELAY();

}

static void iic_sendACK(MMP_UBYTE ack)
{
	if(ack)
	{
		Ack();
		
	}else{
	    no_Ack();
	}
	
}


static MMP_UBYTE write_byte_to_slave(MMP_UBYTE m_data)
{
    MMP_UBYTE j, tem;

    A_SCL_L();
    I2C_DELAY();
    for (j = 0; j < 8; j++)
    {
        if ((m_data << j) & 0x80)
        {
            A_SDA_H();
        }
        else
        {
            A_SDA_L();
        }
        I2C_DELAY();
        A_SCL_H();
        I2C_DELAY();
        A_SCL_L();
        I2C_DELAY();
    }
    I2C_DELAY();

    tem = !wait_Ack();
    //printc("\n jjj1tem : %d\r\n",tem);
    A_SDA_OUT();//����SDAΪ���״̬
   // printc("\n jjj2tem :%d\r\n",tem);

    return (tem);//tem 1Ϊ��Ӧ���ź�
}



static MMP_UBYTE read_byte_from_slave(void)
{
    MMP_UBYTE read, j,recvbit;
    read = 0x00;

    A_SDA_IN();//����SDAΪ����
    I2C_DELAY();
    for (j = 8; j > 0; j--)
    {
        A_SCL_L();
        I2C_DELAY();
        A_SCL_H();
        I2C_DELAY();
        read = (read << 1);

		MMPS_PIO_GetData(MMP_GPIO52, &recvbit);
		
        if (recvbit)
        {
            read = read + 1;
        }
        A_SCL_L();
        I2C_DELAY();

        I2C_DELAY();
    }
    A_SDA_OUT();//����SDAΪ���״̬
    I2C_DELAY();
    return (read);
}


MMP_ULONG iic_read_bytes(MMP_UBYTE *data, MMP_UBYTE byte_len)
{
   MMP_UBYTE slave_addr =0xC6;
   MMP_UBYTE ack = 0;
   MMP_UBYTE i = 0;

	start_I2c();			   //I2C����
	ack = write_byte_to_slave(slave_addr);	   //д����
	if(ack == 0){
	
	   printc("read 1 have no ack\r\n");
	}

	start_I2c();				   //дתΪ�������Ҫ�ٴ�����I2C
	ack = write_byte_to_slave((slave_addr+1));   //������
	if(ack == 0){
	
		   printc("read 3 have no ack\n");
	}
	for(i = 0;i < byte_len-1;i++)
	{ 
	   *data = read_byte_from_slave();
	   Ack();
	   data++;
	}
	*data = read_byte_from_slave();
	no_Ack();
	stop_I2c(); 			   //I2Cֹͣʱ��
	AHC_OS_SleepMs(1);
    return 0;
}



MMP_ULONG iic_write_bytes(MMP_UBYTE *data, MMP_UBYTE byte_len)
{

   MMP_UBYTE slave_addr =0xC6;
   MMP_UBYTE ack = 0;
   MMP_UBYTE i = 0;
	




	start_I2c();				//I2C���� 
	ack = write_byte_to_slave(slave_addr);		//д����
	if(ack == 0){

		printc("send 1 have no ack\r\n");
	}



	for(i=0;i<byte_len;i++)
	{
		ack = write_byte_to_slave(data[i]); //д����	 
		if(ack == 0){
			
			printc("send 3 have no ack\n");
		}

	}
			

		


	stop_I2c();				//I2Cֹͣʱ��
	return 0;
	
}



void IIC_write_data(MMP_UBYTE reg,MMP_UBYTE data, MMP_UBYTE byte_len)
{
   MMP_UBYTE slave_addr =0x80;
   MMP_UBYTE ack = 0;
   MMP_UBYTE i = 0;

   	start_I2c();				//I2C���� 

	ack = write_byte_to_slave(slave_addr);		//д����
	if(ack == 0){

		printc("send 1 have no ack\r\n");
	}

	ack = write_byte_to_slave(reg);		//д��ַ
	if(ack == 0){

		printc("send 2 have no ack\r\n");
	}

	for(i=0;i<byte_len;i++)
	{
		ack = write_byte_to_slave(data); //д����	 
		if(ack == 0){
			
			printc("send 3 have no ack\n");
		}

	}

	stop_I2c();				//I2Cֹͣʱ��
	

}


void IIC_write_data_e2prom(MMP_UBYTE reg,MMP_UBYTE* data, MMP_UBYTE byte_len)
{
   MMP_UBYTE slave_addr =0xA0;
   MMP_UBYTE ack = 0;
   MMP_UBYTE i = 0;

   	start_I2c();				//I2C���� 

	ack = write_byte_to_slave(slave_addr);		//д����
	if(ack == 0){

		printc("send 1 have no ack\r\n");
	}

	ack = write_byte_to_slave(reg);		//д��ַ
	if(ack == 0){

		printc("send 2 have no ack\r\n");
	}

	for(i=0;i<byte_len;i++)
	{
		ack = write_byte_to_slave(data[i]); //д����	 
		if(ack == 0){
			
			printc("send 3 have no ack\n");
		}

	}

	stop_I2c();				//I2Cֹͣʱ��
	

}



MMP_ULONG iic_read_bytes_e2prom(MMP_UBYTE reg,MMP_UBYTE *data, MMP_UBYTE byte_len)
{
   MMP_UBYTE slave_addr =0xA0;
   MMP_UBYTE ack = 0;
   MMP_UBYTE i = 0;

#if 1
	start_I2c();			   //I2C����
	ack = write_byte_to_slave(slave_addr);	   //д����
	if(ack == 0){
	
	   printc("read 1 have no ack\r\n");
	}

	ack = write_byte_to_slave(reg);		//д��ַ
	if(ack == 0){

		printc("send sss have no ack\r\n");
	}
	 I2C_DELAY();
	//stop_I2c();
#endif
	start_I2c();				   //дתΪ�������Ҫ�ٴ�����I2C
	ack = write_byte_to_slave((slave_addr+1));   //������
	if(ack == 0){
	
		   printc("read 3 have no ack\n");
	}

	for(i = 0;i < byte_len-1;i++)
	{ 
	   *data = read_byte_from_slave();
	   Ack();
	   data++;
	}
	
	*data = read_byte_from_slave();
	no_Ack();
	stop_I2c(); 			   //I2Cֹͣʱ��
	AHC_OS_SleepMs(1);
    return 0;
}







// lyj 20190814 Test mode

MMP_UBYTE WriteToDevice(MMP_UBYTE DeviceAD)
{
	MMP_UBYTE valueReturn = 0;
		start_I2c();
	

	 valueReturn	 = 	 write_byte_to_slave(DeviceAD); // ����1Ϊ��Ӧ��
	 
		stop_I2c();
	  return valueReturn;
}






