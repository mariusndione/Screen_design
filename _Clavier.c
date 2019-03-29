#include "hmiworks.h"
#pragma GCC diagnostic ignored "-Wunused-variable"

static tWidget *thisCanvas = (tWidget *)&CanvasClavier;
static tContext globalContext;
static tContext *thisContext = &globalContext;

#pragma GCC diagnostic warning "-Wunused-variable"


static void ConnectWidgetVariable();
static void DisconnectWidgetVariable();

#include "__clavier.h"

Canvas(Label223, WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 12, 12, 205, 42,
   CANVAS_STYLE_TEXT | CANVAS_STYLE_FILL | CANVAS_STYLE_OUTLINE
    | CANVAS_STYLE_TEXT_HCENTER | CV_AOPT_VISIBLE | CV_AOPT_ENABLED | CANVAS_STYLE_TEXT_OPAQUE
   , 0xFFFFFF, 0x000000, 0x000000,
   g_pFontCm18, "", 0, 0);
RectangularButton(TextPushButton224, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 2, 58, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "A", 0,
   200, 100,
   hmi_OnTextPushButton224Click, hmi_OnTextPushButton224Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton225, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 35, 58, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "Z", 0,
   200, 100,
   hmi_OnTextPushButton225Click, hmi_OnTextPushButton225Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton226, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 68, 58, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "E", 0,
   200, 100,
   hmi_OnTextPushButton226Click, hmi_OnTextPushButton226Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton227, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 101, 58, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "R", 0,
   200, 100,
   hmi_OnTextPushButton227Click, hmi_OnTextPushButton227Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton228, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 134, 58, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "T", 0,
   200, 100,
   hmi_OnTextPushButton228Click, hmi_OnTextPushButton228Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton229, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 167, 58, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "Y", 0,
   200, 100,
   hmi_OnTextPushButton229Click, hmi_OnTextPushButton229Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton230, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 200, 58, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "U", 0,
   200, 100,
   hmi_OnTextPushButton230Click, hmi_OnTextPushButton230Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton231, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 2, 90, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "I", 0,
   200, 100,
   hmi_OnTextPushButton231Click, hmi_OnTextPushButton231Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton232, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 35, 90, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "O", 0,
   200, 100,
   hmi_OnTextPushButton232Click, hmi_OnTextPushButton232Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton233, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 68, 90, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "P", 0,
   200, 100,
   hmi_OnTextPushButton233Click, hmi_OnTextPushButton233Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton234, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 101, 90, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "Q", 0,
   200, 100,
   hmi_OnTextPushButton234Click, hmi_OnTextPushButton234Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton235, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 134, 90, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "S", 0,
   200, 100,
   hmi_OnTextPushButton235Click, hmi_OnTextPushButton235Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton236, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 167, 90, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "D", 0,
   200, 100,
   hmi_OnTextPushButton236Click, hmi_OnTextPushButton236Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton237, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 200, 90, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "F", 0,
   200, 100,
   hmi_OnTextPushButton237Click, hmi_OnTextPushButton237Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton238, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 2, 122, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "G", 0,
   200, 100,
   hmi_OnTextPushButton238Click, hmi_OnTextPushButton238Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton239, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 35, 122, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "H", 0,
   200, 100,
   hmi_OnTextPushButton239Click, hmi_OnTextPushButton239Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton240, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 68, 122, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "J", 0,
   200, 100,
   hmi_OnTextPushButton240Click, hmi_OnTextPushButton240Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton241, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 101, 122, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "K", 0,
   200, 100,
   hmi_OnTextPushButton241Click, hmi_OnTextPushButton241Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton242, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 134, 122, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "L", 0,
   200, 100,
   hmi_OnTextPushButton242Click, hmi_OnTextPushButton242Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton243, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 167, 122, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "M", 0,
   200, 100,
   hmi_OnTextPushButton243Click, hmi_OnTextPushButton243Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton244, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 200, 122, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "W", 0,
   200, 100,
   hmi_OnTextPushButton244Click, hmi_OnTextPushButton244Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton245, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 2, 154, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "X", 0,
   200, 100,
   hmi_OnTextPushButton245Click, hmi_OnTextPushButton245Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton246, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 35, 154, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "C", 0,
   200, 100,
   hmi_OnTextPushButton246Click, hmi_OnTextPushButton246Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton247, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 68, 154, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "V", 0,
   200, 100,
   hmi_OnTextPushButton247Click, hmi_OnTextPushButton247Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton248, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 101, 154, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "B", 0,
   200, 100,
   hmi_OnTextPushButton248Click, hmi_OnTextPushButton248Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton249, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 134, 154, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "N", 0,
   200, 100,
   hmi_OnTextPushButton249Click, hmi_OnTextPushButton249Release, 0,
   0, -1, 0);
