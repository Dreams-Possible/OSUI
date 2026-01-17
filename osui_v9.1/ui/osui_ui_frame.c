#include"osui_ui_frame.h"

//UI框架
static osui_uiframe_t osui_uiframe;

// //UI框架初始化
// void osui_ui_frame_init();
//UI框架获取
osui_uiframe_t*osui_uiframe_get();
//UI框架载入
void osui_ui_frame_load();

// //UI框架初始化
// void osui_ui_frame_init()
// {
//     //创建默认主题
//     lv_disp_t *disp = lv_disp_get_default();
//     lv_theme_t *theme = lv_theme_default_init(disp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
//     lv_disp_set_theme(disp, theme);
// }

//UI框架获取
osui_uiframe_t*osui_uiframe_get()
{
    return &osui_uiframe;
}

//UI框架载入
void osui_ui_frame_load()
{
    osui_uiframe_t*osui_uiframe=osui_uiframe_get();
    lv_screen_load_anim(osui_uiframe->desktop, LV_SCR_LOAD_ANIM_FADE_IN, OSUI_ANIM_TIME, 0, false);
}
