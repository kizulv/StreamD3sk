#include <Arduino_GFX_Library.h> //Version 1.4.7
#include <lvgl.h> //Version 8.3.11

//Setup Display for JC4827W543 device (with NV3041A) with Arduino_GFX_Library
#include "displaySetup.h"

// Call UI - Frome Squareline Studio
#include "ui.h"

// Keyboard - This sketch should be used when USB is in OTG mode
#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

unsigned long timeStartCountToSleep; 
int timeToSleep = 1800000; //Time in ms to Sleep Screen

void setup(){
    Serial.begin(115200);
    Keyboard.begin();
    USB.begin();
    f_SetupDisplay();
    ui_init();     

    timeStartCountToSleep = millis(); //Time when Code run;
}

void loop(){
    lv_timer_handler(); // let the GUI do its work
    gfx->flush(); //Run it when #define CANVAS in displaySetup

    // Goto Sleep Screen after X time
    if ( (unsigned long) (millis() - timeStartCountToSleep) >= timeToSleep ) {

        timeStartCountToSleep = millis(); //ReUpdate timeStartCountToSleep
        lv_disp_load_scr(ui_Sleep); //Call SleepScreen 'ui_Sleep'
        
    }
    
}