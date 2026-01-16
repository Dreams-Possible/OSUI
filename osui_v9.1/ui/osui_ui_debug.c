#include"osui_ui_debug.h"

//控件信息
void osui_ui_debug_info(lv_obj_t* obj);

//控件信息
void osui_ui_debug_info(lv_obj_t* obj)
{
    LV_LOG_USER("  Addr: %p", obj);
    LV_LOG_USER("  Parent: %p", lv_obj_get_parent(obj));
    LV_LOG_USER("  Screen: %p", lv_obj_get_screen(obj));
    LV_LOG_USER("  Pos: (%d, %d)", lv_obj_get_x(obj), lv_obj_get_y(obj));
    LV_LOG_USER("  Size: %dx%d", lv_obj_get_width(obj), lv_obj_get_height(obj));
    LV_LOG_USER("  Hidden: %s", lv_obj_has_flag(obj, LV_OBJ_FLAG_HIDDEN) ? "Yes" : "No");
}
