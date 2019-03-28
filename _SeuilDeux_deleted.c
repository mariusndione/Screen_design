#include "hmiworks.h"
#pragma GCC diagnostic ignored "-Wunused-variable"

static tWidget *thisCanvas = (tWidget *)&CanvasSeuilDeux;
static tContext globalContext;
static tContext *thisContext = &globalContext;

#pragma GCC diagnostic warning "-Wunused-variable"


static void ConnectWidgetVariable();
static void DisconnectWidgetVariable();
const unsigned char * ObjectList110_44x31[] = {
ObjectList110_44x31_0_pucImage_Group18,
ObjectList110_44x31_0_pucImage_Group18
};
const unsigned char * ObjectList124_44x31[] = {
ObjectList124_44x31_0_pucImage_Group18,
ObjectList124_44x31_0_pucImage_Group18
};

#include "__seuildeux.h"

tCheckBoxWidget NO117 = CheckBoxStruct(WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 235, 79, 25, 23,
   CB_AOPT_VISIBLE | CB_AOPT_ENABLED | 
   CB_STYLE_OUTLINE | CB_STYLE_FILL | CB_STYLE_TEXT, 16,
   0xFFFFFF, 0x000000, 0x000000, 
   g_pFontCm18, "",
   0, hmi_OnNO117CheckChange, 0, 0, 2);
RectangularButton(hysteresis119, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 103, 48, 71, 26,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_Onhysteresis119Click, hmi_Onhysteresis119Release, 0,
   0, -1, 0);
RectangularButton(Retard120, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 102, 89, 71, 26,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnRetard120Click, hmi_OnRetard120Release, 0,
   0, -1, 0);
RectangularButton(Voie121, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 102, 131, 71, 26,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnVoie121Click, hmi_OnVoie121Release, 0,
   0, -1, 0);
RectangularButton(Next122, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 192, 196, 44, 31,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", ObjectList110_44x31,
   200, 100,
   hmi_OnNext122Click, hmi_OnNext122Release, 0,
   0, 0, 1);
RectangularButton(Prev123, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 106, 196, 44, 31,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", ObjectList124_44x31,
   200, 100,
   hmi_OnPrev123Click, hmi_OnPrev123Release, 0,
   0, 0, 1);
RectangularButton(adresse118, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 102, 167, 71, 26,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_Onadresse118Click, hmi_Onadresse118Release, 0,
   0, -1, 0);


Canvas(CanvasSeuilDeux, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0,
       320, 240, (CANVAS_STYLE_APP_DRAWN | CV_AOPT_VISIBLE), 0, 0, 0, 0, 0, 0, OnSeuilDeux109Paint);

void renderSeuilDeux109Vector(tContext *pContext, int ox, int oy) {
  GrContextFontSet(pContext, g_pFontCm22b);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Seuil2", -1, ox+116, oy+6, 0);
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
  hmi_DrawString(pContext, "adresse", -1, ox+24, oy+165, 0);
}
void OnSeuilDeux109Paint(tWidget *pWidget, tContext *pContext)
{
   hmi_SetForeground(pContext, 0xFFFFFF);
   hmi_FillRect(pContext, 0, 0, 320, 240);
   renderSeuilDeux109Vector(pContext, 0, 0);
}

static void hmi_InitGlobalContext()
{
  GrContextInit(thisContext, thisCanvas->pDisplay);
  GrContextClipRegionSet(thisContext, &(thisCanvas->sPosition));
}
void hmi_InitFrameWidgets8()
{
   hmi_EnableDrawings(0);
   WidgetAdd(WIDGET_ROOT, (tWidget *)(&CanvasSeuilDeux));
   WidgetAdd(WIDGET_ROOT, (tWidget *)&NO117);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&hysteresis119);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Retard120);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Voie121);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Next122);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Prev123);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&adresse118);
   hmi_InitGlobalContext();
   ConnectWidgetVariable();
   hmi_EnableDrawings(1);
}

void hmi_FreeFrameWidgets8()
{
   DisconnectWidgetVariable();
   WidgetRemove((tWidget *)(&CanvasSeuilDeux));
   WidgetRemove((tWidget *)(&NO117));
   WidgetRemove((tWidget *)(&hysteresis119));
   WidgetRemove((tWidget *)(&Retard120));
   WidgetRemove((tWidget *)(&Voie121));
   WidgetRemove((tWidget *)(&Next122));
   WidgetRemove((tWidget *)(&Prev123));
   WidgetRemove((tWidget *)(&adresse118));
}


void hmi_OnNO117CheckChange(tWidget *pWidget, unsigned long bSelected)
{
  NO102OnChange(pWidget, bSelected);
}


void hmi_Onhysteresis119Release(tWidget *pWidget)
{
}

void hmi_Onhysteresis119Click(tWidget *pWidget)
{
  hysteresis104OnClick(pWidget);
}


void hmi_OnRetard120Release(tWidget *pWidget)
{
}

void hmi_OnRetard120Click(tWidget *pWidget)
{
  Retard105OnClick(pWidget);
}


void hmi_OnVoie121Release(tWidget *pWidget)
{
}

void hmi_OnVoie121Click(tWidget *pWidget)
{
  Voie121OnClick(pWidget);
}


void hmi_OnNext122Release(tWidget *pWidget)
{
}

void hmi_OnNext122Click(tWidget *pWidget)
{
  Next122OnClick(pWidget);
}


void hmi_OnPrev123Release(tWidget *pWidget)
{
}

void hmi_OnPrev123Click(tWidget *pWidget)
{
  Prev123OnClick(pWidget);
}


void hmi_Onadresse118Release(tWidget *pWidget)
{
}

void hmi_Onadresse118Click(tWidget *pWidget)
{
}


static void ConnectWidgetVariable()
{
  if (g_hmi_CurrentFrame != 8) return;
}

static void DisconnectWidgetVariable()
{
}

void hmi_SeuilDeux()
{
   var_table_init();
   hmi_FreeCurrentFrame();
   g_hmi_CurrentFrame = 8;
   hmi_InitFrameWidgets8();
}

