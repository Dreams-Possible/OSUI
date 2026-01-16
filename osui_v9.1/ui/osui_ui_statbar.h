#ifndef __OSUI_UI_STATBAR_H__
#define __OSUI_UI_STATBAR_H__

//OSUI基础
#include"osui/core/osui_base.h"
//OSUI显示
#include"osui/disp/osui_disp.h"
//OSUI输入
#include"osui/input/osui_input.h"

// //参数定义
#define OSUI_STATBAR_OPA (0)//状态栏透明度
#define OSUI_STATBAR_HEIGHT_DP (24)//状态栏DP高度
#define OSUI_STATBAR_GAP_DP (6)//状态栏DP边距
// #define OSUI_STATBAR_PULL_RATIO (0.25)//状态栏上拉比例
// #define OSUI_STATBAR_SAMPLE_TIME (LV_INDEV_STATE_PR*2)//状态栏采样时间
// #define OSUI_STATBAR_ANIM_PDC_P (0.4)//状态栏动画PD控制器P参数
// #define OSUI_STATBAR_ANIM_PDC_D (0.1)//状态栏动画PD控制器D参数

//UI状态栏初始化
lv_obj_t* osui_ui_navbar_init();
//UI状态栏初始化清理
void osui_ui_navbar_init_clean();
//获取状态栏高度
uint16_t osui_ui_statbar_get_height();
//设置状态栏图标
void osui_ui_statbar_set_icon(const char* icon);
//设置状态栏时间
void osui_ui_statbar_set_time(const char* time);
//设置状态栏电量
void osui_ui_statbar_set_batt(const char* batt);
//设置状态栏字体颜色
void osui_ui_statbar_set_font_color(lv_color_t color);

#endif
