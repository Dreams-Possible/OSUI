#include"osui_ui_anim.h"

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

// //动画跟随初始化
// osui_ui_anim_follow_t*osui_ui_anim_follow_init()
// {
//     osui_ui_anim_follow_t* anim = (osui_ui_anim_follow_t*)osui_malloc(sizeof(osui_ui_anim_follow_t));
//     if(!anim)
//     {
//         return NULL;
//     }
//     return anim;
// }

// //动画跟随反初始化
// void osui_ui_anim_follow_deinit(osui_ui_anim_follow_t* anim)
// {
//     osui_free(anim);
// }

// //动画跟随设置对象
// void osui_ui_anim_follow_set_obj(osui_ui_anim_follow_t* anim, lv_obj_t* obj)
// {
//     anim->obj = obj;
// }

// //动画跟随设置类型
// void osui_ui_anim_follow_set_type(osui_ui_anim_follow_t* anim, osui_ui_anim_follow_type_t type)
// {
//     anim->type = type;
// }

// //动画跟随是否启用XY轴
// void osui_ui_anim_follow_enable_xy(osui_ui_anim_follow_t* anim,bool en_x,bool en_y)
// {
//     anim->en_x = en_x;
//     anim->en_y = en_y;
// }

// //动画跟随设置相对位置
// void osui_ui_anim_follow_set_relat_pos(osui_ui_anim_follow_t* anim, int16_t x, int16_t y)
// {
//     anim->relat_x = x;
//     anim->relat_y = y;
// }

// //动画跟随设置相对位置X轴
// void osui_ui_anim_follow_set_relat_x(osui_ui_anim_follow_t* anim, int16_t x)
// {
//     anim->relat_x = x;
// }

// //动画跟随设置相对位置Y轴
// void osui_ui_anim_follow_set_relat_y(osui_ui_anim_follow_t* anim, int16_t y)
// {
//     anim->relat_y = y;
// }

// //动画跟随执行
// void osui_ui_anim_follow_exec(osui_ui_anim_follow_t* anim)
// {
//     //处理X轴
//     if(anim->en_x)
//     {
//         int16_t move = osui_input_get_move_x();
//         //跟随类型
//         switch (anim->type)
//         {
//             //相对移动
//             case OSUI_UI_ANIM_FOLLOW_RELATIVE:
//                 lv_obj_set_x(anim->obj,anim->relat_x+move);
//             break;
//             //中心移动
//             case OSUI_UI_ANIM_FOLLOW_CENTER:
//                 lv_obj_set_x(anim->obj,-lv_obj_get_width(anim->obj)/2+move);
//             break;
//             default:
//             break;
//         }
//     }
//     //处理Y轴
//     if(anim->en_y)
//     {
//         int16_t move = osui_input_get_move_y();
//         //跟随类型
//         switch (anim->type)
//         {
//             //相对移动
//             case OSUI_UI_ANIM_FOLLOW_RELATIVE:
//                 lv_obj_set_y(anim->obj,anim->relat_y+move);
//             break;
//             //中心移动
//             case OSUI_UI_ANIM_FOLLOW_CENTER:
//                 lv_obj_set_y(anim->obj,-lv_obj_get_height(anim->obj)/2+move);
//             break;
//             //默认不移动
//             default:
//             break;
//         }
//     }
// }

// //动画吸附初始化
// osui_ui_anim_adsorp_t*osui_ui_anim_adsorp_init()
// {
//     osui_ui_anim_adsorp_t* anim = (osui_ui_anim_adsorp_t*)osui_malloc(sizeof(osui_ui_anim_adsorp_t));
//     if(!anim)
//     {
//         return NULL;
//     }
//     anim->ui_pdc_x = osui_ui_pdc_init(OSUI_ANIM_PDC_P, OSUI_ANIM_PDC_D);
//     if(!anim->ui_pdc_x)
//     {
//         return NULL;
//     }
//     anim->ui_pdc_y = osui_ui_pdc_init(OSUI_ANIM_PDC_P, OSUI_ANIM_PDC_D);
//     if(!anim->ui_pdc_x)
//     {
//         return NULL;
//     }
//     return anim;
// }

// //动画吸附反初始化
// void osui_ui_anim_adsorp_deinit(osui_ui_anim_adsorp_t* anim)
// {
//     osui_free(anim);
// }

// //动画吸附设置对象
// void osui_ui_anim_adsorp_set_obj(osui_ui_anim_adsorp_t* anim, lv_obj_t* obj)
// {
//     anim->obj = obj;
// }

