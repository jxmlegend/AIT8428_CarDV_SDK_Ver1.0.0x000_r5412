
#ifndef _MENU_STATE_MOVIE_MENU_H_
#define _MENU_STATE_MOVIE_MENU_H_

/*===========================================================================
 * Include files
 *===========================================================================*/ 

#include "AHC_Common.h"
#include "AHC_Gui.h"

/*===========================================================================
 * Enum define 
 *===========================================================================*/ 

typedef enum {
    ITEMID_MOVIE_MODE= 1,
#if (MENU_MOVIE_SIZE_4K_24P_EN)
	ITEMID_MOVIE_MODE_4K_24P,
#endif
#if (MENU_MOVIE_SIZE_1440_30P_EN)
    ITEMID_MOVIE_MODE_1440_30P,
#endif		
#if (MENU_MOVIE_SIZE_SHD_30P_EN)
    ITEMID_MOVIE_MODE_SHD,
#endif
#if (MENU_MOVIE_SIZE_SHD_25P_EN)
    ITEMID_MOVIE_MODE_SHD_25P,
#endif
#if (MENU_MOVIE_SIZE_SHD_24P_EN)
    ITEMID_MOVIE_MODE_SHD_24P,
#endif
#if (MENU_MOVIE_SIZE_1080_60P_EN)
    ITEMID_MOVIE_MODE_FHD_60P,
#endif

#if (MENU_MOVIE_SIZE_1080P_30_HDR_EN)
    ITEMID_MOVIE_MODE_FHD_HDR,
#endif

#if (MENU_MOVIE_SIZE_1080P_EN)
    ITEMID_MOVIE_MODE_FHD,
#endif
#ifdef	MOVIE_SIZE_MENU_ORDER_1
// Menu Order - 1080@30fps, 720@60fps, 720@30fps, VGA@30fps
#if (MENU_MOVIE_SIZE_720_60P_EN)
    ITEMID_MOVIE_MODE_HD_60P,
#endif
#if (MENU_MOVIE_SIZE_720P_EN)
    ITEMID_MOVIE_MODE_HD,
#endif
#else
// Menu Order - 1080@30fps, 720@30fps, 720@60fps, VGA@30fps
#if (MENU_MOVIE_SIZE_720P_EN)
    ITEMID_MOVIE_MODE_HD,
#endif
#if (MENU_MOVIE_SIZE_720_60P_EN)
    ITEMID_MOVIE_MODE_HD_60P,
#endif
#if (MENU_MOVIE_SIZE_1080_24P_EN)
    ITEMID_MOVIE_MODE_FHD_24P,
#endif
#if (MENU_MOVIE_SIZE_720_24P_EN)
    ITEMID_MOVIE_MODE_HD_24P,
#endif
#endif
#if (MENU_MOVIE_SIZE_VGA30P_EN)
    ITEMID_MOVIE_MODE_VGA_30P,
#endif
#if (MENU_MOVIE_SIZE_VGA120P_EN)
    ITEMID_MOVIE_MODE_VGA_120P,
#endif

    ITEMID_MOVIE_QUALITY,
#if (MENU_MOVIE_QUALITY_SUPER_FINE_EN)
    ITEMID_MQUALITY_SUPERFINE,
#endif
#if (MENU_MOVIE_QUALITY_FINE_EN)
    ITEMID_MQUALITY_FINE,
    ITEMID_FM1,
    ITEMID_FM2,
    #if 1// lyj 20190216
      ITEMID_FM3,
        ITEMID_FM4,
        #endif
#endif
	
    ITEMID_MOVIE_STABLEILIZATION,
#if (MENU_MOVIE_STABILIZE_ON_EN)
    ITEMID_MOVIE_STABLE_ON,
#endif
#if (MENU_MOVIE_STABILIZE_OFF_EN)
    ITEMID_MOVIE_STABLE_OFF,
#endif    

    ITEMID_AUTO_SLOW_SHUTTER,
#if (MENU_MOVIE_SLOW_SHUTTER_ON_EN)
    ITEMID_AUTO_SLOW_SHUT_ON,
#endif
#if (MENU_MOVIE_SLOW_SHUTTER_OFF_EN)
    ITEMID_AUTO_SLOW_SHUT_OFF,
#endif
    
    ITEMID_MIC_SENSITIVITY,
#if (MENU_MOVIE_MIC_SEN_STANDARD_EN)
    ITEMID_MIC_SENSITI_STANDARD,
#endif
#if (MENU_MOVIE_MIC_SEN_LOW_EN)
    ITEMID_MIC_SENSITI_LOW,
#endif

    ITEMID_MOVIE_PRE_RECORD,
#if (MENU_MOVIE_PRE_RECORD_ON_EN)
    ITEMID_MOVIE_PRE_RECORD_ON,
#endif
#if (MENU_MOVIE_PRE_RECORD_OFF_EN)
    ITEMID_MOVIE_PRE_RECORD_OFF,
#endif    

    ITEMID_MOVIE_SOUND_RECORD,
#if (MENU_MOVIE_SOUND_RECORD_ON_EN)
    ITEMID_MOVIE_SOUND_RECORD_ON,
#endif
#if (MENU_MOVIE_SOUND_RECORD_OFF_EN)
    ITEMID_MOVIE_SOUND_RECORD_OFF,
#endif

    ITEMID_MOVIE_CLIPTIME,
#if (MENU_MOVIE_CLIP_TIME_OFF_EN)
    ITEMID_MOVIE_CLIPTIME_OFF,
#endif
#if (MENU_MOVIE_CLIP_TIME_6SEC_EN)
    ITEMID_MOVIE_CLIPTIME_6SEC,
#endif
#if (MENU_MOVIE_CLIP_TIME_1MIN_EN)
    ITEMID_MOVIE_CLIPTIME_1MIN,
#endif
#if (MENU_MOVIE_CLIP_TIME_2MIN_EN)
    ITEMID_MOVIE_CLIPTIME_2MIN,
#endif
#if (MENU_MOVIE_CLIP_TIME_3MIN_EN)
    ITEMID_MOVIE_CLIPTIME_3MIN,
#endif
#if (MENU_MOVIE_CLIP_TIME_5MIN_EN)
    ITEMID_MOVIE_CLIPTIME_5MIN,
#endif
#if (MENU_MOVIE_CLIP_TIME_10MIN_EN)
	ITEMID_MOVIE_CLIPTIME_10MIN,
#endif
#if (MENU_MOVIE_CLIP_TIME_25MIN_EN)
	ITEMID_MOVIE_CLIPTIME_25MIN,
#endif
#if (MENU_MOVIE_CLIP_TIME_30MIN_EN)
    ITEMID_MOVIE_CLIPTIME_30MIN,
#endif

	ITEMID_MOVIE_NIGHT_MODE,
#if (MENU_MOVIE_SOUND_RECORD_ON_EN)
    ITEMID_MOVIE_NIGHT_MODE_ON,
#endif
#if (MENU_MOVIE_SOUND_RECORD_OFF_EN)
    ITEMID_MOVIE_NIGHT_MODE_OFF,
#endif

	ITEMID_MOVIE_POWEROFF_TIME,
#if (MENU_MOVIE_POWER_OFF_DELAY_0SEC_EN)
	ITEMID_MOVIE_POWEROFF_TIME_0MIN,
#endif
#if (MENU_MOVIE_POWER_OFF_DELAY_5SEC_EN)
	ITEMID_MOVIE_POWEROFF_TIME_5SEC,
#endif
#if (MENU_MOVIE_POWER_OFF_DELAY_10SEC_EN)
	ITEMID_MOVIE_POWEROFF_TIME_10SEC,
#endif
#if (MENU_MOVIE_POWER_OFF_DELAY_15SEC_EN)
	ITEMID_MOVIE_POWEROFF_TIME_15SEC,
#endif
#if (MENU_MOVIE_POWER_OFF_DELAY_30SEC_EN)
	ITEMID_MOVIE_POWEROFF_TIME_30SEC,
#endif
#if (MENU_MOVIE_POWER_OFF_DELAY_1MIN_EN)
	ITEMID_MOVIE_POWEROFF_TIME_1MIN,
#endif
#if (MENU_MOVIE_POWER_OFF_DELAY_2MIN_EN)
	ITEMID_MOVIE_POWEROFF_TIME_2MIN,
#endif
#if (MENU_MOVIE_POWER_OFF_DELAY_3MIN_EN)
	ITEMID_MOVIE_POWEROFF_TIME_3MIN,
#endif
#if (MENU_MOVIE_POWER_OFF_DELAY_5MIN_EN)
	ITEMID_MOVIE_POWEROFF_TIME_5MIN,
#endif
#if (MENU_MOVIE_POWER_OFF_DELAY_10MIN_EN)
	ITEMID_MOVIE_POWEROFF_TIME_10MIN,
#endif
#if (MENU_MOVIE_POWER_OFF_DELAY_15MIN_EN)
	ITEMID_MOVIE_POWEROFF_TIME_15MIN,
#endif
#if (MENU_MOVIE_POWER_OFF_DELAY_30MIN_EN)
	ITEMID_MOVIE_POWEROFF_TIME_30MIN,
#endif
#if (MENU_MOVIE_POWER_OFF_DELAY_60MIN_EN)
	ITEMID_MOVIE_POWEROFF_TIME_60MIN,
#endif
	  
	ITEMID_MOVIE_VMD_REC_TIME,
#if (MENU_MOVIE_VMD_REC_TIME_5SEC_EN)	
	ITEMID_MOVIE_VMD_REC_TIME_5SEC,
	//ITEMID_MOVIE_VMD_REC_TIME_5SEC1,// long lyj
#endif
#if (MENU_MOVIE_VMD_REC_TIME_10SEC_EN)	
	ITEMID_MOVIE_VMD_REC_TIME_10SEC,
	//ITEMID_MOVIE_VMD_REC_TIME_10SEC1,// long lyj
#endif
#if (MENU_MOVIE_VMD_REC_TIME_30SEC_EN)	
	ITEMID_MOVIE_VMD_REC_TIME_30SEC,
	//ITEMID_MOVIE_VMD_REC_TIME_30SEC1,// long lyj
#endif
#if (MENU_MOVIE_VMD_REC_TIME_1MIN_EN)	
	ITEMID_MOVIE_VMD_REC_TIME_1MIN,
#endif

	ITEMID_MOVIE_AUTO_REC,
	ITEMID_MOVIE_AUTO_REC_ON,
	ITEMID_MOVIE_AUTO_REC_OFF,

#if (MENU_VIDEO_TIMELAPSE_MODE_EN)
	// VIDEO_REC_TIMELAPSE_EN
	ITEMID_MOVIE_TIMELAPSE,
	ITEMID_MOVIE_TIMELAPSE_OFF,
	ITEMID_MOVIE_TIMELAPSE_1SEC,
	ITEMID_MOVIE_TIMELAPSE_5SEC,
	ITEMID_MOVIE_TIMELAPSE_10SEC,
	ITEMID_MOVIE_TIMELAPSE_30SEC,
	ITEMID_MOVIE_TIMELAPSE_60SEC,
#endif

#if (MENU_MOVIE_PARKING_MODE_EN)
    ITEMID_MOVIE_PARKING_MODE,
    ITEMID_MOVIE_PARKING_MODE_ON,
    ITEMID_MOVIE_PARKING_MODE_OFF,
#endif

#if (MENU_MOVIE_LDWS_MODE_EN)
    ITEMID_MOVIE_LDWS_MODE,
    ITEMID_MOVIE_LDWS_MODE_ON,
    ITEMID_MOVIE_LDWS_MODE_OFF,
#endif

#if (MENU_MOVIE_FCWS_MODE_EN)
    ITEMID_MOVIE_FCWS_MODE,
    ITEMID_MOVIE_FCWS_MODE_ON,
    ITEMID_MOVIE_FCWS_MODE_OFF,
#endif

#if (MENU_MOVIE_SAG_MODE_EN)
    ITEMID_MOVIE_SAG_MODE,
    ITEMID_MOVIE_SAG_MODE_ON,
    ITEMID_MOVIE_SAG_MODE_OFF,
#endif

#if (MENU_MOVIE_HDR_MODE_EN)
    ITEMID_MOVIE_HDR_MODE,
    ITEMID_MOVIE_HDR_MODE_ON,
    ITEMID_MOVIE_HDR_MODE_OFF,
#endif

#if (MENU_MOVIE_SLOWMOTION_MODE_EN)
    ITEMID_MOVIE_SLOWMOTION_MODE,
    ITEMID_MOVIE_SLOWMOTION_MODE_X1,
    ITEMID_MOVIE_SLOWMOTION_MODE_X2,
    ITEMID_MOVIE_SLOWMOTION_MODE_X4,
    ITEMID_MOVIE_SLOWMOTION_MODE_X8,
#endif

#if (MENU_MOVIE_WNR_MODE_EN)
    ITEMID_MOVIE_WNR_MODE,
    ITEMID_MOVIE_WNR_MODE_OFF,
    ITEMID_MOVIE_WNR_MODE_ON,
#endif

#if(MENU_REARCAM_TYPE_EN)
	ITEMID_REARCAM_TYPE,
	ITEMID_REARCAM_TYPE_NONE,
	ITEMID_REARCAM_TYPE_AIT,
	ITEMID_REARCAM_TYPE_SONIX_MJPEG2H264,
	ITEMID_REARCAM_TYPE_SONIX_MJPEG,
	ITEMID_REARCAM_TYPE_TV_DECODER,
	ITEMID_REARCAM_TYPE_BAYER_SENSOR,	ITEMID_REARCAM_TYPE_YUV_SENSOR,
#endif
	ITEMID_MOVIE_RGB_MODE,
	ITEMID_MOVIE_RGB_MODE_1,
	ITEMID_MOVIE_RGB_MODE_2,
	ITEMID_MOVIE_RGB_MODE_3,
	ITEMID_MOVIE_RGB_MODE_4,
	ITEMID_MOVIE_RGB_MODE_5,
	ITEMID_MOVIE_ITEM_END
}MOVIEITEMID;

