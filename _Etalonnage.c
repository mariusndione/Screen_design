#include "hmiworks.h"
#pragma GCC diagnostic ignored "-Wunused-variable"

static tWidget *thisCanvas = (tWidget *)&CanvasEtalonnage;
static tContext globalContext;
static tContext *thisContext = &globalContext;

#pragma GCC diagnostic warning "-Wunused-variable"


static void ConnectWidgetVariable();
static void DisconnectWidgetVariable();
const unsigned char * ObjectList65_55x33[] = {
ObjectList65_55x33_0_pucImage_Group40,
ObjectList65_55x33_0_pucImage_Group40
};
const unsigned char * ObjectList66_50x30[] = {
ObjectList66_50x30_0_pucImage_Group29,
ObjectList66_50x30_0_pucImage_Group29
};
const unsigned char * ObjectList161_36x27[] = {
ObjectList161_36x27_0_pucImage_Group29,
ObjectList161_36x27_0_pucImage_Group29
};
const unsigned char * ObjectList133_42x27[] = {
ObjectList133_42x27_0_pucImage_Group30,
ObjectList133_42x27_0_pucImage_Group30
};
const unsigned char * ObjectList170_26x25[] = {
ObjectList170_26x25_0_pucImage_Group29,
ObjectList170_26x25_0_pucImage_Group29
};

#include "__etalonnage.h"

RectangularButton(TextPushButton136, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 258, 201, 55, 33,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "TextPushButton136", ObjectList65_55x33,
   200, 100,
   hmi_OnTextPushButton136Click, hmi_OnTextPushButton136Release, 0,
   0, 0, 1);
RectangularButton(TextPushButton108, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 3, 2, 50, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", ObjectList66_50x30,
   200, 100,
   hmi_OnTextPushButton108Click, hmi_OnTextPushButton108Release, 0,
   0, 0, 1);
RectangularButton(TextPushButton163, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 50, 162, 36, 27,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "TextPushButton163", ObjectList161_36x27,
   200, 100,
   hmi_OnTextPushButton163Click, hmi_OnTextPushButton163Release, 0,
   0, 0, 1);
RectangularButton(Quit127, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 275, 2, 42, 27,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", ObjectList133_42x27,
   200, 100,
   hmi_OnQuit127Click, hmi_OnQuit127Release, 0,
   0, 0, 1);
Canvas(Label62, WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 14, 37, 296, 122,
   CANVAS_STYLE_TEXT | CANVAS_STYLE_FILL | CANVAS_STYLE_OUTLINE
    | CANVAS_STYLE_TEXT_HCENTER | CV_AOPT_VISIBLE | CV_AOPT_ENABLED | CANVAS_STYLE_TEXT_OPAQUE
   , 0xFFFFFF, 0x000000, 0x000000,
   g_pFontCm18, "", 0, 0);
RectangularButton(ValPhysique157, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 169, 189, 78, 39,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnValPhysique157Click, hmi_OnValPhysique157Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton158, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 171, 162, 36, 27,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "TextPushButton163", ObjectList161_36x27,
   200, 100,
   hmi_OnTextPushButton158Click, hmi_OnTextPushButton158Release, 0,
   0, 0, 1);
Canvas(Label168, WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 95, 188, 34, 40,
   CANVAS_STYLE_TEXT | CANVAS_STYLE_FILL | CANVAS_STYLE_OUTLINE
    | CANVAS_STYLE_TEXT_HCENTER | CV_AOPT_VISIBLE | CV_AOPT_ENABLED | CANVAS_STYLE_TEXT_OPAQUE
   , 0xFFFFFF, 0xFFFFFF, 0xFF0000,
   g_pFontCm18b, "", 0, 0);
Canvas(Label169, WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 136, 196, 26, 25,
   CANVAS_STYLE_TEXT | CANVAS_STYLE_FILL | CANVAS_STYLE_OUTLINE
    | CANVAS_STYLE_TEXT_HCENTER | CV_AOPT_VISIBLE | CV_AOPT_ENABLED | CANVAS_STYLE_IMG
   , 0xFFFFFF, 0xFFFFFF, 0x000000,
   g_pFontCm18, "", ObjectList170_26x25, 0);
