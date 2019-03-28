#include "hmiworks.h"
#pragma GCC diagnostic ignored "-Wunused-variable"

static tWidget *thisCanvas = (tWidget *)&CanvasFrame1;
static tContext globalContext;
static tContext *thisContext = &globalContext;

#pragma GCC diagnostic warning "-Wunused-variable"


static void ConnectWidgetVariable();
static void DisconnectWidgetVariable();
const unsigned char * ObjectList81_44x30[] = {
ObjectList81_44x30_0_pucImage_Group43,
ObjectList81_44x30_0_pucImage_Group43
};
const unsigned char * ObjectList57_29x30[] = {
ObjectList57_29x30_0_pucImage_Group43,
ObjectList57_29x30_0_pucImage_Group43
};
const unsigned char * ObjectList72_29x30[] = {
ObjectList72_29x30_0_pucImage_Group43,
ObjectList72_29x30_0_pucImage_Group43
};
const unsigned char * ObjectList60_29x30[] = {
ObjectList60_29x30_0_pucImage_Group43,
ObjectList60_29x30_0_pucImage_Group43
};
const unsigned char * ObjectList64_29x30[] = {
ObjectList64_29x30_0_pucImage_Group43,
ObjectList64_29x30_0_pucImage_Group43
};
const unsigned char * ObjectList75_29x30[] = {
ObjectList75_29x30_0_pucImage_Group43,
ObjectList75_29x30_0_pucImage_Group43
};
const unsigned char * ObjectList68_29x30[] = {
ObjectList68_29x30_0_pucImage_Group43,
ObjectList68_29x30_0_pucImage_Group43
};
const unsigned char * ObjectList54_29x30[] = {
ObjectList54_29x30_0_pucImage_Group43,
ObjectList54_29x30_0_pucImage_Group43
};
const unsigned char * ObjectList55_29x30[] = {
ObjectList55_29x30_0_pucImage_Group43,
ObjectList55_29x30_0_pucImage_Group43
};
const unsigned char * ObjectList61_29x30[] = {
ObjectList61_29x30_0_pucImage_Group43,
ObjectList61_29x30_0_pucImage_Group43
};
const unsigned char * ObjectList46_29x30[] = {
ObjectList46_29x30_0_pucImage_Group43,
ObjectList46_29x30_0_pucImage_Group43
};
const unsigned char * ObjectList47_29x30[] = {
ObjectList47_29x30_0_pucImage_Group43,
ObjectList47_29x30_0_pucImage_Group43
};
const unsigned char * ObjectList78_29x30[] = {
ObjectList78_29x30_0_pucImage_Group43,
ObjectList78_29x30_0_pucImage_Group43
};
const unsigned char * ObjectList73_29x30[] = {
ObjectList73_29x30_0_pucImage_Group43,
ObjectList73_29x30_0_pucImage_Group43
};
const unsigned char * ObjectList69_29x30[] = {
ObjectList69_29x30_0_pucImage_Group43,
ObjectList69_29x30_0_pucImage_Group43
};
const unsigned char * ObjectList51_29x30[] = {
ObjectList51_29x30_0_pucImage_Group43,
ObjectList51_29x30_0_pucImage_Group43
};
const unsigned char * ObjectList50_29x30[] = {
ObjectList50_29x30_0_pucImage_Group43,
ObjectList50_29x30_0_pucImage_Group43
};
const unsigned char * ObjectList83_38x30[] = {
ObjectList83_38x30_0_pucImage_Group43,
ObjectList83_38x30_0_pucImage_Group43
};
const unsigned char * ObjectList82_60x30[] = {
ObjectList82_60x30_0_pucImage_Group43,
ObjectList82_60x30_0_pucImage_Group43
};

#include "__frame1.h"

