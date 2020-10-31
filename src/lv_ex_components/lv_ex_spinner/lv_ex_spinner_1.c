#include "../../../lv_examples.h"
#if LV_USE_SPINNER

void lv_ex_spinner_1(void)
{
    /*Create a Preloader object*/
    lv_obj_t * spinner = lv_spinner_create(lv_scr_act(), 500, 60);
    lv_obj_set_size(spinner, 100, 100);
    lv_obj_align(spinner, NULL, LV_ALIGN_CENTER, 0, 0);
}

#endif