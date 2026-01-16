#ifndef __OSUI_UI_NAVBAR_H__
#define __OSUI_UI_NAVBAR_H__

//OSUI基础
#include"osui/core/osui_base.h"
//OSUI显示
#include"osui/disp/osui_disp.h"
//OSUI输入
#include"osui/input/osui_input.h"

//参数定义
#define OSUI_NAVBAR_OPA (0)//导航条透明度
#define OSUI_NAVBAR_SLIDE_EXIT_RATIO (0.1)//导航条上滑退出阈值比例
#define OSUI_NAVBAR_HEIGHT_DP (16)//导航条DP高度
#define OSUI_NAVBAR_THICK_DP (6)//导航条DP厚度
#define OSUI_NAVBAR_PULL_RATIO (0.25)//导航条上拉比例
#define OSUI_NAVBAR_SAMPLE_TIME (LV_INDEV_STATE_PR*2)//导航条采样时间
#define OSUI_NAVBAR_ANIM_PDC_P (0.4)//导航条动画PD控制器P参数
#define OSUI_NAVBAR_ANIM_PDC_D (0.1)//导航条动画PD控制器D参数

//UI导航条初始化
lv_obj_t* osui_ui_navbar_init();
//UI导航条初始化清理
void osui_ui_navbar_init_clean();
//设置导航条颜色
void osui_ui_navbar_set_color(lv_color_t color);

#endif