RectangularButton(TextPushButton84, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 190, 90, 25, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", 0,
   200, 100,
   hmi_OnTextPushButton84Click, hmi_OnTextPushButton84Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton85, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 216, 90, 25, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", 0,
   200, 100,
   hmi_OnTextPushButton85Click, hmi_OnTextPushButton85Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton87, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 242, 90, 25, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", 0,
   200, 100,
   hmi_OnTextPushButton87Click, hmi_OnTextPushButton87Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton88, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 8, 90, 25, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", 0,
   200, 100,
   hmi_OnTextPushButton88Click, hmi_OnTextPushButton88Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton89, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 34, 90, 25, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", 0,
   200, 100,
   hmi_OnTextPushButton89Click, hmi_OnTextPushButton89Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton90, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 60, 90, 25, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", 0,
   200, 100,
   hmi_OnTextPushButton90Click, hmi_OnTextPushButton90Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton91, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 86, 90, 25, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", 0,
   200, 100,
   hmi_OnTextPushButton91Click, hmi_OnTextPushButton91Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton92, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 112, 90, 25, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", 0,
   200, 100,
   hmi_OnTextPushButton92Click, hmi_OnTextPushButton92Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton93, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 138, 90, 25, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", 0,
   200, 100,
   hmi_OnTextPushButton93Click, hmi_OnTextPushButton93Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton94, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 164, 90, 25, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", 0,
   200, 100,
   hmi_OnTextPushButton94Click, hmi_OnTextPushButton94Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton95, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 268, 90, 44, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "ObjectList16", ObjectList81_44x30,
   200, 100,
   hmi_OnTextPushButton95Click, hmi_OnTextPushButton95Release, 0,
   0, 0, 1);
RectangularButton(TextPushButton96, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 11, 127, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", ObjectList57_29x30,
   200, 100,
   hmi_OnTextPushButton96Click, hmi_OnTextPushButton96Release, 0,
   0, 0, 1);
RectangularButton(TextPushButton97, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 41, 127, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", ObjectList72_29x30,
   200, 100,
   hmi_OnTextPushButton97Click, hmi_OnTextPushButton97Release, 0,
   0, 0, 1);
RectangularButton(TextPushButton98, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 71, 127, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", 0,
   200, 100,
   hmi_OnTextPushButton98Click, hmi_OnTextPushButton98Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton99, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 101, 127, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", ObjectList60_29x30,
   200, 100,
   hmi_OnTextPushButton99Click, hmi_OnTextPushButton99Release, 0,
   0, 0, 1);
RectangularButton(TextPushButton100, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 131, 127, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", ObjectList64_29x30,
   200, 100,
   hmi_OnTextPushButton100Click, hmi_OnTextPushButton100Release, 0,
   0, 0, 1);
RectangularButton(TextPushButton101, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 161, 127, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", ObjectList75_29x30,
   200, 100,
   hmi_OnTextPushButton101Click, hmi_OnTextPushButton101Release, 0,
   0, 0, 1);
RectangularButton(TextPushButton102, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 191, 127, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", ObjectList68_29x30,
   200, 100,
   hmi_OnTextPushButton102Click, hmi_OnTextPushButton102Release, 0,
   0, 0, 1);
RectangularButton(TextPushButton103, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 221, 127, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", 0,
   200, 100,
   hmi_OnTextPushButton103Click, hmi_OnTextPushButton103Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton104, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 251, 127, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", ObjectList54_29x30,
   200, 100,
   hmi_OnTextPushButton104Click, hmi_OnTextPushButton104Release, 0,
   0, 0, 1);
RectangularButton(TextPushButton105, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 281, 127, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", ObjectList55_29x30,
   200, 100,
   hmi_OnTextPushButton105Click, hmi_OnTextPushButton105Release, 0,
   0, 0, 1);
RectangularButton(TextPushButton106, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 26, 164, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", 0,
   200, 100,
   hmi_OnTextPushButton106Click, hmi_OnTextPushButton106Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton107, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 56, 164, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", ObjectList61_29x30,
   200, 100,
   hmi_OnTextPushButton107Click, hmi_OnTextPushButton107Release, 0,
   0, 0, 1);
RectangularButton(TextPushButton108, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 86, 164, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "ObjectList12", 0,
   200, 100,
   hmi_OnTextPushButton108Click, hmi_OnTextPushButton108Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton109, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 116, 164, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", 0,
   200, 100,
   hmi_OnTextPushButton109Click, hmi_OnTextPushButton109Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton110, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 146, 164, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", 0,
   200, 100,
   hmi_OnTextPushButton110Click, hmi_OnTextPushButton110Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton111, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 176, 164, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", 0,
   200, 100,
   hmi_OnTextPushButton111Click, hmi_OnTextPushButton111Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton112, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 206, 164, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", 0,
   200, 100,
   hmi_OnTextPushButton112Click, hmi_OnTextPushButton112Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton113, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 236, 164, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", ObjectList46_29x30,
   200, 100,
   hmi_OnTextPushButton113Click, hmi_OnTextPushButton113Release, 0,
   0, 0, 1);
RectangularButton(TextPushButton114, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 266, 164, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", ObjectList47_29x30,
   200, 100,
   hmi_OnTextPushButton114Click, hmi_OnTextPushButton114Release, 0,
   0, 0, 1);
