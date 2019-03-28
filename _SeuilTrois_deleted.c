#include "hmiworks.h"
#pragma GCC diagnostic ignored "-Wunused-variable"

static tWidget *thisCanvas = (tWidget *)&CanvasSeuilTrois;
static tContext globalContext;
static tContext *thisContext = &globalContext;

#pragma GCC diagnostic warning "-Wunused-variable"


static void ConnectWidgetVariable();
static void DisconnectWidgetVariable();
const unsigned char * ObjectList127_44x31[] = {
ObjectList127_44x31_0_pucImage_Group18,
ObjectList127_44x31_0_pucImage_Group18
};
const unsigned char * ObjectList126_44x31[] = {
ObjectList126_44x31_0_pucImage_Group18,
ObjectList126_44x31_0_pucImage_Group18
};

#include "__seuiltrois.h"

tCheckBoxWidget NO135 = CheckBoxStruct(WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 235, 79, 25, 23,
   CB_AOPT_VISIBLE | CB_AOPT_ENABLED | 
   CB_STYLE_OUTLINE | CB_STYLE_FILL | CB_STYLE_TEXT, 16,
   0xFFFFFF, 0x000000, 0x000000, 
   g_pFontCm18, "",
   0, hmi_OnNO135CheckChange, 0, 0, 2);
RectangularButton(hysteresis139, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 103, 48, 71, 26,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_Onhysteresis139Click, hmi_Onhysteresis139Release, 0,
   0, -1, 0);
RectangularButton(Retard141, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 102, 89, 71, 26,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnRetard141Click, hmi_OnRetard141Release, 0,
   0, -1, 0);
RectangularButton(Voie142, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 102, 131, 71, 26,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnVoie142Click, hmi_OnVoie142Release, 0,
   0, -1, 0);
RectangularButton(Next143, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 192, 196, 44, 31,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", ObjectList127_44x31,
   200, 100,
   hmi_OnNext143Click, hmi_OnNext143Release, 0,
   0, 0, 1);
RectangularButton(Prev144, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 106, 196, 44, 31,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", ObjectList126_44x31,
   200, 100,
   hmi_OnPrev144Click, hmi_OnPrev144Release, 0,
   0, 0, 1);
RectangularButton(adresse200, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 101, 166, 71, 26,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_Onadresse200Click, hmi_Onadresse200Release, 0,
   0, -1, 0);


Canvas(CanvasSeuilTrois, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0,
       320, 240, (CANVAS_STYLE_APP_DRAWN | CV_AOPT_VISIBLE), 0, 0, 0, 0, 0, 0, OnSeuilTrois125Paint);

void renderSeuilTrois125Vector(tContext *pContext, int ox, int oy) {
  GrContextFontSet(pContext, g_pFontCm22b);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Seuil3", -1, ox+116, oy+6, 0);
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
  hmi_DrawString(pContext, "adresse", -1, ox+23, oy+164, 0);
}
void OnSeuilTrois125Paint(tWidget *pWidget, tContext *pContext)
{
   hmi_SetForeground(pContext, 0xFFFFFF);
   hmi_FillRect(pContext, 0, 0, 320, 240);
   renderSeuilTrois125Vector(pContext, 0, 0);
}

static void hmi_InitGlobalContext()
{
  GrContextInit(thisContext, thisCanvas->pDisplay);
  GrContextClipRegionSet(thisContext, &(thisCanvas->sPosition));
}
void hmi_InitFrameWidgets9()
{
   hmi_EnableDrawings(0);
   WidgetAdd(WIDGET_ROOT, (tWidget *)(&CanvasSeuilTrois));
   WidgetAdd(WIDGET_ROOT, (tWidget *)&NO135);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&hysteresis139);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Retard141);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Voie142);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Next143);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Prev144);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&adresse200);
   hmi_InitGlobalContext();
   ConnectWidgetVariable();
   hmi_EnableDrawings(1);
}

void hmi_FreeFrameWidgets9()
{
   DisconnectWidgetVariable();
   WidgetRemove((tWidget *)(&CanvasSeuilTrois));
   WidgetRemove((tWidget *)(&NO135));
   WidgetRemove((tWidget *)(&hysteresis139));
   WidgetRemove((tWidget *)(&Retard141));
   WidgetRemove((tWidget *)(&Voie142));
   WidgetRemove((tWidget *)(&Next143));
   WidgetRemove((tWidget *)(&Prev144));
   WidgetRemove((tWidget *)(&adresse200));
}


void hmi_OnNO135CheckChange(tWidget *pWidget, unsigned long bSelected)
{
  NO102OnChange(pWidget, bSelected);
}


void hmi_Onhysteresis139Release(tWidget *pWidget)
{
}

void hmi_Onhysteresis139Click(tWidget *pWidget)
{
  hysteresis104OnClick(pWidget);
}


void hmi_OnRetard141Release(tWidget *pWidget)
{
}

void hmi_OnRetard141Click(tWidget *pWidget)
{
  Retard105OnClick(pWidget);
}


void hmi_OnVoie142Release(tWidget *pWidget)
{
}

void hmi_OnVoie142Click(tWidget *pWidget)
{
  Voie142OnClick(pWidget);
}


void hmi_OnNext143Release(tWidget *pWidget)
{
}

void hmi_OnNext143Click(tWidget *pWidget)
{
  Next143OnClick(pWidget);
}


void hmi_OnPrev144Release(tWidget *pWidget)
{
}

void hmi_OnPrev144Click(tWidget *pWidget)
{
}


void hmi_Onadresse200Release(tWidget *pWidget)
{
}

void hmi_Onadresse200Click(tWidget *pWidget)
{
}


static void ConnectWidgetVariable()
{
  if (g_hmi_CurrentFrame != 9) return;
}

static void DisconnectWidgetVariable()
{
}

void hmi_SeuilTrois()
{
   var_table_init();
   hmi_FreeCurrentFrame();
   g_hmi_CurrentFrame = 9;
   hmi_InitFrameWidgets9();
}

