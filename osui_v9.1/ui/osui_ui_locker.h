#ifndef __OSUI_UI_LOCKRE_H__
#define __OSUI_UI_LOCKRE_H__

//OSUI基础
#include"osui/core/osui_base.h"
//OSUI显示
#include"osui/disp/osui_disp.h"
// //OSUI输入
// #include"osui/input/osui_input.h"

//参数定义
#define OSUI_LOCKER_SAMPLE_TIME (LV_INDEV_STATE_PR*2)//锁屏采样时间
#define OSUI_LOCKER_SLIDE_EXIT_RATIO (0.3)//锁屏上滑退出阈值比例
#define OSUI_LOCKER_INFO_LAYOUT_LEFT_RATIO (0.1)//锁屏信息布局左间距比例
#define OSUI_LOCKER_INFO_LAYOUT_LEFT_BOTTOM_RATIO (0.2)//锁屏信息布局左底间距比例
#define OSUI_LOCKER_INFO_LAYOUT_RIGHT_RATIO (0.1)//锁屏信息布局右间距比例
#define OSUI_LOCKER_INFO_LAYOUT_RIGHT_BOTTOM_RATIO (0.2)//锁屏信息布局右底间距比例
#define OSUI_LOCKER_FRONT_ONLINE_ANIM_PDC_P (0.4)//锁屏前景在线动画PD控制器P参数
#define OSUI_LOCKER_FRONT_ONLINE_ANIM_PDC_D (0.1)//锁屏前景在线动画PD控制器D参数
#define OSUI_LOCKER_FRONT_LOGIN_ANIM_PDC_P (0.2)//锁屏前景登录动画PD控制器P参数
#define OSUI_LOCKER_FRONT_LOGIN_ANIM_PDC_D (0.1)//锁屏前景登录动画PD控制器D参数
#define OSUI_LOCKER_BACK_LOGIN_ANIM_PDC_P (0.3)//锁屏背景登录动画PD控制器P参数
#define OSUI_LOCKER_BACK_LOGIN_ANIM_PDC_D (0.0)//锁屏背景登录动画PD控制器D参数
#define OSUI_LOCKER_FRONT_LOGOUT_ANIM_PDC_P (0.2)//锁屏前景注销动画PD控制器P参数
#define OSUI_LOCKER_FRONT_LOGOUT_ANIM_PDC_D (0.1)//锁屏前景注销动画PD控制器D参数
#define OSUI_LOCKER_BACK_LOGOUT_ANIM_PDC_P (0.3)//锁屏背景注销动画PD控制器P参数
#define OSUI_LOCKER_BACK_LOGOUT_ANIM_PDC_D (0.1)//锁屏背景注销动画PD控制器D参数
#define OSUI_LOCKER_MASK_ANIM_PDC_P (0.3)//锁屏遮罩动画PD控制器P参数
#define OSUI_LOCKER_MASK_ANIM_PDC_D (0.1)//锁屏遮罩动画PD控制器D参数

//UI锁屏初始化
void osui_ui_locker_init();
//进入锁屏
void osui_ui_locker_enter();
//获取锁屏状态
bool osui_ui_locker_get_status();
//设置锁屏图标
void osui_ui_locker_set_icon(const char* icon);
//设置锁屏时间
void osui_ui_locker_set_time(const char* time);
//设置锁屏日期
void osui_ui_locker_set_date(const char* date);
//设置锁屏年份
void osui_ui_locker_set_year(const char* year);
//设置锁屏字体颜色
void osui_ui_locker_set_font_color(lv_color_t color);
//设置锁屏背景颜色
void osui_ui_locker_set_back_color(lv_color_t color);
//设置锁屏壁纸
void osui_ui_locker_set_wallpaper(char* path);

#endif