RectangularButton(TextPushButton115, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 44, 200, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", ObjectList78_29x30,
   200, 100,
   hmi_OnTextPushButton115Click, hmi_OnTextPushButton115Release, 0,
   0, 0, 1);
RectangularButton(TextPushButton116, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 74, 200, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", ObjectList73_29x30,
   200, 100,
   hmi_OnTextPushButton116Click, hmi_OnTextPushButton116Release, 0,
   0, 0, 1);
RectangularButton(TextPushButton117, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 104, 200, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", 0,
   200, 100,
   hmi_OnTextPushButton117Click, hmi_OnTextPushButton117Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton118, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 134, 200, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", ObjectList69_29x30,
   200, 100,
   hmi_OnTextPushButton118Click, hmi_OnTextPushButton118Release, 0,
   0, 0, 1);
RectangularButton(TextPushButton119, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 164, 200, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", 0,
   200, 100,
   hmi_OnTextPushButton119Click, hmi_OnTextPushButton119Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton120, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 194, 200, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", ObjectList51_29x30,
   200, 100,
   hmi_OnTextPushButton120Click, hmi_OnTextPushButton120Release, 0,
   0, 0, 1);
RectangularButton(TextPushButton121, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 224, 200, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", ObjectList50_29x30,
   200, 100,
   hmi_OnTextPushButton121Click, hmi_OnTextPushButton121Release, 0,
   0, 0, 1);
RectangularButton(TextPushButton122, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 6, 200, 38, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", ObjectList83_38x30,
   200, 100,
   hmi_OnTextPushButton122Click, hmi_OnTextPushButton122Release, 0,
   0, 0, 1);
RectangularButton(TextPushButton123, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 254, 200, 60, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", ObjectList82_60x30,
   200, 100,
   hmi_OnTextPushButton123Click, hmi_OnTextPushButton123Release, 0,
   0, 0, 1);
RectangularButton(TextPushButton124, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 11, 127, 29, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm14, "TextPushButton6", ObjectList57_29x30,
   200, 100,
   hmi_OnTextPushButton124Click, hmi_OnTextPushButton124Release, 0,
   0, 0, 1);
RectangularButton(TextPushButton125, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, -23, 12, 0, 0,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "TextPushButton90", 0,
   200, 100,
   hmi_OnTextPushButton125Click, hmi_OnTextPushButton125Release, 0,
   0, -1, 0);
Canvas(Label129, WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 15, 15, 201, 62,
   CANVAS_STYLE_TEXT | CANVAS_STYLE_FILL | CANVAS_STYLE_OUTLINE
    | CANVAS_STYLE_TEXT_HCENTER | CV_AOPT_VISIBLE | CV_AOPT_ENABLED | CANVAS_STYLE_TEXT_OPAQUE
   , 0x000000, 0x000000, 0xFFFFFF,
   g_pFontCm26b, "", 0, 0);


Canvas(CanvasFrame1, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0,
       320, 240, (CANVAS_STYLE_APP_DRAWN | CV_AOPT_VISIBLE), 0, 0, 0, 0, 0, 0, OnFrame144Paint);

void renderFrame144Vector(tContext *pContext, int ox, int oy) {
  hmi_DrawImage(pContext, pucImage_Picture86, ox+0, oy+0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "1  2  3  4  5  6  7  8  9  0", -1, ox+10, oy+-74, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "A  B  C  D  E  F G  H I  J", -1, ox+13, oy+-21, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "K  L  M  N  O  P  Q  R  S  T", -1, ox+8, oy+290, 0);
}
void OnFrame144Paint(tWidget *pWidget, tContext *pContext)
{
   hmi_SetForeground(pContext, 0xFFFFFF);
   hmi_FillRect(pContext, 0, 0, 320, 240);
   renderFrame144Vector(pContext, 0, 0);
}

static void hmi_InitGlobalContext()
{
  GrContextInit(thisContext, thisCanvas->pDisplay);
  GrContextClipRegionSet(thisContext, &(thisCanvas->sPosition));
}
void hmi_InitFrameWidgets5()
{
   hmi_EnableDrawings(0);
   WidgetAdd(WIDGET_ROOT, (tWidget *)(&CanvasFrame1));
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton84);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton85);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton87);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton88);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton89);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton90);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton91);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton92);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton93);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton94);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton95);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton96);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton97);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton98);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton99);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton100);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton101);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton102);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton103);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton104);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton105);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton106);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton107);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton108);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton109);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton110);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton111);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton112);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton113);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton114);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton115);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton116);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton117);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton118);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton119);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton120);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton121);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton122);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton123);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton124);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton125);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Label129);
   hmi_InitGlobalContext();
   ConnectWidgetVariable();
   hmi_EnableDrawings(1);
}

