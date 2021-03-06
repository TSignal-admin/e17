#include <Elementary.h>
#ifdef HAVE_CONFIG_H
# include "elementary_config.h"
#else
# define __UNUSED__
#endif

static char *
_text_get(void        *data __UNUSED__,
           Evas_Object *obj __UNUSED__,
           const char  *part __UNUSED__)
{
   return strdup("label");
}

static Evas_Object *
_content_get(void        *data __UNUSED__,
          Evas_Object *obj,
          const char  *part __UNUSED__)
{
    Evas_Object *icon = elm_icon_add(obj);
    elm_icon_standard_set(icon, "home");
    evas_object_size_hint_aspect_set(icon, EVAS_ASPECT_CONTROL_VERTICAL, 1,
                                     1);
    evas_object_show(icon);
    return icon;
}

#include "widget_preview_tmpl_head.c"

Evas_Object *genlist = elm_genlist_add(win);
evas_object_size_hint_weight_set(genlist, EVAS_HINT_EXPAND, EVAS_HINT_EXPAND);
elm_win_resize_object_add(win, genlist);
evas_object_show(genlist);

Elm_Genlist_Item_Class gic;
Elm_Object_Item *glit, *glit_top;
gic.item_style = "default";
gic.func.text_get = _text_get;
gic.func.content_get = _content_get;
gic.func.state_get = NULL;
gic.func.del = NULL;

elm_genlist_item_append(genlist, &gic, NULL, NULL, ELM_GENLIST_ITEM_NONE, NULL, NULL);
elm_genlist_item_append(genlist, &gic, NULL, NULL, ELM_GENLIST_ITEM_NONE, NULL, NULL);
glit = elm_genlist_item_append(genlist, &gic, NULL, NULL, ELM_GENLIST_ITEM_NONE, NULL, NULL);
glit_top = glit;
elm_genlist_item_expanded_set(glit, EINA_TRUE);
elm_genlist_item_append(genlist, &gic, NULL, glit, ELM_GENLIST_ITEM_NONE, NULL, NULL);
glit = elm_genlist_item_append(genlist, &gic, NULL, glit, ELM_GENLIST_ITEM_NONE, NULL, NULL);
elm_genlist_item_append(genlist, &gic, NULL, glit, ELM_GENLIST_ITEM_NONE, NULL, NULL);
elm_genlist_item_append(genlist, &gic, NULL, NULL, ELM_GENLIST_ITEM_NONE, NULL, NULL);
elm_genlist_item_append(genlist, &gic, NULL, NULL, ELM_GENLIST_ITEM_NONE, NULL, NULL);

elm_genlist_item_show(glit_top, ELM_GENLIST_ITEM_SCROLLTO_TOP);

#include "widget_preview_tmpl_foot.c"
