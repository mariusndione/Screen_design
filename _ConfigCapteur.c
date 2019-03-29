#include "hmiworks.h"
#pragma GCC diagnostic ignored "-Wunused-variable"

static tWidget *thisCanvas = (tWidget *)&CanvasConfigCapteur;
static tContext globalContext;
static tContext *thisContext = &globalContext;

#pragma GCC diagnostic warning "-Wunused-variable"


static void ConnectWidgetVariable();
static void DisconnectWidgetVariable();
static const unsigned char * ImageArr_Etalonnage138[] = 
{
pucImage_Etalonnage138, 
pucImagePress_Etalonnage138
};
const unsigned char * ObjectList53_41x30[] = {
ObjectList53_41x30_0_pucImage_Group29,
ObjectList53_41x30_0_pucImage_Group29
};
const unsigned char * ObjectList139_42x27[] = {
ObjectList139_42x27_0_pucImage_Group30,
ObjectList139_42x27_0_pucImage_Group30
};
const unsigned char * ObjectList146_37x25[] = {
ObjectList146_37x25_0_pucImage_Group29,
ObjectList146_37x25_0_pucImage_Group29
};

#include "__configcapteur.h"

RectangularButton(ZeroCapteur12, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 112, 42, 61, 26,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnZeroCapteur12Click, hmi_OnZeroCapteur12Release, 0,
   0, -1, 0);
RectangularButton(MaxCapteur13, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 110, 75, 62, 27,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnMaxCapteur13Click, hmi_OnMaxCapteur13Release, 0,
   0, -1, 0);
RectangularButton(Voie36, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 111, 109, 64, 26,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnVoie36Click, hmi_OnVoie36Release, 0,
   0, -1, 0);
RectangularButton(Etalonnage138, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR,
    17, 197, 292, 35, PB_STYLE_FILL|PB_STYLE_IMG|PB_STYLE_TEXT |PB_AOPT_VISIBLE|PB_AOPT_ENABLED, ClrSilver, ClrSilver, 0, ClrSilver,
    g_pFontCm18b, "", ImageArr_Etalonnage138, 0, 0,
    hmi_OnEtalonnage138Click, hmi_OnEtalonnage138Release, 0, 0, 1, 2);
RectangularButton(TextPushButton55, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 0, 0, 41, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0x00FFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", ObjectList53_41x30,
   200, 100,
   hmi_OnTextPushButton55Click, hmi_OnTextPushButton55Release, 0,
   0, 0, 1);
RectangularButton(Unite35, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 109, 143, 113, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnUnite35Click, hmi_OnUnite35Release, 0,
   0, -1, 0);
RectangularButton(Quit128, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 275, 2, 42, 27,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", ObjectList139_42x27,
   200, 100,
   hmi_OnQuit128Click, hmi_OnQuit128Release, 0,
   0, 0, 1);
Canvas(Label144, WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 173, 75, 45, 26,
   CANVAS_STYLE_TEXT | CANVAS_STYLE_FILL | CANVAS_STYLE_OUTLINE
    | CANVAS_STYLE_TEXT_HCENTER | CV_AOPT_VISIBLE | CV_AOPT_ENABLED | CANVAS_STYLE_TEXT_OPAQUE
   , 0xFFFFFF, 0xFFFFFF, 0xFF0000,
   g_pFontCm20b, "", 0, 0);
Canvas(Label145, WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 218, 75, 37, 25,
   CANVAS_STYLE_TEXT | CANVAS_STYLE_FILL | CANVAS_STYLE_OUTLINE
    | CANVAS_STYLE_TEXT_HCENTER | CV_AOPT_VISIBLE | CV_AOPT_ENABLED | CANVAS_STYLE_IMG
   , 0xFFFFFF, 0xFFFFFF, 0x000000,
   g_pFontCm18, "", ObjectList146_37x25, 0);
RectangularButton(ValPhysique148, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 263, 74, 53, 29,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnValPhysique148Click, hmi_OnValPhysique148Release, 0,
   0, -1, 0);
Canvas(Label151, WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 177, 42, 37, 26,
   CANVAS_STYLE_TEXT | CANVAS_STYLE_FILL | CANVAS_STYLE_OUTLINE
    | CANVAS_STYLE_TEXT_HCENTER | CV_AOPT_VISIBLE | CV_AOPT_ENABLED | CANVAS_STYLE_TEXT_OPAQUE
   , 0xFFFFFF, 0xFFFFFF, 0xFF0000,
   g_pFontCm20b, "", 0, 0);


Canvas(CanvasConfigCapteur, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0,
       320, 240, (CANVAS_STYLE_APP_DRAWN | CV_AOPT_VISIBLE), 0, 0, 0, 0, 0, 0, OnConfigCapteur7Paint);