void hmi_FreeFrameWidgets5()
{
   DisconnectWidgetVariable();
   WidgetRemove((tWidget *)(&CanvasFrame1));
   WidgetRemove((tWidget *)(&TextPushButton84));
   WidgetRemove((tWidget *)(&TextPushButton85));
   WidgetRemove((tWidget *)(&TextPushButton87));
   WidgetRemove((tWidget *)(&TextPushButton88));
   WidgetRemove((tWidget *)(&TextPushButton89));
   WidgetRemove((tWidget *)(&TextPushButton90));
   WidgetRemove((tWidget *)(&TextPushButton91));
   WidgetRemove((tWidget *)(&TextPushButton92));
   WidgetRemove((tWidget *)(&TextPushButton93));
   WidgetRemove((tWidget *)(&TextPushButton94));
   WidgetRemove((tWidget *)(&TextPushButton95));
   WidgetRemove((tWidget *)(&TextPushButton96));
   WidgetRemove((tWidget *)(&TextPushButton97));
   WidgetRemove((tWidget *)(&TextPushButton98));
   WidgetRemove((tWidget *)(&TextPushButton99));
   WidgetRemove((tWidget *)(&TextPushButton100));
   WidgetRemove((tWidget *)(&TextPushButton101));
   WidgetRemove((tWidget *)(&TextPushButton102));
   WidgetRemove((tWidget *)(&TextPushButton103));
   WidgetRemove((tWidget *)(&TextPushButton104));
   WidgetRemove((tWidget *)(&TextPushButton105));
   WidgetRemove((tWidget *)(&TextPushButton106));
   WidgetRemove((tWidget *)(&TextPushButton107));
   WidgetRemove((tWidget *)(&TextPushButton108));
   WidgetRemove((tWidget *)(&TextPushButton109));
   WidgetRemove((tWidget *)(&TextPushButton110));
   WidgetRemove((tWidget *)(&TextPushButton111));
   WidgetRemove((tWidget *)(&TextPushButton112));
   WidgetRemove((tWidget *)(&TextPushButton113));
   WidgetRemove((tWidget *)(&TextPushButton114));
   WidgetRemove((tWidget *)(&TextPushButton115));
   WidgetRemove((tWidget *)(&TextPushButton116));
   WidgetRemove((tWidget *)(&TextPushButton117));
   WidgetRemove((tWidget *)(&TextPushButton118));
   WidgetRemove((tWidget *)(&TextPushButton119));
   WidgetRemove((tWidget *)(&TextPushButton120));
   WidgetRemove((tWidget *)(&TextPushButton121));
   WidgetRemove((tWidget *)(&TextPushButton122));
   WidgetRemove((tWidget *)(&TextPushButton123));
   WidgetRemove((tWidget *)(&TextPushButton124));
   WidgetRemove((tWidget *)(&TextPushButton125));
   WidgetRemove((tWidget *)(&Label129));
}


void hmi_OnTextPushButton84Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton84Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton85Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton85Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton87Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton87Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton88Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton88Click(tWidget *pWidget)
{
  TextPushButton88OnClick(pWidget);
}


void hmi_OnTextPushButton89Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton89Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton90Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton90Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton91Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton91Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton92Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton92Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton93Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton93Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton94Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton94Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton95Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton95Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton96Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton96Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton97Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton97Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton98Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton98Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton99Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton99Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton100Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton100Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton101Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton101Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton102Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton102Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton103Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton103Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton104Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton104Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton105Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton105Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton106Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton106Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton107Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton107Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton108Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton108Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton109Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton109Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton110Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton110Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton111Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton111Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton112Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton112Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton113Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton113Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton114Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton114Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton115Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton115Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton116Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton116Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton117Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton117Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton118Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton118Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton119Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton119Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton120Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton120Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton121Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton121Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton122Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton122Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton123Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton123Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton124Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton124Click(tWidget *pWidget)
{
  TextPushButton6OnClick(pWidget);
}


void hmi_OnTextPushButton125Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton125Click(tWidget *pWidget)
{
}


static void ConnectWidgetVariable()
{
  if (g_hmi_CurrentFrame != 5) return;
}

static void DisconnectWidgetVariable()
{
}

void hmi_Frame1()
{
   var_table_init();
   hmi_FreeCurrentFrame();
   g_hmi_CurrentFrame = 5;
   hmi_InitFrameWidgets5();
}

