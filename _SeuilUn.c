#include "hmiworks.h"
#pragma GCC diagnostic ignored "-Wunused-variable"

static tWidget *thisCanvas = (tWidget *)&CanvasSeuilUn;
static tContext globalContext;
static tContext *thisContext = &globalContext;

#pragma GCC diagnostic warning "-Wunused-variable"


static void ConnectWidgetVariable();
static void DisconnectWidgetVariable();
static const unsigned char * ImageArr_Valider111[] = 
{
pucImage_Valider111, 
pucImagePress_Valider111
};
const unsigned char * ObjectList60_45x31[] = {
ObjectList60_45x31_0_pucImage_Group29,
ObjectList60_45x31_0_pucImage_Group29
};
const unsigned char * ObjectList155_50x30[] = {
ObjectList155_50x30_0_pucImage_Group29,
ObjectList155_50x30_0_pucImage_Group29
};
const unsigned char * ObjectList155_44x33[] = {
ObjectList155_44x33_0_pucImage_Group29,
ObjectList155_44x33_0_pucImage_Group29
};
const unsigned char * ObjectList130_42x27[] = {
ObjectList130_42x27_0_pucImage_Group30,
ObjectList130_42x27_0_pucImage_Group30
};

#include "__seuilun.h"

tCheckBoxWidget NO102 = CheckBoxStruct(WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 281, 34, 25, 23,
   CB_AOPT_VISIBLE | CB_AOPT_ENABLED | 
   CB_STYLE_OUTLINE | CB_STYLE_FILL | CB_STYLE_TEXT, 16,
   0xFFFFFF, 0x000000, 0x008000, 
   g_pFontCm18, "",
   0, hmi_OnNO102CheckChange, 0, 0, 2);
RectangularButton(hysteresis104, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 110, 36, 68, 26,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_Onhysteresis104Click, hmi_Onhysteresis104Release, 0,
   0, -1, 0);
RectangularButton(Retard105, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 110, 74, 67, 26,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnRetard105Click, hmi_OnRetard105Release, 0,
   0, -1, 0);
RectangularButton(Voie106, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 109, 109, 67, 26,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnVoie106Click, hmi_OnVoie106Release, 0,
   0, -1, 0);
RectangularButton(Next107, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 169, 193, 45, 31,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", ObjectList60_45x31,
   200, 100,
   hmi_OnNext107Click, hmi_OnNext107Release, 0,
   0, 0, 1);
RectangularButton(adresse103, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 109, 145, 66, 26,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_Onadresse103Click, hmi_Onadresse103Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton153, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 0, 1, 50, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", ObjectList155_50x30,
   200, 100,
   hmi_OnTextPushButton153Click, hmi_OnTextPushButton153Release, 0,
   0, 0, 1);
Canvas(Relai96, WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 163, 8, 13, 22,
   CANVAS_STYLE_TEXT | CANVAS_STYLE_FILL | CANVAS_STYLE_OUTLINE
    | CANVAS_STYLE_TEXT_HCENTER | CV_AOPT_VISIBLE | CV_AOPT_ENABLED | CANVAS_STYLE_TEXT_OPAQUE
   , 0xFFFFFF, 0xFFFFFF, 0x000080,
   g_pFontCm22b, "", 0, 0);
RectangularButton(Prev164, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 83, 193, 44, 33,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", ObjectList155_44x33,
   200, 100,
   hmi_OnPrev164Click, hmi_OnPrev164Release, 0,
   0, 0, 1);
TimerWidget(Timer110, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0, 32, 32,
   TS_STYLE_TIMER_ENABLED, 1000, 0, hmi_OnTimer110Execute);
RectangularButton(Valider111, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR,
    251, 201, 57, 30, PB_STYLE_FILL|PB_STYLE_IMG|PB_STYLE_TEXT |PB_AOPT_VISIBLE|PB_AOPT_ENABLED, ClrSilver, ClrSilver, 0, ClrSilver,
    g_pFontCm18, "", ImageArr_Valider111, 0, 0,
    hmi_OnValider111Click, hmi_OnValider111Release, 0, 0, 1, 2);
RectangularButton(Quit126, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 275, 2, 42, 27,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", ObjectList130_42x27,
   200, 100,
   hmi_OnQuit126Click, hmi_OnQuit126Release, 0,
   0, 0, 1);


Canvas(CanvasSeuilUn, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0,
       320, 240, (CANVAS_STYLE_APP_DRAWN | CV_AOPT_VISIBLE), 0, 0, 0, 0, 0, 0, OnSeuilUn95Paint);

