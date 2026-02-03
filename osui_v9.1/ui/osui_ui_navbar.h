#ifndef __OSUI_UI_NAVBAR_H__
#define __OSUI_UI_NAVBAR_H__

//OSUI基础
#include"osui/core/osui_base.h"
//OSUI显示
#include"osui/disp/osui_disp.h"
//OSUI输入
#include"osui/input/osui_input.h"

//UI导航条初始化
lv_obj_t* osui_ui_navbar_init();
//UI导航条初始化清理
void osui_ui_navbar_init_clean();
//设置导航条颜色
void osui_ui_navbar_set_color(lv_color_t color);

#endif