// //动画吸附设置PD参数
// void osui_ui_anim_adsorp_set_pd(osui_ui_anim_adsorp_t* anim, float kp, float kd)
// {
//     osui_ui_pdc_set_kp(anim->ui_pdc_x, kp);
//     osui_ui_pdc_set_kd(anim->ui_pdc_x, kd);
//     osui_ui_pdc_set_kp(anim->ui_pdc_y, kp);
//     osui_ui_pdc_set_kd(anim->ui_pdc_y, kd);
// }

// //动画吸附是否启用XY轴
// void osui_ui_anim_adsorp_enable_xy(osui_ui_anim_adsorp_t* anim,bool en_x,bool en_y)
// {
//     anim->en_x = en_x;
//     anim->en_y = en_y;
// }

// //动画吸附设置目标位置
// void osui_ui_anim_adsorp_set_tg_pos(osui_ui_anim_adsorp_t* anim, int16_t x, int16_t y)
// {
//     anim->tg_x = x;
//     osui_ui_pdc_set_target(anim->ui_pdc_x, x);
//     anim->tg_y = y;
//     osui_ui_pdc_set_target(anim->ui_pdc_y, y);
// }

// //动画吸附设置目标位置X
// void osui_ui_anim_adsorp_set_tg_x(osui_ui_anim_adsorp_t* anim, int16_t x)
// {
//     anim->tg_x = x;
//     osui_ui_pdc_set_target(anim->ui_pdc_x, x);
// }

// //动画吸附设置目标位置Y
// void osui_ui_anim_adsorp_set_tg_y(osui_ui_anim_adsorp_t* anim, int16_t y)
// {
//     anim->tg_y = y;
//     osui_ui_pdc_set_target(anim->ui_pdc_y, y);
// }

// //动画吸附检查是否完成
// bool osui_ui_anim_adsorp_check_finish(osui_ui_anim_adsorp_t* anim)
// {
//     bool x_finish=true;
//     bool y_finish=true;
//     //处理X轴
//     if(anim->en_x)
//     {
//         int16_t pos = lv_obj_get_x(anim->obj);
//         if(pos!=anim->tg_x)
//         {
//             x_finish=false;
//         }
//     }
//     //处理Y轴
//     if(anim->en_y)
//     {
//         int16_t pos = lv_obj_get_y(anim->obj);
//         if(pos!=anim->tg_y)
//         {
//             y_finish=false;
//         }
//     }
//     return x_finish&&y_finish;
// }

// //动画吸附执行
// void osui_ui_anim_adsorp_exec(osui_ui_anim_adsorp_t* anim)
// {
//     //处理X轴
//     if(anim->en_x)
//     {
//         //调整位置
//         int16_t pos = lv_obj_get_x(anim->obj);
//         if(pos!=anim->tg_x)
//         {
//             float move = osui_ui_pdc_comput(anim->ui_pdc_x, pos, lv_tick_get());
//             if(move>=0&&move<1)
//             {
//                 move=1;
//             }
//             if(move>-1&&move<0)
//             {
//                 move=-1;
//             }
//             int16_t set = pos+(int16_t)move;
//             lv_obj_set_x(anim->obj, set);
//         }
//     }
//     //处理Y轴
//     if(anim->en_y)
//     {
//         int16_t pos = lv_obj_get_y(anim->obj);
//         //调整位置
//         if(pos!=anim->tg_y)
//         {
//             float move = osui_ui_pdc_comput(anim->ui_pdc_y, pos, lv_tick_get());
//             if(move>=0&&move<1)
//             {
//                 move=1;
//             }
//             if(move>-1&&move<0)
//             {
//                 move=-1;
//             }
//             int16_t set = pos+(int16_t)move;
//             lv_obj_set_y(anim->obj, set);
//         }
//     }
// }

#include<math.h>

//参数定义
#define ANIM_MOVE_MIN (1)//最小移动单位

//动画控件获取
static int16_t anim_obj_get(osui_ui_anim_t* anim);
//动画控件设置
static void anim_obj_set(osui_ui_anim_t* anim, int16_t set);
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

//动画控件获取
static int16_t anim_obj_get(osui_ui_anim_t* anim)
{
    int16_t ret=0;
    //判断类型
    switch (anim->type)
    {
        //X轴位置
        case OSUI_UI_ANIM_TYPE_X:
            ret=lv_obj_get_x(anim->obj);
        break;
        //Y轴位置
        case OSUI_UI_ANIM_TYPE_Y:
            ret=lv_obj_get_y(anim->obj);
        break;
        //透明度
        case OSUI_UI_ANIM_TYPE_OPA:
            ret=lv_obj_get_style_bg_opa(anim->obj, LV_PART_MAIN | LV_STATE_DEFAULT);
        break;
        //自定义回调
        case OSUI_UI_ANIM_TYPE_CB:
            ret=anim->cb_get();
        break;
        //无
        default:
        break;
    }
    return ret;
}