/*===========================================================================
 * Function prototype
 *===========================================================================*/ 

//UINT32 MenuStateVideoMode( UINT32 ulEvent, UINT32 ulPosition );

void MenuStateClockSettingsMode( UINT32 ulEvent, UINT32 ulPosition );

#endif //_MENU_STATE_MOVIE_MENU_H_

AHC_BOOL MenuStateVideoModeInit(void* pData);
AHC_BOOL MenuStateVideoModeShutDown(void* pData);

UINT32 MenuStateClockSettingsModeHandler(UINT32 ulMsgId, UINT32 ulEvent, UINT32 ulParam );
AHC_BOOL MenuStateClockSettingsModeInitLCD(void* pData);         
#if (TVOUT_ENABLE)
AHC_BOOL MenuStateClockSettingsModeInitTV(void* pData);
#endif
#if (HDMI_ENABLE)
AHC_BOOL MenuStateClockSettingsModeInitHDMI(void* pData);
#endif
AHC_BOOL MenuStateClockSettingsModeShutDown(void* pData);
AHC_BOOL MenuStateEditConfirmModeShutDown(void* pData);

/*
void STATE_CLOCK_SETTING_MODE_EVENT_ENTER_NET_PLAYBACK(UINT32 ulEvent);
void STATE_CLOCK_SETTING_MODE_EVENT_USB_B_DEVICE_DETECT(UINT32 ulEvent);
void STATE_CLOCK_SETTING_MODE_EVENT_USB_REMOVED_LCD(UINT32 ulEvent);
void STATE_CLOCK_SETTING_MODE_EVENT_USB_DETECT_LCD(UINT32 ulEvent);
#if (TVOUT_ENABLE)
void STATE_CLOCK_SETTING_MODE_EVENT_TV_DETECT(UINT32 ulEvent);
#endif
#if (HDMI_ENABLE)
void STATE_CLOCK_SETTING_MODE_EVENT_HDMI_DETECT(UINT32 ulEvent);
#endif
*/
#if (SD_UPDATE_FW_EN)
UINT32 MenuStateSDUpdateModeHandler(UINT32 ulMsgId, UINT32 ulEvent, UINT32 ulParam );
AHC_BOOL MenuStateSDUpdateModeInit(void* pData);
AHC_BOOL MenuStateSDUpdateModeShutDown(void* pData);
#endif
AHC_BOOL StateSelectFuncClockSettingMode(void);
