// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: Test

#ifndef _TEST_UI_H
#define _TEST_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
  #if __has_include("lvgl.h")
    #include "lvgl.h"
  #elif __has_include("lvgl/lvgl.h")
    #include "lvgl/lvgl.h"
  #else
    #include "lvgl.h"
  #endif
#else
  #include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "ui_events.h"

// SCREEN: ui_Home
void ui_Home_screen_init(void);
extern lv_obj_t *ui_Home;
void ui_event_Button1( lv_event_t * e);
extern lv_obj_t *ui_Button1;
extern lv_obj_t *ui_Image1;
void ui_event_Button2( lv_event_t * e);
extern lv_obj_t *ui_Button2;
extern lv_obj_t *ui_Label1;
void ui_event_Button3( lv_event_t * e);
extern lv_obj_t *ui_Button3;
extern lv_obj_t *ui_Label2;
void ui_event_Button4( lv_event_t * e);
extern lv_obj_t *ui_Button4;
void ui_event_Button5( lv_event_t * e);
extern lv_obj_t *ui_Button5;
extern lv_obj_t *ui_Label3;
extern lv_obj_t *ui_Label4;
void ui_event_Button6( lv_event_t * e);
extern lv_obj_t *ui_Button6;
extern lv_obj_t *ui_Label5;
void ui_event_Button7( lv_event_t * e);
extern lv_obj_t *ui_Button7;
extern lv_obj_t *ui_Label6;
void ui_event_Button8( lv_event_t * e);
extern lv_obj_t *ui_Button8;
extern lv_obj_t *ui_Label7;
void ui_event_Button9( lv_event_t * e);
extern lv_obj_t *ui_Button9;
extern lv_obj_t *ui_Label8;
void ui_event_Button10( lv_event_t * e);
extern lv_obj_t *ui_Button10;
extern lv_obj_t *ui_Label9;
void ui_event_Button12( lv_event_t * e);
extern lv_obj_t *ui_Button12;
extern lv_obj_t *ui_Label11;
// SCREEN: ui_Sleep
void ui_Sleep_screen_init(void);
extern lv_obj_t *ui_Sleep;
void ui_event_Button11( lv_event_t * e);
extern lv_obj_t *ui_Button11;
extern lv_obj_t *ui_Label10;
extern lv_obj_t *ui____initial_actions0;

LV_IMG_DECLARE( ui_img_siri_png);   // assets/siri.png




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
