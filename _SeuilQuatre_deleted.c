#include "hmiworks.h"
#pragma GCC diagnostic ignored "-Wunused-variable"

static tWidget *thisCanvas = (tWidget *)&CanvasSeuilQuatre;
static tContext globalContext;
static tContext *thisContext = &globalContext;

#pragma GCC diagnostic warning "-Wunused-variable"


static void ConnectWidgetVariable();
static void DisconnectWidgetVariable();
const unsigned char * ObjectList146_44x31[] = {
ObjectList146_44x31_0_pucImage_Group18,
ObjectList146_44x31_0_pucImage_Group18
};

#include "__seuilquatre.h"

tCheckBoxWidget NO154 = CheckBoxStruct(WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 235, 79, 25, 23,
   CB_AOPT_VISIBLE | CB_AOPT_ENABLED | 
   CB_STYLE_OUTLINE | CB_STYLE_FILL | CB_STYLE_TEXT, 16,
   0xFFFFFF, 0x000000, 0x000000, 
   g_pFontCm18, "",
   0, hmi_OnNO154CheckChange, 0, 0, 2);
RectangularButton(hysteresis156, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 103, 48, 71, 26,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_Onhysteresis156Click, hmi_Onhysteresis156Release, 0,
   0, -1, 0);
RectangularButton(Retard157, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 102, 89, 71, 26,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnRetard157Click, hmi_OnRetard157Release, 0,
   0, -1, 0);
RectangularButton(Voie158, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 102, 131, 71, 26,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnVoie158Click, hmi_OnVoie158Release, 0,
   0, -1, 0);
RectangularButton(Prev160, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 22, 197, 44, 31,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", ObjectList146_44x31,
   200, 100,
   hmi_OnPrev160Click, hmi_OnPrev160Release, 0,
   0, 0, 1);
RectangularButton(OK159, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 257, 200, 43, 27,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xC0C0C0, 0xFF0000, 0x000000, 0x008000,
   g_pFontCm18b, "OK", 0,
   200, 100,
   hmi_OnOK159Click, hmi_OnOK159Release, 0,
   0, -1, 0);
RectangularButton(adresse202, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 103, 170, 71, 26,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_Onadresse202Click, hmi_Onadresse202Release, 0,
   0, -1, 0);


Canvas(CanvasSeuilQuatre, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0,
       320, 240, (CANVAS_STYLE_APP_DRAWN | CV_AOPT_VISIBLE), 0, 0, 0, 0, 0, 0, OnSeuilQuatre145Paint);

void renderSeuilQuatre145Vector(tContext *pContext, int ox, int oy) {
  GrContextFontSet(pContext, g_pFontCm22b);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Seuil4", -1, ox+116, oy+6, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "hysteresis", -1, ox+19, oy+50, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Retard", -1, ox+21, oy+92, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Voie", -1, ox+25, oy+131, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Relay NO", -1, ox+210, oy+50, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "adresse", -1, ox+25, oy+168, 0);
}
void OnSeuilQuatre145Paint(tWidget *pWidget, tContext *pContext)
{
   hmi_SetForeground(pContext, 0xFFFFFF);
   hmi_FillRect(pContext, 0, 0, 320, 240);
   renderSeuilQuatre145Vector(pContext, 0, 0);
}

static void hmi_InitGlobalContext()
{
  GrContextInit(thisContext, thisCanvas->pDisplay);
  GrContextClipRegionSet(thisContext, &(thisCanvas->sPosition));
}
void hmi_InitFrameWidgets10()
{
   hmi_EnableDrawings(0);
   WidgetAdd(WIDGET_ROOT, (tWidget *)(&CanvasSeuilQuatre));
   WidgetAdd(WIDGET_ROOT, (tWidget *)&NO154);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&hysteresis156);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Retard157);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Voie158);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Prev160);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&OK159);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&adresse202);
   hmi_InitGlobalContext();
   ConnectWidgetVariable();
   hmi_EnableDrawings(1);
}

void hmi_FreeFrameWidgets10()
{
   DisconnectWidgetVariable();
   WidgetRemove((tWidget *)(&CanvasSeuilQuatre));
   WidgetRemove((tWidget *)(&NO154));
   WidgetRemove((tWidget *)(&hysteresis156));
   WidgetRemove((tWidget *)(&Retard157));
   WidgetRemove((tWidget *)(&Voie158));
   WidgetRemove((tWidget *)(&Prev160));
   WidgetRemove((tWidget *)(&OK159));
   WidgetRemove((tWidget *)(&adresse202));
}


void hmi_OnNO154CheckChange(tWidget *pWidget, unsigned long bSelected)
{
  NO102OnChange(pWidget, bSelected);
}


void hmi_Onhysteresis156Release(tWidget *pWidget)
{
}

void hmi_Onhysteresis156Click(tWidget *pWidget)
{
  hysteresis104OnClick(pWidget);
}


void hmi_OnRetard157Release(tWidget *pWidget)
{
}

void hmi_OnRetard157Click(tWidget *pWidget)
{
  Retard105OnClick(pWidget);
}


void hmi_OnVoie158Release(tWidget *pWidget)
{
}

void hmi_OnVoie158Click(tWidget *pWidget)
{
  Voie158OnClick(pWidget);
}


void hmi_OnPrev160Release(tWidget *pWidget)
{
}

void hmi_OnPrev160Click(tWidget *pWidget)
{
}


void hmi_OnOK159Release(tWidget *pWidget)
{
}

void hmi_OnOK159Click(tWidget *pWidget)
{
  OK159OnClick(pWidget);
}


void hmi_Onadresse202Release(tWidget *pWidget)
{
}

void hmi_Onadresse202Click(tWidget *pWidget)
{
}


static void ConnectWidgetVariable()
{
  if (g_hmi_CurrentFrame != 10) return;
}

static void DisconnectWidgetVariable()
{
}

void hmi_SeuilQuatre()
{
   var_table_init();
   hmi_FreeCurrentFrame();
   g_hmi_CurrentFrame = 10;
   hmi_InitFrameWidgets10();
}

