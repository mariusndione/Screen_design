#include "hmiworks.h"
#pragma GCC diagnostic ignored "-Wunused-variable"

static tWidget *thisCanvas = (tWidget *)&CanvasClavierBeta;
static tContext globalContext;
static tContext *thisContext = &globalContext;

#pragma GCC diagnostic warning "-Wunused-variable"


static void ConnectWidgetVariable();
static void DisconnectWidgetVariable();

#include "__clavierbeta.h"

Canvas(Label65, WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 87, 8, 170, 33,
   CANVAS_STYLE_TEXT | CANVAS_STYLE_FILL | CANVAS_STYLE_OUTLINE
    | CANVAS_STYLE_TEXT_HCENTER | CV_AOPT_VISIBLE | CV_AOPT_ENABLED | CANVAS_STYLE_TEXT_OPAQUE
   , 0xFFFFFF, 0x000000, 0x000000,
   g_pFontCm18, "", 0, 0);
Canvas(Label66, WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 87, 9, 170, 32,
   CANVAS_STYLE_TEXT | CANVAS_STYLE_FILL | CANVAS_STYLE_OUTLINE
    | CANVAS_STYLE_TEXT_HCENTER | CV_AOPT_VISIBLE | CV_AOPT_ENABLED | CANVAS_STYLE_TEXT_OPAQUE
   , 0xFFFFFF, 0x000000, 0x000000,
   g_pFontCm18, "", 0, 0);
RectangularButton(TextPushButton67, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 3, 57, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "A", 0,
   200, 100,
   hmi_OnTextPushButton67Click, hmi_OnTextPushButton67Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton108, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 35, 58, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "Z", 0,
   200, 100,
   hmi_OnTextPushButton108Click, hmi_OnTextPushButton108Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton161, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 68, 58, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "E", 0,
   200, 100,
   hmi_OnTextPushButton161Click, hmi_OnTextPushButton161Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton162, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 101, 58, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "R", 0,
   200, 100,
   hmi_OnTextPushButton162Click, hmi_OnTextPushButton162Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton163, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 134, 58, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "T", 0,
   200, 100,
   hmi_OnTextPushButton163Click, hmi_OnTextPushButton163Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton164, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 167, 58, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "Y", 0,
   200, 100,
   hmi_OnTextPushButton164Click, hmi_OnTextPushButton164Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton165, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 200, 58, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "U", 0,
   200, 100,
   hmi_OnTextPushButton165Click, hmi_OnTextPushButton165Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton166, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 2, 90, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "I", 0,
   200, 100,
   hmi_OnTextPushButton166Click, hmi_OnTextPushButton166Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton167, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 35, 90, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "O", 0,
   200, 100,
   hmi_OnTextPushButton167Click, hmi_OnTextPushButton167Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton168, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 68, 90, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "P", 0,
   200, 100,
   hmi_OnTextPushButton168Click, hmi_OnTextPushButton168Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton169, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 101, 90, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "Q", 0,
   200, 100,
   hmi_OnTextPushButton169Click, hmi_OnTextPushButton169Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton170, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 134, 90, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "S", 0,
   200, 100,
   hmi_OnTextPushButton170Click, hmi_OnTextPushButton170Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton171, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 167, 90, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "D", 0,
   200, 100,
   hmi_OnTextPushButton171Click, hmi_OnTextPushButton171Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton172, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 200, 90, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "F", 0,
   200, 100,
   hmi_OnTextPushButton172Click, hmi_OnTextPushButton172Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton173, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 2, 122, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "G", 0,
   200, 100,
   hmi_OnTextPushButton173Click, hmi_OnTextPushButton173Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton174, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 35, 122, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "H", 0,
   200, 100,
   hmi_OnTextPushButton174Click, hmi_OnTextPushButton174Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton175, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 68, 122, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "J", 0,
   200, 100,
   hmi_OnTextPushButton175Click, hmi_OnTextPushButton175Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton176, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 101, 122, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "K", 0,
   200, 100,
   hmi_OnTextPushButton176Click, hmi_OnTextPushButton176Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton177, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 134, 122, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "L", 0,
   200, 100,
   hmi_OnTextPushButton177Click, hmi_OnTextPushButton177Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton178, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 167, 122, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "M", 0,
   200, 100,
   hmi_OnTextPushButton178Click, hmi_OnTextPushButton178Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton179, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 200, 122, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "W", 0,
   200, 100,
   hmi_OnTextPushButton179Click, hmi_OnTextPushButton179Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton180, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 2, 154, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "X", 0,
   200, 100,
   hmi_OnTextPushButton180Click, hmi_OnTextPushButton180Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton181, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 35, 154, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "C", 0,
   200, 100,
   hmi_OnTextPushButton181Click, hmi_OnTextPushButton181Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton182, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 68, 154, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "V", 0,
   200, 100,
   hmi_OnTextPushButton182Click, hmi_OnTextPushButton182Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton183, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 101, 154, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "B", 0,
   200, 100,
   hmi_OnTextPushButton183Click, hmi_OnTextPushButton183Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton184, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 134, 154, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "N", 0,
   200, 100,
   hmi_OnTextPushButton184Click, hmi_OnTextPushButton184Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton185, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 251, 58, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "1", 0,
   200, 100,
   hmi_OnTextPushButton185Click, hmi_OnTextPushButton185Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton186, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 284, 58, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "2", 0,
   200, 100,
   hmi_OnTextPushButton186Click, hmi_OnTextPushButton186Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton187, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 251, 90, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "3", 0,
   200, 100,
   hmi_OnTextPushButton187Click, hmi_OnTextPushButton187Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton188, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 284, 90, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "4", 0,
   200, 100,
   hmi_OnTextPushButton188Click, hmi_OnTextPushButton188Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton189, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 251, 122, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "5", 0,
   200, 100,
   hmi_OnTextPushButton189Click, hmi_OnTextPushButton189Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton190, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 284, 122, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "6", 0,
   200, 100,
   hmi_OnTextPushButton190Click, hmi_OnTextPushButton190Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton191, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 167, 153, 65, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "OK", 0,
   200, 100,
   hmi_OnTextPushButton191Click, hmi_OnTextPushButton191Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton192, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 167, 185, 65, 29,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "Sup", 0,
   200, 100,
   hmi_OnTextPushButton192Click, hmi_OnTextPushButton192Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton193, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 251, 154, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "7", 0,
   200, 100,
   hmi_OnTextPushButton193Click, hmi_OnTextPushButton193Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton194, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 284, 154, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "8", 0,
   200, 100,
   hmi_OnTextPushButton194Click, hmi_OnTextPushButton194Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton195, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 251, 185, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "9", 0,
   200, 100,
   hmi_OnTextPushButton195Click, hmi_OnTextPushButton195Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton196, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 284, 185, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "0", 0,
   200, 100,
   hmi_OnTextPushButton196Click, hmi_OnTextPushButton196Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton197, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 2, 185, 164, 29,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "Espace", 0,
   200, 100,
   hmi_OnTextPushButton197Click, hmi_OnTextPushButton197Release, 0,
   0, -1, 0);
