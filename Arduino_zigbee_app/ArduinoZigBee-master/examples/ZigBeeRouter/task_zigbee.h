#ifndef __TASK_ZIGBEE_H__
#define __TASK_ZIGBEE_H__




#define ZIGBEE_PACKAGE_MAX_LEN								120

#define ATTRID_XIAOMI_SENS_STATUS_REPORT					0xFF01
#define ATTRID_XIAOMI_SENS_STATUS_ON_OFF					0x6666

/* SMART IR DEVICE */
#define ATTRID_IOT_SMART_IR_CMD_REPORT						0x1111
#define ATTRID_IOT_SMART_IR_TEMPERATURE_HUMIDITY_REPORT		0x2222
#define ATTRID_IOT_SMART_IR_TEMPERATURE_REPORT				0x4444
#define ATTRID_IOT_SMART_IR_HUMIDITY_REPORT					0x5555

/* SMART TOUCH DEVICE */
#define ATTRID_IOT_SMART_TOUCH_CONTROL_REQ						0x1212
#define ATTRID_IOT_SMART_TOUCH_CONTROL_RES						0x1313
#define ATTRID_IOT_SMART_TOUCH_FIRMWARE_SL_FW_INFO_REQ			0x1414
#define ATTRID_IOT_SMART_TOUCH_FIRMWARE_SL_FW_INFO_RES			0x1515
#define ATTRID_IOT_SMART_TOUCH_FIRMWARE_SL_FW_TRANF_REQ			0x1616
#define ATTRID_IOT_SMART_TOUCH_FIRMWARE_SL_FW_TRANF_RES			0x1717
#define ATTRID_IOT_SMART_TOUCH_FIRMWARE_PACKED_TIMEOUT_REQ		0x1818
#define ATTRID_IOT_SMART_TOUCH_FIRMWARE_TRANF_DATA_REQ			0x1919
#define ATTRID_IOT_SMART_TOUCH_FIRMWARE_TRANF_DATA_RES			0x2020
#define ATTRID_IOT_SMART_TOUCH_FIRMWARE_CHECKSUM_REQ			0x2121
#define ATTRID_IOT_SMART_TOUCH_FIRMWARE_CHECKSUM_RES			0x2323
#define ATTRID_IOT_SMART_TOUCH_FIRMWARE_CHECKSUM_CORRECT		0x2424
#define ATTRID_IOT_SMART_TOUCH_FIRMWARE_CHECKSUM_INCORRECT		0x2525
#define ATTRID_IOT_SMART_TOUCH_FIRMWARE_INTERNAL_UPDATE			0x2626
#define ATTRID_IOT_SMART_TOUCH_FIRMWARE_INTERNAL_UPDATE_RES		0x2727


/* NOTE:

- TOUCH: + plastic chair: 4 - 5 - 6 - 7
		 + wood    chair: 1 - 2 - 3 - 4

-  SENTITIVE: + plastic chair: 22 - 11
			  + wood	chair: 24 - 12

*/

/*
65281 - 0xFF01 report:
{ '1': 3069,		= Battery
  '4': 5117,
  '5': 62,
  '6': 0,
  '10': 0,
  '100': 2045,	= Temperatemure
  '101': 3837 	= Humidity
}

GW_ZIGBEE_ZCL_CMD_HANDLER
[pOutgoingMsg] short_addr = 0xe86c
[pOutgoingMsg] cluster_id = 0x0000
[pOutgoingMsg] group_id = 0x0000
[pOutgoingMsg] cmd = 0x0a
[pOutgoingMsg] attrID = 0xff01
[pOutgoingMsg] dataType = 0x42
[pOutgoingMsg] dataLen = 28
[pOutgoingMsg] data: 1b 01 21 77 0b 04 21 a8 43 05 21 1a 0c 06 24 00 00 00 00 00 64 29 4a 0c 65 21 70 1b

1b -> Dum
01 -> Type Battery
	21 -> ZCL_DATATYPE_UINT16
	77 0b -> Value
04 -> Type Dum1
	21 -> ZCL_DATATYPE_UINT16
	a8 43 -> Value
05 -> Type Dum2
	21 -> ZCL_DATATYPE_UINT16
	1a 0c -> Value
06 -> Type Dum3
	24 -> ZCL_DATATYPE_UINT40
	00 00 00 00 00 -> Value
64 -> Temperatemure
	29 -> ZCL_DATATYPE_INT16
	4a 0c -> Value
65 -> Humidity
	21 -> ZCL_DATATYPE_UINT16
	70 1b -> Value
*/


#endif //__TASK_ZIGBEE_H__