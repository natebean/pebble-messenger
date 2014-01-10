//
//  main.h
//  pebble_whatsapp
//
//  Created by Jannis Pohl on 21.10.13.
//
//

#ifndef pebble_whatsapp_main_h
#define pebble_whatsapp_main_h

#include <pebble.h>

#define VERSION_CODE 0x1008
#define VERSION_1 1
#define VERSION_2 8

enum
{
	KEY_ACTION = 0x01,
	KEY_NUM_CONVERSATIONS = 0x02,
	KEY_NUMBER = 0x03,
	KEY_MESSAGE = 0x04,
	KEY_LAST_CONVERSATION = 0x05,
	KEY_QUICK_RESPONSE_ID = 0x06,
	KEY_VERSION_CODE = 0x07,
	KEY_NAME = 0x08,
	KEY_REQUEST_ID = 0x09,
	
	KEY_CONVERSATION = 0x7F
};

enum
{
	ACTION_WHATSAPP_REQUEST_CONVERSATIONS = 0x01,
	ACTION_WHATSAPP_SEND_MESSAGE = 0x02,
	ACTION_REQUEST_QUICK_RESPONSES = 0x03,
	ACTION_WHATSAPP_SEND_QUICK_RESPONSE = 0x04,
	ACTION_SMS_SEND_MESSAGE = 0x05,
	ACTION_SMS_SEND_QUICK_RESPONSE = 0x06,
	ACTION_SMS_REQUEST_CONVERSATIONS = 0x07
};

extern uint8_t current_request_id;

#endif