TimerWidget(Timer198, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0, 32, 32,
   TS_STYLE_TIMER_ENABLED, 1000, 0, hmi_OnTimer198Execute);


Canvas(CanvasClavierBeta, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0,
       320, 240, (CANVAS_STYLE_APP_DRAWN | CV_AOPT_VISIBLE), 0, 0, 0, 0, 0, 0, OnClavierBeta63Paint);

void renderClavierBeta63Vector(tContext *pContext, int ox, int oy) {
}
void OnClavierBeta63Paint(tWidget *pWidget, tContext *pContext)
{
   hmi_SetForeground(pContext, 0xFFFFFF);
   hmi_FillRect(pContext, 0, 0, 320, 240);
   renderClavierBeta63Vector(pContext, 0, 0);
}

static void hmi_InitGlobalContext()
{
  GrContextInit(thisContext, thisCanvas->pDisplay);
  GrContextClipRegionSet(thisContext, &(thisCanvas->sPosition));
}
void hmi_InitFrameWidgets12()
{
   hmi_EnableDrawings(0);
   WidgetAdd(WIDGET_ROOT, (tWidget *)(&CanvasClavierBeta));
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Label65);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Label66);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton67);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton108);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton161);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton162);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton163);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton164);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton165);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton166);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton167);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton168);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton169);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton170);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton171);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton172);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton173);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton174);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton175);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton176);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton177);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton178);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton179);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton180);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton181);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton182);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton183);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton184);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton185);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton186);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton187);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton188);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton189);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton190);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton191);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton192);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton193);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton194);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton195);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton196);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton197);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Timer198);
   hmi_InitGlobalContext();
   ConnectWidgetVariable();
   ClavierBeta63OnShow();
   hmi_EnableDrawings(1);
}