//动画控件设置
static void anim_obj_set(osui_ui_anim_t* anim, int16_t set)
{
    //判断类型
    switch (anim->type)
    {
        //X轴位置
        case OSUI_UI_ANIM_TYPE_X:
            lv_obj_set_x(anim->obj,set);
        break;
        //Y轴位置
        case OSUI_UI_ANIM_TYPE_Y:
            lv_obj_set_y(anim->obj,set);
        break;
        //透明度
        case OSUI_UI_ANIM_TYPE_OPA:
            lv_obj_set_style_bg_opa(anim->obj, set, LV_PART_MAIN | LV_STATE_DEFAULT);
        break;
        //自定义回调
        case OSUI_UI_ANIM_TYPE_CB:
            anim->cb_set(set);
        break;
        //无
        default:
        break;
    }
}

//动画初始化
osui_ui_anim_t*osui_ui_anim_init()
{
    osui_ui_anim_t* anim = (osui_ui_anim_t*)osui_malloc(sizeof(osui_ui_anim_t));
    if(!anim)
    {
        return NULL;
    }
    anim->pdc = osui_ui_pdc_init();
    if(!anim->pdc)
    {
        return NULL;
    }
    return anim;
}

//动画反初始化
void osui_ui_anim_deinit(osui_ui_anim_t* anim)
{
    osui_free(anim);
}

//动画设置对象
void osui_ui_anim_set_obj(osui_ui_anim_t* anim, lv_obj_t* obj)
{
    anim->obj = obj;
}

//动画设置类型
void osui_ui_anim_set_type(osui_ui_anim_t* anim, osui_ui_anim_type_t type)
{
    anim->type=type;
}

//动画设置PD参数
void osui_ui_anim_set_pd(osui_ui_anim_t* anim, float kp, float kd)
{
    osui_ui_pdc_set_kp(anim->pdc, kp);
    osui_ui_pdc_set_kd(anim->pdc, kd);
}

//动画设置目标
void osui_ui_anim_set_tg(osui_ui_anim_t* anim, int16_t tg)
{
    anim->tg=tg;
    osui_ui_pdc_set_target(anim->pdc, tg);
}

//动画设置回调
void osui_ui_anim_set_cb(osui_ui_anim_t* anim, int16_t (*cb_get)(), void (*cb_set)(int16_t data))
{
    anim->cb_get=cb_get;
    anim->cb_set=cb_set;
}

//动画获取目标
int16_t osui_ui_anim_get_tg(osui_ui_anim_t* anim)
{
    return anim->tg;
}

//动画检查完成
bool osui_ui_anim_finish(osui_ui_anim_t* anim)
{
    bool ret=true;
    int16_t curr = anim_obj_get(anim);
    if(curr!=anim->tg)
    {
        ret=false;
    }
    // LV_LOG_USER("curr=%d,tg=%d",curr,anim->tg);
    return ret;
}

//动画执行
void osui_ui_anim_exec(osui_ui_anim_t* anim)
{
    //调整
    int16_t curr = anim_obj_get(anim);
    if(curr!=anim->tg)
    {
        if(abs(curr-anim->tg)==1)
        {
            anim_obj_set(anim, anim->tg);
            return;
        }
        float move = osui_ui_pdc_comput(anim->pdc, curr, lv_tick_get());
        if(move>=0&&move<ANIM_MOVE_MIN)
        {
            move=ANIM_MOVE_MIN;
        }
        if(move>-ANIM_MOVE_MIN&&move<0)
        {
            move=-ANIM_MOVE_MIN;
        }
        int16_t set = curr+(int16_t)move;
        anim_obj_set(anim, set);
        // LV_LOG_USER("curr=%d,set=%d,move=%f",curr,set,move);
    }
}

//动画复位
void osui_ui_anim_reset(osui_ui_anim_t* anim)
{
    anim->pdc->last_time=0;
    anim->pdc->last_error=0;
}

//动画等待准备
bool osui_ui_anim_wait(osui_ui_anim_t* anim)
{
    bool ret=false;
    int16_t curr = anim_obj_get(anim);
    if(curr==anim->tg)
    {
        ret=true;
    }
    // LV_LOG_USER("curr=%d,tg=%d",curr,anim->tg);
    return ret;
}