RectangularButton(Un250, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 252, 58, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "1", 0,
   200, 100,
   hmi_OnUn250Click, hmi_OnUn250Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton251, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 284, 58, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "2", 0,
   200, 100,
   hmi_OnTextPushButton251Click, hmi_OnTextPushButton251Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton252, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 251, 90, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "3", 0,
   200, 100,
   hmi_OnTextPushButton252Click, hmi_OnTextPushButton252Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton253, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 284, 90, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "4", 0,
   200, 100,
   hmi_OnTextPushButton253Click, hmi_OnTextPushButton253Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton254, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 251, 122, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "5", 0,
   200, 100,
   hmi_OnTextPushButton254Click, hmi_OnTextPushButton254Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton255, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 284, 122, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "6", 0,
   200, 100,
   hmi_OnTextPushButton255Click, hmi_OnTextPushButton255Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton282, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 167, 154, 65, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000,
   g_pFontCm24b, "OK", 0,
   200, 100,
   hmi_OnTextPushButton282Click, hmi_OnTextPushButton282Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton256, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 167, 185, 65, 29,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "Sup", 0,
   200, 100,
   hmi_OnTextPushButton256Click, hmi_OnTextPushButton256Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton257, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 251, 154, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "7", 0,
   200, 100,
   hmi_OnTextPushButton257Click, hmi_OnTextPushButton257Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton258, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 284, 154, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "8", 0,
   200, 100,
   hmi_OnTextPushButton258Click, hmi_OnTextPushButton258Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton261, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 251, 185, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "9", 0,
   200, 100,
   hmi_OnTextPushButton261Click, hmi_OnTextPushButton261Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton262, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 284, 185, 32, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "0", 0,
   200, 100,
   hmi_OnTextPushButton262Click, hmi_OnTextPushButton262Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton265, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 2, 185, 164, 29,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm24b, "Espace", 0,
   200, 100,
   hmi_OnTextPushButton265Click, hmi_OnTextPushButton265Release, 0,
   0, -1, 0);
TimerWidget(Timer292, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0, 32, 32,
   TS_STYLE_TIMER_ENABLED, 1000, 0, hmi_OnTimer292Execute);


Canvas(CanvasClavier, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0,
       320, 240, (CANVAS_STYLE_APP_DRAWN | CV_AOPT_VISIBLE), 0, 0, 0, 0, 0, 0, OnClavier44Paint);

void renderClavier44Vector(tContext *pContext, int ox, int oy) {
  hmi_DrawImage(pContext, pucImage_Picture114, ox+0, oy+0);
}
void OnClavier44Paint(tWidget *pWidget, tContext *pContext)
{
   hmi_SetForeground(pContext, 0x400040);
   hmi_FillRect(pContext, 0, 0, 320, 240);
   renderClavier44Vector(pContext, 0, 0);
}

static void hmi_InitGlobalContext()
{
  GrContextInit(thisContext, thisCanvas->pDisplay);
  GrContextClipRegionSet(thisContext, &(thisCanvas->sPosition));
}
void hmi_InitFrameWidgets10()
{
   hmi_EnableDrawings(0);
   Clavier44OnCreate();
   WidgetAdd(WIDGET_ROOT, (tWidget *)(&CanvasClavier));
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Label223);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton224);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton225);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton226);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton227);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton228);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton229);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton230);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton231);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton232);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton233);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton234);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton235);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton236);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton237);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton238);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton239);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton240);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton241);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton242);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton243);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton244);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton245);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton246);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton247);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton248);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton249);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Un250);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton251);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton252);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton253);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton254);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton255);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton282);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton256);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton257);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton258);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton261);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton262);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton265);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Timer292);
   hmi_InitGlobalContext();
   ConnectWidgetVariable();
   Clavier44OnShow();
   hmi_EnableDrawings(1);
}

