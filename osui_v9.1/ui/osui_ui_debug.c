#include"osui_ui_debug.h"

//控件信息
void osui_ui_debug_info(lv_obj_t* obj);

//控件信息
void osui_ui_debug_info(lv_obj_t* obj)
{
    osui_log("  Addr: %p", obj);
    osui_log("  Parent: %p", lv_obj_get_parent(obj));
    osui_log("  Screen: %p", lv_obj_get_screen(obj));
    osui_log("  Pos: (%d, %d)", lv_obj_get_x(obj), lv_obj_get_y(obj));
    osui_log("  Size: %dx%d", lv_obj_get_width(obj), lv_obj_get_height(obj));
    osui_log("  Hidden: %s", lv_obj_has_flag(obj, LV_OBJ_FLAG_HIDDEN) ? "Yes" : "No");
}
