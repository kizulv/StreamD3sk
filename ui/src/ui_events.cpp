// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: Test
#include <Arduino.h>
#include "ui.h"

#include "USB.h"
#include "USBHIDKeyboard.h"

extern USBHIDKeyboard Keyboard;
extern unsigned long timeStartCountToSleep; //Time when Code run;

// Call Reboot
void(* resetFunc) (void) = 0;//declare reset function at address 0

void btn_siri_test(lv_event_t * e)
{
	timeStartCountToSleep = millis(); //ReUpdate TimeStartCountToSleep

	Keyboard.press(KEY_F12);   // Nhấn phím
	Keyboard.release(KEY_F12); // Nhả phím
}

void btn_F11_test(lv_event_t * e)
{
	timeStartCountToSleep = millis(); //ReUpdate TimeStartCountToSleep

	Keyboard.press(KEY_F11);   // Nhấn phím
	Keyboard.release(KEY_F11); // Nhả phím
}

void btn_sleep_test(lv_event_t * e)
{
	timeStartCountToSleep = millis(); //ReUpdate TimeStartCountToSleep

	Keyboard.press(KEY_RIGHT_CTRL);
	Keyboard.press(KEY_RIGHT_SHIFT);
	Keyboard.press(KEY_F12);
	Keyboard.releaseAll();
}

void btn_14inch_test(lv_event_t * e)
{	
	timeStartCountToSleep = millis(); //ReUpdate TimeStartCountToSleep
	Keyboard.press(KEY_RIGHT_CTRL);
	Keyboard.press(KEY_RIGHT_SHIFT);
	Keyboard.press(KEY_F9);
	Keyboard.releaseAll();

}

void btn_dell_test(lv_event_t * e)
{
	timeStartCountToSleep = millis(); //ReUpdate TimeStartCountToSleep

	Keyboard.press(KEY_RIGHT_CTRL);
	Keyboard.press(KEY_RIGHT_SHIFT);
	Keyboard.press(KEY_F8);
	Keyboard.releaseAll();
}

void btn_zoom_test(lv_event_t * e)
{	
	timeStartCountToSleep = millis(); //ReUpdate TimeStartCountToSleep

	Keyboard.press(KEY_RIGHT_CTRL);
	Keyboard.press(KEY_RIGHT_SHIFT);
	Keyboard.press(KEY_F7);
	Keyboard.releaseAll();
}

void btn_full_test(lv_event_t * e)
{	
	timeStartCountToSleep = millis(); //ReUpdate TimeStartCountToSleep

	Keyboard.press(KEY_LEFT_CTRL);
	Keyboard.press(KEY_LEFT_GUI);
	Keyboard.press('f');
	Keyboard.releaseAll();
}

void btn_desktop_left(lv_event_t * e)
{	
	timeStartCountToSleep = millis(); //ReUpdate TimeStartCountToSleep

	Keyboard.press(KEY_LEFT_CTRL);
	Keyboard.press(KEY_LEFT_ARROW);
	Keyboard.releaseAll();
}

void btn_desktop_right(lv_event_t * e)
{	
	timeStartCountToSleep = millis(); //ReUpdate TimeStartCountToSleep

	Keyboard.press(KEY_LEFT_CTRL);
	Keyboard.press(KEY_RIGHT_ARROW);
	Keyboard.releaseAll();
}

void btn_reboot_device(lv_event_t * e)
{
	resetFunc(); //call reset 
}

void btn_sleepScreen_test(lv_event_t * e)
{	
	timeStartCountToSleep = millis(); //ReUpdate TimeStartCountToSleep
	
	lv_disp_load_scr(ui_Sleep);
}

void btn_wakeUp(lv_event_t * e)
{
	resetFunc(); //call reset 
}
