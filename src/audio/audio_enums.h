#pragma once

enum eRadioStation
{
	HEAD_RADIO,
	DOUBLE_CLEF,
	JAH_RADIO,
	RISE_FM,
	LIPS_106,
	GAME_FM,
	MSX_FM,
	FLASHBACK,
	CHATTERBOX,
	USERTRACK,
	POLICE_RADIO,
	RADIO_OFF,
};

enum eMusicMode
{
	MUSICMODE_FRONTEND = 0,
	MUSICMODE_GAME,
	MUSICMODE_CUTSCENE,
	MUSICMODE_DISABLE,
	MUSICMODE_DISABLED,
};

enum eStreamedSounds
{
	STREAMED_SOUND_RADIO_HEAD,
	STREAMED_SOUND_RADIO_CLASSIC,
	STREAMED_SOUND_RADIO_KJAH,
	STREAMED_SOUND_RADIO_RISE,
	STREAMED_SOUND_RADIO_LIPS,
	STREAMED_SOUND_RADIO_GAME,
	STREAMED_SOUND_RADIO_MSX,
	STREAMED_SOUND_RADIO_FLASH,
	STREAMED_SOUND_RADIO_CHAT,
	STREAMED_SOUND_RADIO_MP3_PLAYER,
	STREAMED_SOUND_RADIO_POLICE,
	STREAMED_SOUND_CITY_AMBIENT,
	STREAMED_SOUND_WATER_AMBIENT,
	STREAMED_SOUND_ANNOUNCE_COMMERCIAL_OPEN,
	STREAMED_SOUND_ANNOUNCE_SUBURBAN_OPEN,
	STREAMED_SOUND_NEWS_INTRO,
	STREAMED_SOUND_BANK_INTRO,
	STREAMED_SOUND_CUTSCENE_LUIGI1_LG,
	STREAMED_SOUND_CUTSCENE_LUIGI2_DSB,
	STREAMED_SOUND_CUTSCENE_LUIGI3_DM,
	STREAMED_SOUND_CUTSCENE_LUIGI4_PAP,
	STREAMED_SOUND_CUTSCENE_LUIGI5_TFB,
	STREAMED_SOUND_CUTSCENE_JOEY0_DM2,
	STREAMED_SOUND_CUTSCENE_JOEY1_LFL,
	STREAMED_SOUND_CUTSCENE_JOEY2_KCL,
	STREAMED_SOUND_CUTSCENE_JOEY3_VH,
	STREAMED_SOUND_CUTSCENE_JOEY4_ETH,
	STREAMED_SOUND_CUTSCENE_JOEY5_DST,
	STREAMED_SOUND_CUTSCENE_JOEY6_TBJ,
	STREAMED_SOUND_CUTSCENE_TONI1_TOL,
	STREAMED_SOUND_CUTSCENE_TONI2_TPU,
	STREAMED_SOUND_CUTSCENE_TONI3_MAS,
	STREAMED_SOUND_CUTSCENE_TONI4_TAT,
	STREAMED_SOUND_CUTSCENE_TONI5_BF,
	STREAMED_SOUND_CUTSCENE_SAL0_MAS,
	STREAMED_SOUND_CUTSCENE_SAL1_PF,
	STREAMED_SOUND_CUTSCENE_SAL2_CTG,
	STREAMED_SOUND_CUTSCENE_SAL3_RTC,
	STREAMED_SOUND_CUTSCENE_SAL5_LRQ,
	STREAMED_SOUND_CUTSCENE_SAL4_BDBA,
	STREAMED_SOUND_CUTSCENE_SAL4_BDBB,
	STREAMED_SOUND_CUTSCENE_SAL2_CTG2,
	STREAMED_SOUND_CUTSCENE_SAL4_BDBD,
	STREAMED_SOUND_CUTSCENE_SAL5_LRQB,
	STREAMED_SOUND_CUTSCENE_SAL5_LRQC,
	STREAMED_SOUND_CUTSCENE_ASUKA_1_SSO,
	STREAMED_SOUND_CUTSCENE_ASUKA_2_PP,
	STREAMED_SOUND_CUTSCENE_ASUKA_3_SS,
	STREAMED_SOUND_CUTSCENE_ASUKA_4_PDR,
	STREAMED_SOUND_CUTSCENE_ASUKA_5_K2FT,
	STREAMED_SOUND_CUTSCENE_KENJI1_KBO,
	STREAMED_SOUND_CUTSCENE_KENJI2_GIS,
	STREAMED_SOUND_CUTSCENE_KENJI3_DS,
	STREAMED_SOUND_CUTSCENE_KENJI4_SHI,
	STREAMED_SOUND_CUTSCENE_KENJI5_SD,
	STREAMED_SOUND_CUTSCENE_RAY0_PDR2,
	STREAMED_SOUND_CUTSCENE_RAY1_SW,
	STREAMED_SOUND_CUTSCENE_RAY2_AP,
	STREAMED_SOUND_CUTSCENE_RAY3_ED,
	STREAMED_SOUND_CUTSCENE_RAY4_GF,
	STREAMED_SOUND_CUTSCENE_RAY5_PB,
	STREAMED_SOUND_CUTSCENE_RAY6_MM,
	STREAMED_SOUND_CUTSCENE_DONALD1_STOG,
	STREAMED_SOUND_CUTSCENE_DONALD2_KK,
	STREAMED_SOUND_CUTSCENE_DONALD3_ADO,
	STREAMED_SOUND_CUTSCENE_DONALD5_ES,
	STREAMED_SOUND_CUTSCENE_DONALD7_MLD,
	STREAMED_SOUND_CUTSCENE_DONALD4_GTA,
	STREAMED_SOUND_CUTSCENE_DONALD4_GTA2,
	STREAMED_SOUND_CUTSCENE_DONALD6_STS,
	STREAMED_SOUND_CUTSCENE_ASUKA6_BAIT,
	STREAMED_SOUND_CUTSCENE_ASUKA7_ETG,
	STREAMED_SOUND_CUTSCENE_ASUKA8_PS,
	STREAMED_SOUND_CUTSCENE_ASUKA9_ASD,
	STREAMED_SOUND_CUTSCENE_KENJI4_SHI2,
	STREAMED_SOUND_CUTSCENE_CATALINA1_TEX,
	STREAMED_SOUND_CUTSCENE_ELBURRO1_PH1,
	STREAMED_SOUND_CUTSCENE_ELBURRO2_PH2,
	STREAMED_SOUND_CUTSCENE_ELBURRO3_PH3,
	STREAMED_SOUND_CUTSCENE_ELBURRO4_PH4,
	STREAMED_SOUND_CUTSCENE_YARDIE_PH1,
	STREAMED_SOUND_CUTSCENE_YARDIE_PH2,
	STREAMED_SOUND_CUTSCENE_YARDIE_PH3,
	STREAMED_SOUND_CUTSCENE_YARDIE_PH4,
	STREAMED_SOUND_CUTSCENE_HOODS_PH1,
	STREAMED_SOUND_CUTSCENE_HOODS_PH2,
	STREAMED_SOUND_CUTSCENE_HOODS_PH3,
	STREAMED_SOUND_CUTSCENE_HOODS_PH4,
	STREAMED_SOUND_CUTSCENE_HOODS_PH5,
	STREAMED_SOUND_CUTSCENE_MARTY_PH1,
	STREAMED_SOUND_CUTSCENE_MARTY_PH2,
	STREAMED_SOUND_CUTSCENE_MARTY_PH3,
	STREAMED_SOUND_CUTSCENE_MARTY_PH4,
	STREAMED_SOUND_MISSION_COMPLETED,
	STREAMED_SOUND_GAME_COMPLETED,
	STREAMED_SOUND_MISSION_LIB_A1,
	STREAMED_SOUND_MISSION_LIB_A2,
	STREAMED_SOUND_MISSION_LIB_A,
	STREAMED_SOUND_MISSION_LIB_B,
	STREAMED_SOUND_MISSION_LIB_C,
	STREAMED_SOUND_MISSION_LIB_D,
	STREAMED_SOUND_MISSION_L2_A,
	STREAMED_SOUND_MISSION_J4T_1,
	STREAMED_SOUND_MISSION_J4T_2,
	STREAMED_SOUND_MISSION_J4T_3,
	STREAMED_SOUND_MISSION_J4T_4,
	STREAMED_SOUND_MISSION_J4_A,
	STREAMED_SOUND_MISSION_J4_B,
	STREAMED_SOUND_MISSION_J4_C,
	STREAMED_SOUND_MISSION_J4_D,
	STREAMED_SOUND_MISSION_J4_E,
	STREAMED_SOUND_MISSION_J4_F,
	STREAMED_SOUND_MISSION_J6_1,
	STREAMED_SOUND_MISSION_J6_A,
	STREAMED_SOUND_MISSION_J6_B,
	STREAMED_SOUND_MISSION_J6_C,
	STREAMED_SOUND_MISSION_J6_D,
	STREAMED_SOUND_MISSION_T4_A,
	STREAMED_SOUND_MISSION_S1_A,
	STREAMED_SOUND_MISSION_S1_A1,
	STREAMED_SOUND_MISSION_S1_B,
	STREAMED_SOUND_MISSION_S1_C,
	STREAMED_SOUND_MISSION_S1_C1,
	STREAMED_SOUND_MISSION_S1_D,
	STREAMED_SOUND_MISSION_S1_E,
	STREAMED_SOUND_MISSION_S1_F,
	STREAMED_SOUND_MISSION_S1_G,
	STREAMED_SOUND_MISSION_S1_H,
	STREAMED_SOUND_MISSION_S1_I,
	STREAMED_SOUND_MISSION_S1_J,
	STREAMED_SOUND_MISSION_S1_K,
	STREAMED_SOUND_MISSION_S1_L,
	STREAMED_SOUND_MISSION_S3_A,
	STREAMED_SOUND_MISSION_S3_B,
	STREAMED_SOUND_MISSION_EL3_A,
	STREAMED_SOUND_MISSION_MF1_A,
	STREAMED_SOUND_MISSION_MF2_A,
	STREAMED_SOUND_MISSION_MF3_A,
	STREAMED_SOUND_MISSION_MF3_B,
	STREAMED_SOUND_MISSION_MF3_B1,
	STREAMED_SOUND_MISSION_MF3_C,
	STREAMED_SOUND_MISSION_MF4_A,
	STREAMED_SOUND_MISSION_MF4_B,
	STREAMED_SOUND_MISSION_MF4_C,
	STREAMED_SOUND_MISSION_A1_A,
	STREAMED_SOUND_MISSION_A3_A,
	STREAMED_SOUND_MISSION_A5_A,
	STREAMED_SOUND_MISSION_A4_A,
	STREAMED_SOUND_MISSION_A4_B,
	STREAMED_SOUND_MISSION_A4_C,
	STREAMED_SOUND_MISSION_A4_D,
	STREAMED_SOUND_MISSION_K1_A,
	STREAMED_SOUND_MISSION_K3_A,
	STREAMED_SOUND_MISSION_R1_A,
	STREAMED_SOUND_MISSION_R2_A,
	STREAMED_SOUND_MISSION_R2_B,
	STREAMED_SOUND_MISSION_R2_C,
	STREAMED_SOUND_MISSION_R2_D,
	STREAMED_SOUND_MISSION_R2_E,
	STREAMED_SOUND_MISSION_R2_F,
	STREAMED_SOUND_MISSION_R2_G,
	STREAMED_SOUND_MISSION_R2_H,
	STREAMED_SOUND_MISSION_R5_A,
	STREAMED_SOUND_MISSION_R6_A,
	STREAMED_SOUND_MISSION_R6_A1,
	STREAMED_SOUND_MISSION_R6_B,
	STREAMED_SOUND_MISSION_LO2_A,
	STREAMED_SOUND_MISSION_LO6_A,
	STREAMED_SOUND_MISSION_YD2_A,
	STREAMED_SOUND_MISSION_YD2_B,
	STREAMED_SOUND_MISSION_YD2_C,
	STREAMED_SOUND_MISSION_YD2_C1,
	STREAMED_SOUND_MISSION_YD2_D,
	STREAMED_SOUND_MISSION_YD2_E,
	STREAMED_SOUND_MISSION_YD2_F,
	STREAMED_SOUND_MISSION_YD2_G,
	STREAMED_SOUND_MISSION_YD2_H,
	STREAMED_SOUND_MISSION_YD2_ASS,
	STREAMED_SOUND_MISSION_YD2_OK,
	STREAMED_SOUND_MISSION_H5_A,
	STREAMED_SOUND_MISSION_H5_B,
	STREAMED_SOUND_MISSION_H5_C,
	STREAMED_SOUND_MISSION_AMMU_A,
	STREAMED_SOUND_MISSION_AMMU_B,
	STREAMED_SOUND_MISSION_AMMU_C,
	STREAMED_SOUND_MISSION_DOOR_1,
	STREAMED_SOUND_MISSION_DOOR_2,
	STREAMED_SOUND_MISSION_DOOR_3,
	STREAMED_SOUND_MISSION_DOOR_4,
	STREAMED_SOUND_MISSION_DOOR_5,
	STREAMED_SOUND_MISSION_DOOR_6,
	STREAMED_SOUND_MISSION_T3_A,
	STREAMED_SOUND_MISSION_T3_B,
	STREAMED_SOUND_MISSION_T3_C,
	STREAMED_SOUND_MISSION_K1_B,
	STREAMED_SOUND_MISSION_CAT1,
	TOTAL_STREAMED_SOUNDS,
	NO_TRACK,
};

enum AudioEntityHandle {
	AEHANDLE_NONE = -5,
	AEHANDLE_ERROR_NOAUDIOSYS = -4,
	AEHANDLE_ERROR_NOFREESLOT = -3,
	AEHANDLE_ERROR_NOENTITY = -2,
	AEHANDLE_ERROR_BADAUDIOTYPE = -1,
};

enum eAudioType
{
	AUDIOTYPE_PHYSICAL = 0,
	AUDIOTYPE_EXPLOSION,
	AUDIOTYPE_FIRE,
	AUDIOTYPE_WEATHER,
	AUDIOTYPE_CRANE,
	AUDIOTYPE_SCRIPTOBJECT,
	AUDIOTYPE_BRIDGE,
	AUDIOTYPE_COLLISION,
	AUDIOTYPE_FRONTEND,
	AUDIOTYPE_PROJECTILE,
	AUDIOTYPE_GARAGE,
	AUDIOTYPE_FIREHYDRANT,
	AUDIOTYPE_WATERCANNON,
	AUDIOTYPE_POLICERADIO,
	TOTAL_AUDIO_TYPES,
};