void hmi_FreeFrameWidgets12()
{
   DisconnectWidgetVariable();
   WidgetRemove((tWidget *)(&CanvasClavierBeta));
   WidgetRemove((tWidget *)(&Label65));
   WidgetRemove((tWidget *)(&Label66));
   WidgetRemove((tWidget *)(&TextPushButton67));
   WidgetRemove((tWidget *)(&TextPushButton108));
   WidgetRemove((tWidget *)(&TextPushButton161));
   WidgetRemove((tWidget *)(&TextPushButton162));
   WidgetRemove((tWidget *)(&TextPushButton163));
   WidgetRemove((tWidget *)(&TextPushButton164));
   WidgetRemove((tWidget *)(&TextPushButton165));
   WidgetRemove((tWidget *)(&TextPushButton166));
   WidgetRemove((tWidget *)(&TextPushButton167));
   WidgetRemove((tWidget *)(&TextPushButton168));
   WidgetRemove((tWidget *)(&TextPushButton169));
   WidgetRemove((tWidget *)(&TextPushButton170));
   WidgetRemove((tWidget *)(&TextPushButton171));
   WidgetRemove((tWidget *)(&TextPushButton172));
   WidgetRemove((tWidget *)(&TextPushButton173));
   WidgetRemove((tWidget *)(&TextPushButton174));
   WidgetRemove((tWidget *)(&TextPushButton175));
   WidgetRemove((tWidget *)(&TextPushButton176));
   WidgetRemove((tWidget *)(&TextPushButton177));
   WidgetRemove((tWidget *)(&TextPushButton178));
   WidgetRemove((tWidget *)(&TextPushButton179));
   WidgetRemove((tWidget *)(&TextPushButton180));
   WidgetRemove((tWidget *)(&TextPushButton181));
   WidgetRemove((tWidget *)(&TextPushButton182));
   WidgetRemove((tWidget *)(&TextPushButton183));
   WidgetRemove((tWidget *)(&TextPushButton184));
   WidgetRemove((tWidget *)(&TextPushButton185));
   WidgetRemove((tWidget *)(&TextPushButton186));
   WidgetRemove((tWidget *)(&TextPushButton187));
   WidgetRemove((tWidget *)(&TextPushButton188));
   WidgetRemove((tWidget *)(&TextPushButton189));
   WidgetRemove((tWidget *)(&TextPushButton190));
   WidgetRemove((tWidget *)(&TextPushButton191));
   WidgetRemove((tWidget *)(&TextPushButton192));
   WidgetRemove((tWidget *)(&TextPushButton193));
   WidgetRemove((tWidget *)(&TextPushButton194));
   WidgetRemove((tWidget *)(&TextPushButton195));
   WidgetRemove((tWidget *)(&TextPushButton196));
   WidgetRemove((tWidget *)(&TextPushButton197));
   WidgetRemove((tWidget *)(&Timer198));
}


void hmi_OnTextPushButton67Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton67Click(tWidget *pWidget)
{
  TextPushButton224OnClick(pWidget);
}


void hmi_OnTextPushButton108Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton108Click(tWidget *pWidget)
{
  TextPushButton225OnClick(pWidget);
}


void hmi_OnTextPushButton161Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton161Click(tWidget *pWidget)
{
  TextPushButton226OnClick(pWidget);
}


void hmi_OnTextPushButton162Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton162Click(tWidget *pWidget)
{
  TextPushButton227OnClick(pWidget);
}


void hmi_OnTextPushButton163Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton163Click(tWidget *pWidget)
{
  TextPushButton228OnClick(pWidget);
}


void hmi_OnTextPushButton164Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton164Click(tWidget *pWidget)
{
  TextPushButton229OnClick(pWidget);
}


void hmi_OnTextPushButton165Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton165Click(tWidget *pWidget)
{
  TextPushButton230OnClick(pWidget);
}


void hmi_OnTextPushButton166Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton166Click(tWidget *pWidget)
{
  TextPushButton231OnClick(pWidget);
}


void hmi_OnTextPushButton167Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton167Click(tWidget *pWidget)
{
  TextPushButton232OnClick(pWidget);
}


void hmi_OnTextPushButton168Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton168Click(tWidget *pWidget)
{
  TextPushButton233OnClick(pWidget);
}


