#ifndef __OSUI_UI_ANIM_H__
#define __OSUI_UI_ANIM_H__

//OSUI基础
#include"osui/core/osui_base.h"
//OSUI输入
#include"osui/input/osui_input.h"
//UIPD控制器
#include"osui/ui/osui_ui_pdc.h"

//参数定义
#define OSUI_ANIM_PDC_P 0.2//动画吸附PD控制器P参数
#define OSUI_ANIM_PDC_D 0.1//动画吸附PD控制器D参数

// //UI动画跟随类
// typedef enum osui_ui_anim_follow_type_t
// {
//     OSUI_UI_ANIM_FOLLOW_RELATIVE = 0,
//     OSUI_UI_ANIM_FOLLOW_CENTER = 1,
// }osui_ui_anim_follow_type_t;
// typedef struct osui_ui_anim_follow_t
// {
//     lv_obj_t* obj;
//     bool en_x;
//     bool en_y;
//     osui_ui_anim_follow_type_t type;
//     int16_t relat_x;
//     int16_t relat_y;
// }osui_ui_anim_follow_t;

// //UI动画吸附类
// typedef struct osui_ui_anim_adsorp_t
// {
//     lv_obj_t* obj;
//     osui_ui_pdc_t* ui_pdc_x;
//     osui_ui_pdc_t* ui_pdc_y;
//     bool en_x;
//     bool en_y;
//     int16_t tg_x;
//     int16_t tg_y;
//     // float kp;
//     // float kd;
// }osui_ui_anim_adsorp_t;

// //动画跟随初始化
// osui_ui_anim_follow_t*osui_ui_anim_follow_init();
// //动画跟随反初始化
// void osui_ui_anim_follow_deinit(osui_ui_anim_follow_t* anim);
// //动画跟随设置对象
// void osui_ui_anim_follow_set_obj(osui_ui_anim_follow_t* anim, lv_obj_t* obj);
// //动画跟随设置类型
// void osui_ui_anim_follow_set_type(osui_ui_anim_follow_t* anim, osui_ui_anim_follow_type_t type);
// //动画跟随是否启用XY轴
// void osui_ui_anim_follow_enable_xy(osui_ui_anim_follow_t* anim,bool en_x,bool en_y);
// //动画跟随设置相对位置
// void osui_ui_anim_follow_set_relat_pos(osui_ui_anim_follow_t* anim, int16_t x, int16_t y);
// //动画跟随设置相对位置X轴
// void osui_ui_anim_follow_set_relat_x(osui_ui_anim_follow_t* anim, int16_t x);
// //动画跟随设置相对位置Y轴
// void osui_ui_anim_follow_set_relat_y(osui_ui_anim_follow_t* anim, int16_t y);
// //动画跟随执行
// void osui_ui_anim_follow_exec(osui_ui_anim_follow_t* anim);
// //动画吸附初始化
// osui_ui_anim_adsorp_t*osui_ui_anim_adsorp_init();
// //动画吸附反初始化
// void osui_ui_anim_adsorp_deinit(osui_ui_anim_adsorp_t* anim);
// //动画吸附设置对象
// void osui_ui_anim_adsorp_set_obj(osui_ui_anim_adsorp_t* anim, lv_obj_t* obj);
// //动画吸附设置PD参数
// void osui_ui_anim_adsorp_set_pd(osui_ui_anim_adsorp_t* anim, float kp, float kd);
// //动画吸附是否启用XY轴
// void osui_ui_anim_adsorp_enable_xy(osui_ui_anim_adsorp_t* anim,bool en_x,bool en_y);
// //动画吸附设置目标位置
// void osui_ui_anim_adsorp_set_tg_pos(osui_ui_anim_adsorp_t* anim, int16_t x, int16_t y);
// //动画吸附设置目标位置X
// void osui_ui_anim_adsorp_set_tg_x(osui_ui_anim_adsorp_t* anim, int16_t x);
// //动画吸附设置目标位置Y
// void osui_ui_anim_adsorp_set_tg_y(osui_ui_anim_adsorp_t* anim, int16_t y);
// //动画吸附完成检查
// bool osui_ui_anim_adsorp_check_finish(osui_ui_anim_adsorp_t* anim);
// //动画吸附执行
// void osui_ui_anim_adsorp_exec(osui_ui_anim_adsorp_t* anim);

//UI动画类型
typedef enum osui_ui_anim_type_t
{
    OSUI_UI_ANIM_TYPE_NONE = 0,
    OSUI_UI_ANIM_TYPE_X = 0,
    OSUI_UI_ANIM_TYPE_Y = 1,
    OSUI_UI_ANIM_TYPE_OPA = 2,
    OSUI_UI_ANIM_TYPE_CB = 3
}osui_ui_anim_type_t;
//UI动画类
typedef struct osui_ui_anim_t
{
    lv_obj_t* obj;
    osui_ui_pdc_t* pdc;
    osui_ui_anim_type_t type;
    int16_t tg;
    void (*cb_set)(int16_t data);
    int16_t (*cb_get)();
}osui_ui_anim_t;

//动画初始化
osui_ui_anim_t*osui_ui_anim_init();
//动画反初始化
void osui_ui_anim_deinit(osui_ui_anim_t* anim);
//动画设置对象
void osui_ui_anim_set_obj(osui_ui_anim_t* anim, lv_obj_t* obj);
//动画设置类型
void osui_ui_anim_set_type(osui_ui_anim_t* anim, osui_ui_anim_type_t type);
//动画设置PD参数
void osui_ui_anim_set_pd(osui_ui_anim_t* anim, float kp, float kd);
//动画设置目标
void osui_ui_anim_set_tg(osui_ui_anim_t* anim, int16_t tg);
//动画设置回调
void osui_ui_anim_set_cb(osui_ui_anim_t* anim, int16_t (*cb_get)(), void (*cb_set)(int16_t data));
//动画获取目标
int16_t osui_ui_anim_get_tg(osui_ui_anim_t* anim);
//动画检查完成
bool osui_ui_anim_finish(osui_ui_anim_t* anim);
//动画执行
void osui_ui_anim_exec(osui_ui_anim_t* anim);
//动画复位
void osui_ui_anim_reset(osui_ui_anim_t* anim);
//动画等待准备
bool osui_ui_anim_wait(osui_ui_anim_t* anim);

#endif