RectangularButton(ValReelle63, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 11, 189, 78, 39,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnValReelle63Click, hmi_OnValReelle63Release, 0,
   0, -1, 0);


Canvas(CanvasEtalonnage, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0,
       320, 240, (CANVAS_STYLE_APP_DRAWN | CV_AOPT_VISIBLE), 0, 0, 0, 0, 0, 0, OnEtalonnage134Paint);

void renderEtalonnage134Vector(tContext *pContext, int ox, int oy) {
  GrContextFontSet(pContext, g_pFontCm22b);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Etalonnage", -1, ox+97, oy+0, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Précédent", -1, ox+296, oy+-138, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "bas", -1, ox+93, oy+-115, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Quit", -1, ox+19, oy+-116, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Reel", -1, ox+9, oy+168, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Physique", -1, ox+215, oy+166, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "flèche droit", -1, ox+-92, oy+-127, 0);
}
void OnEtalonnage134Paint(tWidget *pWidget, tContext *pContext)
{
   hmi_SetForeground(pContext, 0xFFFFFF);
   hmi_FillRect(pContext, 0, 0, 320, 240);
   renderEtalonnage134Vector(pContext, 0, 0);
}

static void hmi_InitGlobalContext()
{
  GrContextInit(thisContext, thisCanvas->pDisplay);
  GrContextClipRegionSet(thisContext, &(thisCanvas->sPosition));
}
void hmi_InitFrameWidgets5()
{
   hmi_EnableDrawings(0);
   WidgetAdd(WIDGET_ROOT, (tWidget *)(&CanvasEtalonnage));
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton136);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton108);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton163);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Quit127);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Label62);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&ValPhysique157);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton158);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Label168);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Label169);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&ValReelle63);
   hmi_InitGlobalContext();
   ConnectWidgetVariable();
   Etalonnage134OnShow();
   hmi_EnableDrawings(1);
}

void hmi_FreeFrameWidgets5()
{
   DisconnectWidgetVariable();
   WidgetRemove((tWidget *)(&CanvasEtalonnage));
   WidgetRemove((tWidget *)(&TextPushButton136));
   WidgetRemove((tWidget *)(&TextPushButton108));
   WidgetRemove((tWidget *)(&TextPushButton163));
   WidgetRemove((tWidget *)(&Quit127));
   WidgetRemove((tWidget *)(&Label62));
   WidgetRemove((tWidget *)(&ValPhysique157));
   WidgetRemove((tWidget *)(&TextPushButton158));
   WidgetRemove((tWidget *)(&Label168));
   WidgetRemove((tWidget *)(&Label169));
   WidgetRemove((tWidget *)(&ValReelle63));
}


void hmi_OnTextPushButton136Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton136Click(tWidget *pWidget)
{
  TextPushButton136OnClick(pWidget);
}


void hmi_OnTextPushButton108Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton108Click(tWidget *pWidget)
{
  TextPushButton108OnClick(pWidget);
}


void hmi_OnTextPushButton163Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton163Click(tWidget *pWidget)
{
}


void hmi_OnQuit127Release(tWidget *pWidget)
{
}

void hmi_OnQuit127Click(tWidget *pWidget)
{
  Quit127OnClick(pWidget);
}


void hmi_OnValPhysique157Release(tWidget *pWidget)
{
}

void hmi_OnValPhysique157Click(tWidget *pWidget)
{
  ValPhysique157OnClick(pWidget);
}


void hmi_OnTextPushButton158Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton158Click(tWidget *pWidget)
{
}


void hmi_OnValReelle63Release(tWidget *pWidget)
{
}

void hmi_OnValReelle63Click(tWidget *pWidget)
{
  ValReelle63OnClick(pWidget);
}


static void ConnectWidgetVariable()
{
  if (g_hmi_CurrentFrame != 5) return;
}

static void DisconnectWidgetVariable()
{
}

void hmi_Etalonnage()
{
   var_table_init();
   hmi_FreeCurrentFrame();
   g_hmi_CurrentFrame = 5;
   hmi_InitFrameWidgets5();
}