void hmi_OnTextPushButton169Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton169Click(tWidget *pWidget)
{
  TextPushButton234OnClick(pWidget);
}


void hmi_OnTextPushButton170Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton170Click(tWidget *pWidget)
{
  TextPushButton235OnClick(pWidget);
}


void hmi_OnTextPushButton171Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton171Click(tWidget *pWidget)
{
  TextPushButton236OnClick(pWidget);
}


void hmi_OnTextPushButton172Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton172Click(tWidget *pWidget)
{
  TextPushButton237OnClick(pWidget);
}


void hmi_OnTextPushButton173Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton173Click(tWidget *pWidget)
{
  TextPushButton238OnClick(pWidget);
}


void hmi_OnTextPushButton174Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton174Click(tWidget *pWidget)
{
  TextPushButton239OnClick(pWidget);
}


void hmi_OnTextPushButton175Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton175Click(tWidget *pWidget)
{
  TextPushButton240OnClick(pWidget);
}


void hmi_OnTextPushButton176Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton176Click(tWidget *pWidget)
{
  TextPushButton241OnClick(pWidget);
}


void hmi_OnTextPushButton177Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton177Click(tWidget *pWidget)
{
  TextPushButton242OnClick(pWidget);
}


void hmi_OnTextPushButton178Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton178Click(tWidget *pWidget)
{
  TextPushButton243OnClick(pWidget);
}


void hmi_OnTextPushButton179Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton179Click(tWidget *pWidget)
{
  TextPushButton244OnClick(pWidget);
}


void hmi_OnTextPushButton180Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton180Click(tWidget *pWidget)
{
  TextPushButton245OnClick(pWidget);
}


void hmi_OnTextPushButton181Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton181Click(tWidget *pWidget)
{
  TextPushButton246OnClick(pWidget);
}


void hmi_OnTextPushButton182Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton182Click(tWidget *pWidget)
{
  TextPushButton247OnClick(pWidget);
}


void hmi_OnTextPushButton183Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton183Click(tWidget *pWidget)
{
  TextPushButton248OnClick(pWidget);
}


void hmi_OnTextPushButton184Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton184Click(tWidget *pWidget)
{
  TextPushButton249OnClick(pWidget);
}


void hmi_OnTextPushButton185Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton185Click(tWidget *pWidget)
{
  TextPushButton250OnClick(pWidget);
}


void hmi_OnTextPushButton186Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton186Click(tWidget *pWidget)
{
  TextPushButton251OnClick(pWidget);
}


void hmi_OnTextPushButton187Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton187Click(tWidget *pWidget)
{
  TextPushButton252OnClick(pWidget);
}


void hmi_OnTextPushButton188Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton188Click(tWidget *pWidget)
{
  TextPushButton253OnClick(pWidget);
}


void hmi_OnTextPushButton189Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton189Click(tWidget *pWidget)
{
  TextPushButton254OnClick(pWidget);
}


void hmi_OnTextPushButton190Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton190Click(tWidget *pWidget)
{
  TextPushButton255OnClick(pWidget);
}


void hmi_OnTextPushButton191Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton191Click(tWidget *pWidget)
{
  TextPushButton282OnClick(pWidget);
}


void hmi_OnTextPushButton192Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton192Click(tWidget *pWidget)
{
  TextPushButton256OnClick(pWidget);
}


void hmi_OnTextPushButton193Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton193Click(tWidget *pWidget)
{
  TextPushButton257OnClick(pWidget);
}


void hmi_OnTextPushButton194Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton194Click(tWidget *pWidget)
{
  TextPushButton258OnClick(pWidget);
}


void hmi_OnTextPushButton195Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton195Click(tWidget *pWidget)
{
  TextPushButton261OnClick(pWidget);
}


void hmi_OnTextPushButton196Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton196Click(tWidget *pWidget)
{
  TextPushButton262OnClick(pWidget);
}


void hmi_OnTextPushButton197Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton197Click(tWidget *pWidget)
{
  TextPushButton265OnClick(pWidget);
}


void hmi_OnTimer198Execute(tWidget *pWidget)
{
  Timer198OnExecute(pWidget);
}


static void ConnectWidgetVariable()
{
  if (g_hmi_CurrentFrame != 12) return;
}

static void DisconnectWidgetVariable()
{
}

void hmi_ClavierBeta()
{
   var_table_init();
   hmi_FreeCurrentFrame();
   g_hmi_CurrentFrame = 12;
   hmi_InitFrameWidgets12();
}