void hmi_FreeFrameWidgets10()
{
   DisconnectWidgetVariable();
   WidgetRemove((tWidget *)(&CanvasClavier));
   WidgetRemove((tWidget *)(&Label223));
   WidgetRemove((tWidget *)(&TextPushButton224));
   WidgetRemove((tWidget *)(&TextPushButton225));
   WidgetRemove((tWidget *)(&TextPushButton226));
   WidgetRemove((tWidget *)(&TextPushButton227));
   WidgetRemove((tWidget *)(&TextPushButton228));
   WidgetRemove((tWidget *)(&TextPushButton229));
   WidgetRemove((tWidget *)(&TextPushButton230));
   WidgetRemove((tWidget *)(&TextPushButton231));
   WidgetRemove((tWidget *)(&TextPushButton232));
   WidgetRemove((tWidget *)(&TextPushButton233));
   WidgetRemove((tWidget *)(&TextPushButton234));
   WidgetRemove((tWidget *)(&TextPushButton235));
   WidgetRemove((tWidget *)(&TextPushButton236));
   WidgetRemove((tWidget *)(&TextPushButton237));
   WidgetRemove((tWidget *)(&TextPushButton238));
   WidgetRemove((tWidget *)(&TextPushButton239));
   WidgetRemove((tWidget *)(&TextPushButton240));
   WidgetRemove((tWidget *)(&TextPushButton241));
   WidgetRemove((tWidget *)(&TextPushButton242));
   WidgetRemove((tWidget *)(&TextPushButton243));
   WidgetRemove((tWidget *)(&TextPushButton244));
   WidgetRemove((tWidget *)(&TextPushButton245));
   WidgetRemove((tWidget *)(&TextPushButton246));
   WidgetRemove((tWidget *)(&TextPushButton247));
   WidgetRemove((tWidget *)(&TextPushButton248));
   WidgetRemove((tWidget *)(&TextPushButton249));
   WidgetRemove((tWidget *)(&Un250));
   WidgetRemove((tWidget *)(&TextPushButton251));
   WidgetRemove((tWidget *)(&TextPushButton252));
   WidgetRemove((tWidget *)(&TextPushButton253));
   WidgetRemove((tWidget *)(&TextPushButton254));
   WidgetRemove((tWidget *)(&TextPushButton255));
   WidgetRemove((tWidget *)(&TextPushButton282));
   WidgetRemove((tWidget *)(&TextPushButton256));
   WidgetRemove((tWidget *)(&TextPushButton257));
   WidgetRemove((tWidget *)(&TextPushButton258));
   WidgetRemove((tWidget *)(&TextPushButton261));
   WidgetRemove((tWidget *)(&TextPushButton262));
   WidgetRemove((tWidget *)(&TextPushButton265));
   WidgetRemove((tWidget *)(&Timer292));
   Clavier44OnDestroy();
}


void hmi_OnTextPushButton224Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton224Click(tWidget *pWidget)
{
  TextPushButton224OnClick(pWidget);
}


void hmi_OnTextPushButton225Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton225Click(tWidget *pWidget)
{
  TextPushButton225OnClick(pWidget);
}


void hmi_OnTextPushButton226Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton226Click(tWidget *pWidget)
{
  TextPushButton226OnClick(pWidget);
}


void hmi_OnTextPushButton227Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton227Click(tWidget *pWidget)
{
  TextPushButton227OnClick(pWidget);
}


void hmi_OnTextPushButton228Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton228Click(tWidget *pWidget)
{
  TextPushButton228OnClick(pWidget);
}


void hmi_OnTextPushButton229Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton229Click(tWidget *pWidget)
{
  TextPushButton229OnClick(pWidget);
}


void hmi_OnTextPushButton230Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton230Click(tWidget *pWidget)
{
  TextPushButton230OnClick(pWidget);
}


void hmi_OnTextPushButton231Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton231Click(tWidget *pWidget)
{
  TextPushButton231OnClick(pWidget);
}


void hmi_OnTextPushButton232Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton232Click(tWidget *pWidget)
{
  TextPushButton232OnClick(pWidget);
}


void hmi_OnTextPushButton233Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton233Click(tWidget *pWidget)
{
  TextPushButton233OnClick(pWidget);
}


void hmi_OnTextPushButton234Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton234Click(tWidget *pWidget)
{
  TextPushButton234OnClick(pWidget);
}


