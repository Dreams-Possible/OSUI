#include"osui_ui_statbar.h"

//UI框架
#include"osui/ui/osui_ui_frame.h"
//UI标签
#include"osui/ui/osui_ui_lable.h"
//UI动画
#include"osui/ui/osui_ui_anim.h"

//参数定义
#define STATBAR_HEIGHT ((int16_t)(osui_disp_dp2px(OSUI_STATBAR_HEIGHT_DP)))//状态栏高度

//状态栏UI类
typedef struct statbar_ui_t
{
    lv_obj_t * root;
    lv_obj_t * parent;
    lv_obj_t * back;
    lv_obj_t * front;
    lv_obj_t * icon;
    lv_obj_t * time;
    lv_obj_t * batt;
    // lv_obj_t * bar;
} statbar_ui_t;
static statbar_ui_t statbar_ui = {0};


//状态栏UI初始化
static lv_obj_t* statbar_ui_init();
//UI状态栏初始化
lv_obj_t* osui_ui_statbar_init();
//UI状态栏初始化清理
void osui_ui_statbar_init_clean();
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

//状态栏UI初始化
static lv_obj_t* statbar_ui_init()
{
    //获取显示对象
    osui_dispinfo_t*osui_dispinfo=osui_disp_get();
    //状态栏控件
    lv_obj_t *ret = NULL;
    //创建虚拟容器
    lv_obj_t *obj = lv_obj_create(0);
    statbar_ui.root=obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, osui_dispinfo->hor, osui_dispinfo->ver);
    {
        lv_obj_t *parent_obj = obj;
        {
            //父容器
            lv_obj_t *obj = lv_obj_create(parent_obj);
            statbar_ui.parent=obj;
            ret=obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, osui_dispinfo->hor, STATBAR_HEIGHT);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            // lv_obj_set_style_bg_opa(obj, 127, LV_PART_MAIN | LV_STATE_DEFAULT);
            // lv_obj_set_style_bg_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_remove_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            {
                lv_obj_t *parent_obj = obj;
                {
                    //背景
                    lv_obj_t *obj = lv_obj_create(parent_obj);
                    statbar_ui.back=obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, osui_dispinfo->hor, STATBAR_HEIGHT);
                    lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_opa(obj, OSUI_STATBAR_OPA, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
                    // lv_obj_remove_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                }
                {
                    //前景
                    lv_obj_t *obj = lv_obj_create(parent_obj);
                    statbar_ui.front=obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, osui_dispinfo->hor, STATBAR_HEIGHT);
                    lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    // lv_obj_set_style_bg_opa(obj, 127, LV_PART_MAIN | LV_STATE_DEFAULT);
                    // lv_obj_set_style_bg_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
                    // lv_obj_remove_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            //计算布局
                            uint16_t layout_hor=(int16_t)osui_disp_px2dp(OSUI_STATBAR_GAP_DP);
                            uint16_t layout_ver=(int16_t)((STATBAR_HEIGHT-(osui_ui_lable_get_ver(&OSUI_UI_LABLE_FONT_MIN)))/2);
                            //状态栏图标
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            statbar_ui.icon = obj;
                            lv_obj_set_pos(obj, layout_hor, layout_ver);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_obj_set_style_text_font(obj, &OSUI_UI_LABLE_FONT_MIN, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_label_set_text(obj, LV_SYMBOL_WIFI " " LV_SYMBOL_BLUETOOTH);
                        }
                        {
                            //计算布局
                            uint16_t layout_hor=(int16_t)(osui_dispinfo->hor/2.0-osui_ui_lable_get_hor("9:30", &OSUI_UI_LABLE_FONT_MIN)/2.0);
                            uint16_t layout_ver=(int16_t)((STATBAR_HEIGHT-(osui_ui_lable_get_ver(&OSUI_UI_LABLE_FONT_MIN)))/2);
                            //状态栏时间
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            statbar_ui.time = obj;
                            lv_obj_set_pos(obj, layout_hor, layout_ver);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_obj_set_style_text_font(obj, &OSUI_UI_LABLE_FONT_MIN, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_label_set_text(obj, "9:30");
                        }
                        {
                            //计算布局
                            uint16_t layout_hor=(int16_t)(osui_dispinfo->hor-osui_disp_px2dp(OSUI_STATBAR_GAP_DP)-osui_ui_lable_get_hor("98%" LV_SYMBOL_BATTERY_FULL, &OSUI_UI_LABLE_FONT_MIN));
                            uint16_t layout_ver=(int16_t)((STATBAR_HEIGHT-(osui_ui_lable_get_ver(&OSUI_UI_LABLE_FONT_MIN)))/2);
                            //状态栏电量
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            statbar_ui.batt = obj;
                            lv_obj_set_pos(obj, layout_hor, layout_ver);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_obj_set_style_text_font(obj, &OSUI_UI_LABLE_FONT_MIN, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_label_set_text(obj, "98%" " " LV_SYMBOL_BATTERY_FULL);
                        }
                    }
                }
            }
        }
    }
    return ret;
}


//UI状态栏初始化
lv_obj_t* osui_ui_statbar_init()
{
    lv_obj_t* ret = statbar_ui_init();
    // statbar_logic_init();
    return ret;
}

//UI状态栏初始化清理
void osui_ui_statbar_init_clean()
{
    lv_obj_delete(statbar_ui.root);
}

//获取状态栏高度
uint16_t osui_ui_statbar_get_height()
{
    return (uint16_t)STATBAR_HEIGHT;
}

//设置状态栏图标
void osui_ui_statbar_set_icon(const char* icon)
{
    //设置状态栏
    lv_label_set_text(statbar_ui.icon, icon);
}

//设置状态栏时间
void osui_ui_statbar_set_time(const char* time)
{
    //计算布局
    uint16_t layout_hor=(int16_t)(osui_disp_get()->hor/2.0-osui_ui_lable_get_hor(time, &OSUI_UI_LABLE_FONT_MIN)/2.0);
    uint16_t layout_ver=(int16_t)((STATBAR_HEIGHT-(osui_ui_lable_get_ver(&OSUI_UI_LABLE_FONT_MIN)))/2);
    //设置状态栏
    lv_obj_set_pos(statbar_ui.time, layout_hor, layout_ver);
    lv_label_set_text(statbar_ui.time, time);
}

//设置状态栏电量
void osui_ui_statbar_set_batt(const char* batt)
{
    //计算布局
    uint16_t layout_hor=(int16_t)(osui_disp_get()->hor-osui_disp_px2dp(OSUI_STATBAR_GAP_DP)-osui_ui_lable_get_hor(batt, &OSUI_UI_LABLE_FONT_MIN));
    uint16_t layout_ver=(int16_t)((STATBAR_HEIGHT-(osui_ui_lable_get_ver(&OSUI_UI_LABLE_FONT_MIN)))/2);
    //设置状态栏
    lv_obj_set_pos(statbar_ui.batt, layout_hor, layout_ver);
    lv_label_set_text(statbar_ui.batt, batt);
}

//设置状态栏字体颜色
void osui_ui_statbar_set_font_color(lv_color_t color)
{
    lv_obj_set_style_text_color(statbar_ui.icon, color, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(statbar_ui.time, color, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(statbar_ui.batt, color, LV_PART_MAIN | LV_STATE_DEFAULT);
}