void renderConfigCapteur7Vector(tContext *pContext, int ox, int oy) {
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "ZeroCapteur", -1, ox+11, oy+43, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Unite", -1, ox+17, oy+146, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Voie", -1, ox+13, oy+111, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Unité", -1, ox+21, oy+-104, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Précédent", -1, ox+183, oy+-103, 0);
  GrContextFontSet(pContext, g_pFontCm22b);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Configuration capteur", -1, ox+50, oy+2, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Flèche bas", -1, ox+313, oy+-104, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "MaxCapteur", -1, ox+9, oy+77, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Quit", -1, ox+112, oy+-107, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "flèche droit", -1, ox+-92, oy+-111, 0);
}
void OnConfigCapteur7Paint(tWidget *pWidget, tContext *pContext)
{
   hmi_SetForeground(pContext, 0xFFFFFF);
   hmi_FillRect(pContext, 0, 0, 320, 240);
   renderConfigCapteur7Vector(pContext, 0, 0);
}

static void hmi_InitGlobalContext()
{
  GrContextInit(thisContext, thisCanvas->pDisplay);
  GrContextClipRegionSet(thisContext, &(thisCanvas->sPosition));
}
void hmi_InitFrameWidgets3()
{
   hmi_EnableDrawings(0);
   ConfigCapteur7OnCreate();
   WidgetAdd(WIDGET_ROOT, (tWidget *)(&CanvasConfigCapteur));
   WidgetAdd(WIDGET_ROOT, (tWidget *)&ZeroCapteur12);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&MaxCapteur13);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Voie36);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Etalonnage138);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton55);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Unite35);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Quit128);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Label144);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Label145);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&ValPhysique148);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Label151);
   hmi_InitGlobalContext();
   ConnectWidgetVariable();
   ConfigCapteur7OnShow();
   hmi_EnableDrawings(1);
}

void hmi_FreeFrameWidgets3()
{
   DisconnectWidgetVariable();
   WidgetRemove((tWidget *)(&CanvasConfigCapteur));
   WidgetRemove((tWidget *)(&ZeroCapteur12));
   WidgetRemove((tWidget *)(&MaxCapteur13));
   WidgetRemove((tWidget *)(&Voie36));
   WidgetRemove((tWidget *)(&Etalonnage138));
   WidgetRemove((tWidget *)(&TextPushButton55));
   WidgetRemove((tWidget *)(&Unite35));
   WidgetRemove((tWidget *)(&Quit128));
   WidgetRemove((tWidget *)(&Label144));
   WidgetRemove((tWidget *)(&Label145));
   WidgetRemove((tWidget *)(&ValPhysique148));
   WidgetRemove((tWidget *)(&Label151));
}


void hmi_OnZeroCapteur12Release(tWidget *pWidget)
{
}

void hmi_OnZeroCapteur12Click(tWidget *pWidget)
{
  ZeroCapteur12OnClick(pWidget);
}


void hmi_OnMaxCapteur13Release(tWidget *pWidget)
{
}

void hmi_OnMaxCapteur13Click(tWidget *pWidget)
{
  MaxCapteur13OnClick(pWidget);
}


void hmi_OnVoie36Release(tWidget *pWidget)
{
}

void hmi_OnVoie36Click(tWidget *pWidget)
{
  Voie36OnClick(pWidget);
}



void hmi_OnEtalonnage138Release(tWidget *pWidget)
{
}

void hmi_OnEtalonnage138Click(tWidget *pWidget) 
{
  Etalonnage138OnClick(pWidget);
}

void hmi_OnTextPushButton55Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton55Click(tWidget *pWidget)
{
  TextPushButton55OnClick(pWidget);
}


void hmi_OnUnite35Release(tWidget *pWidget)
{
}

void hmi_OnUnite35Click(tWidget *pWidget)
{
  Unite35OnClick(pWidget);
}


void hmi_OnQuit128Release(tWidget *pWidget)
{
}

void hmi_OnQuit128Click(tWidget *pWidget)
{
  Quit128OnClick(pWidget);
}


void hmi_OnValPhysique148Release(tWidget *pWidget)
{
}

void hmi_OnValPhysique148Click(tWidget *pWidget)
{
  ValPhysique148OnClick(pWidget);
}


static void ConnectWidgetVariable()
{
  if (g_hmi_CurrentFrame != 3) return;
}

static void DisconnectWidgetVariable()
{
}

void hmi_ConfigCapteur()
{
   var_table_init();
   hmi_FreeCurrentFrame();
   g_hmi_CurrentFrame = 3;
   hmi_InitFrameWidgets3();
}