void hmi_OnTextPushButton235Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton235Click(tWidget *pWidget)
{
  TextPushButton235OnClick(pWidget);
}


void hmi_OnTextPushButton236Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton236Click(tWidget *pWidget)
{
  TextPushButton236OnClick(pWidget);
}


void hmi_OnTextPushButton237Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton237Click(tWidget *pWidget)
{
  TextPushButton237OnClick(pWidget);
}


void hmi_OnTextPushButton238Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton238Click(tWidget *pWidget)
{
  TextPushButton238OnClick(pWidget);
}


void hmi_OnTextPushButton239Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton239Click(tWidget *pWidget)
{
  TextPushButton239OnClick(pWidget);
}


void hmi_OnTextPushButton240Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton240Click(tWidget *pWidget)
{
  TextPushButton240OnClick(pWidget);
}


void hmi_OnTextPushButton241Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton241Click(tWidget *pWidget)
{
  TextPushButton241OnClick(pWidget);
}


void hmi_OnTextPushButton242Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton242Click(tWidget *pWidget)
{
  TextPushButton242OnClick(pWidget);
}


void hmi_OnTextPushButton243Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton243Click(tWidget *pWidget)
{
  TextPushButton243OnClick(pWidget);
}


void hmi_OnTextPushButton244Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton244Click(tWidget *pWidget)
{
  TextPushButton244OnClick(pWidget);
}


void hmi_OnTextPushButton245Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton245Click(tWidget *pWidget)
{
  TextPushButton245OnClick(pWidget);
}


void hmi_OnTextPushButton246Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton246Click(tWidget *pWidget)
{
  TextPushButton246OnClick(pWidget);
}


void hmi_OnTextPushButton247Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton247Click(tWidget *pWidget)
{
  TextPushButton247OnClick(pWidget);
}


void hmi_OnTextPushButton248Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton248Click(tWidget *pWidget)
{
  TextPushButton248OnClick(pWidget);
}


void hmi_OnTextPushButton249Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton249Click(tWidget *pWidget)
{
  TextPushButton249OnClick(pWidget);
}


void hmi_OnUn250Release(tWidget *pWidget)
{
}

void hmi_OnUn250Click(tWidget *pWidget)
{
  TextPushButton250OnClick(pWidget);
}


void hmi_OnTextPushButton251Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton251Click(tWidget *pWidget)
{
  TextPushButton251OnClick(pWidget);
}


void hmi_OnTextPushButton252Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton252Click(tWidget *pWidget)
{
  TextPushButton252OnClick(pWidget);
}


void hmi_OnTextPushButton253Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton253Click(tWidget *pWidget)
{
  TextPushButton253OnClick(pWidget);
}


void hmi_OnTextPushButton254Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton254Click(tWidget *pWidget)
{
  TextPushButton254OnClick(pWidget);
}


void hmi_OnTextPushButton255Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton255Click(tWidget *pWidget)
{
  TextPushButton255OnClick(pWidget);
}


void hmi_OnTextPushButton282Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton282Click(tWidget *pWidget)
{
  TextPushButton282OnClick(pWidget);
}


void hmi_OnTextPushButton256Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton256Click(tWidget *pWidget)
{
  TextPushButton256OnClick(pWidget);
}


void hmi_OnTextPushButton257Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton257Click(tWidget *pWidget)
{
  TextPushButton257OnClick(pWidget);
}


void hmi_OnTextPushButton258Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton258Click(tWidget *pWidget)
{
  TextPushButton258OnClick(pWidget);
}


void hmi_OnTextPushButton261Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton261Click(tWidget *pWidget)
{
  TextPushButton261OnClick(pWidget);
}


void hmi_OnTextPushButton262Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton262Click(tWidget *pWidget)
{
  TextPushButton262OnClick(pWidget);
}


void hmi_OnTextPushButton265Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton265Click(tWidget *pWidget)
{
  TextPushButton265OnClick(pWidget);
}


void hmi_OnTimer292Execute(tWidget *pWidget)
{
  Timer292OnExecute(pWidget);
}


static void ConnectWidgetVariable()
{
  if (g_hmi_CurrentFrame != 10) return;
}

static void DisconnectWidgetVariable()
{
}

void hmi_Clavier()
{
   var_table_init();
   hmi_FreeCurrentFrame();
   g_hmi_CurrentFrame = 10;
   hmi_InitFrameWidgets10();
}