void renderSeuilUn95Vector(tContext *pContext, int ox, int oy) {
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "NO/NC", -1, ox+211, oy+35, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "adresse", -1, ox+6, oy+143, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "hysteresis", -1, ox+6, oy+36, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Précédent", -1, ox+296, oy+-138, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Retard", -1, ox+8, oy+73, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Left", -1, ox+80, oy+-123, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Right", -1, ox+185, oy+-122, 0);
  GrContextFontSet(pContext, g_pFontCm22b);
  hmi_SetForeground(pContext, 0x00FF0000);
  hmi_DrawString(pContext, "Relai", -1, ox+98, oy+7, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Voie", -1, ox+7, oy+107, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Quit", -1, ox+19, oy+-128, 0);
}
void OnSeuilUn95Paint(tWidget *pWidget, tContext *pContext)
{
   hmi_SetForeground(pContext, 0xFFFFFF);
   hmi_FillRect(pContext, 0, 0, 320, 240);
 SeuilUn95OnPaint();
   renderSeuilUn95Vector(pContext, 0, 0);
}

static void hmi_InitGlobalContext()
{
  GrContextInit(thisContext, thisCanvas->pDisplay);
  GrContextClipRegionSet(thisContext, &(thisCanvas->sPosition));
}
void hmi_InitFrameWidgets8()
{
   hmi_EnableDrawings(0);
   SeuilUn95OnCreate();
   WidgetAdd(WIDGET_ROOT, (tWidget *)(&CanvasSeuilUn));
   WidgetAdd(WIDGET_ROOT, (tWidget *)&NO102);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&hysteresis104);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Retard105);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Voie106);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Next107);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&adresse103);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton153);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Relai96);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Prev164);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Timer110);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Valider111);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Quit126);
   hmi_InitGlobalContext();
   ConnectWidgetVariable();
   SeuilUn95OnShow();
   hmi_EnableDrawings(1);
}

void hmi_FreeFrameWidgets8()
{
   DisconnectWidgetVariable();
   WidgetRemove((tWidget *)(&CanvasSeuilUn));
   WidgetRemove((tWidget *)(&NO102));
   WidgetRemove((tWidget *)(&hysteresis104));
   WidgetRemove((tWidget *)(&Retard105));
   WidgetRemove((tWidget *)(&Voie106));
   WidgetRemove((tWidget *)(&Next107));
   WidgetRemove((tWidget *)(&adresse103));
   WidgetRemove((tWidget *)(&TextPushButton153));
   WidgetRemove((tWidget *)(&Relai96));
   WidgetRemove((tWidget *)(&Prev164));
   WidgetRemove((tWidget *)(&Timer110));
   WidgetRemove((tWidget *)(&Valider111));
   WidgetRemove((tWidget *)(&Quit126));
}


void hmi_OnNO102CheckChange(tWidget *pWidget, unsigned long bSelected)
{
  NO102OnChange(pWidget, bSelected);
}


void hmi_Onhysteresis104Release(tWidget *pWidget)
{
}

void hmi_Onhysteresis104Click(tWidget *pWidget)
{
  hysteresis104OnClick(pWidget);
}


void hmi_OnRetard105Release(tWidget *pWidget)
{
}

void hmi_OnRetard105Click(tWidget *pWidget)
{
  Retard105OnClick(pWidget);
}


void hmi_OnVoie106Release(tWidget *pWidget)
{
}

void hmi_OnVoie106Click(tWidget *pWidget)
{
  Voie106OnClick(pWidget);
}


void hmi_OnNext107Release(tWidget *pWidget)
{
}

void hmi_OnNext107Click(tWidget *pWidget)
{
  Next107OnClick(pWidget);
}


void hmi_Onadresse103Release(tWidget *pWidget)
{
}

void hmi_Onadresse103Click(tWidget *pWidget)
{
  adresse103OnClick(pWidget);
}


void hmi_OnTextPushButton153Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton153Click(tWidget *pWidget)
{
  TextPushButton153OnClick(pWidget);
}


void hmi_OnPrev164Release(tWidget *pWidget)
{
}

void hmi_OnPrev164Click(tWidget *pWidget)
{
  Prev164OnClick(pWidget);
}


void hmi_OnTimer110Execute(tWidget *pWidget)
{
  Timer110OnExecute(pWidget);
}



void hmi_OnValider111Release(tWidget *pWidget)
{
}

void hmi_OnValider111Click(tWidget *pWidget) 
{
  Valider111OnClick(pWidget);
}

void hmi_OnQuit126Release(tWidget *pWidget)
{
}

void hmi_OnQuit126Click(tWidget *pWidget)
{
  Quit126OnClick(pWidget);
}


static void ConnectWidgetVariable()
{
  if (g_hmi_CurrentFrame != 8) return;
}

static void DisconnectWidgetVariable()
{
}

void hmi_SeuilUn()
{
   var_table_init();
   hmi_FreeCurrentFrame();
   g_hmi_CurrentFrame = 8;
   hmi_InitFrameWidgets8();
}

