#include "hmiworks.h"
#pragma GCC diagnostic ignored "-Wunused-variable"

static tWidget *thisCanvas = (tWidget *)&CanvasConfigModule;
static tContext globalContext;
static tContext *thisContext = &globalContext;

#pragma GCC diagnostic warning "-Wunused-variable"


static void ConnectWidgetVariable();
static void DisconnectWidgetVariable();
static const unsigned char * ImageArr_OK37[] = 
{
pucImage_OK37, 
pucImagePress_OK37
};
const unsigned char * ObjectList142_42x27[] = {
ObjectList142_42x27_0_pucImage_Group30,
ObjectList142_42x27_0_pucImage_Group30
};

#include "__configmodule.h"

RectangularButton(OK37, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR,
    256, 207, 59, 30, PB_STYLE_FILL|PB_STYLE_IMG|PB_STYLE_TEXT |PB_AOPT_VISIBLE|PB_AOPT_ENABLED, ClrSilver, ClrSilver, 0, ClrSilver,
    g_pFontCm18, "", ImageArr_OK37, 0, 0,
    hmi_OnOK37Click, hmi_OnOK37Release, 0, 0, 1, 2);
tCheckBoxWidget QuatreVingtMA38 = CheckBoxStruct(WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 104, 42, 24, 21,
   CB_AOPT_VISIBLE | CB_AOPT_ENABLED | 
   CB_STYLE_OUTLINE | CB_STYLE_FILL | CB_STYLE_TEXT, 16,
   0xFFFFFF, 0x000000, 0x000000, 
   g_pFontCm18, "",
   0, hmi_OnQuatreVingtMA38CheckChange, 0, 0, 2);
tCheckBoxWidget ZeroDixVolt39 = CheckBoxStruct(WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 105, 70, 24, 21,
   CB_AOPT_VISIBLE | CB_AOPT_ENABLED | 
   CB_STYLE_OUTLINE | CB_STYLE_FILL | CB_STYLE_TEXT, 16,
   0xFFFFFF, 0x000000, 0x000000, 
   g_pFontCm18, "",
   0, hmi_OnZeroDixVolt39CheckChange, 0, 0, 2);
tCheckBoxWidget Impulsion40 = CheckBoxStruct(WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 105, 99, 24, 21,
   CB_AOPT_VISIBLE | CB_AOPT_ENABLED | 
   CB_STYLE_OUTLINE | CB_STYLE_FILL | CB_STYLE_TEXT, 16,
   0xFFFFFF, 0x000000, 0x000000, 
   g_pFontCm18, "",
   0, hmi_OnImpulsion40CheckChange, 0, 0, 2);
RectangularButton(Adresse41, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 150, 168, 102, 33,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnAdresse41Click, hmi_OnAdresse41Release, 0,
   0, -1, 0);
TimerWidget(Timer140, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0, 32, 32,
   TS_STYLE_TIMER_ENABLED, 1000, 0, hmi_OnTimer140Execute);
RectangularButton(Module6, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 150, 131, 102, 34,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnModule6Click, hmi_OnModule6Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton46, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 159, 34, 151, 74,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnTextPushButton46Click, hmi_OnTextPushButton46Release, 0,
   0, -1, 0);
RectangularButton(Quit129, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 273, 3, 42, 27,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", ObjectList142_42x27,
   200, 100,
   hmi_OnQuit129Click, hmi_OnQuit129Release, 0,
   0, 0, 1);


Canvas(CanvasConfigModule, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0,
       320, 240, (CANVAS_STYLE_APP_DRAWN | CV_AOPT_VISIBLE), 0, 0, 0, 0, 0, 0, OnConfigModule29Paint);

void renderConfigModule29Vector(tContext *pContext, int ox, int oy) {
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "0-10V", -1, ox+22, oy+76, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Impulsion", -1, ox+22, oy+104, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Adresse", -1, ox+27, oy+174, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Type Module", -1, ox+21, oy+141, 0);
  GrContextFontSet(pContext, g_pFontCm22b);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Configuration du module", -1, ox+9, oy+2, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "4-20mA", -1, ox+22, oy+40, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Quit", -1, ox+51, oy+-104, 0);
}
void OnConfigModule29Paint(tWidget *pWidget, tContext *pContext)
{
   hmi_SetForeground(pContext, 0xFFFFFF);
   hmi_FillRect(pContext, 0, 0, 320, 240);
 ConfigModule29OnPaint();
   renderConfigModule29Vector(pContext, 0, 0);
}

static void hmi_InitGlobalContext()
{
  GrContextInit(thisContext, thisCanvas->pDisplay);
  GrContextClipRegionSet(thisContext, &(thisCanvas->sPosition));
}
void hmi_InitFrameWidgets2()
{
   hmi_EnableDrawings(0);
   ConfigModule29OnCreate();
   WidgetAdd(WIDGET_ROOT, (tWidget *)(&CanvasConfigModule));
   WidgetAdd(WIDGET_ROOT, (tWidget *)&OK37);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&QuatreVingtMA38);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&ZeroDixVolt39);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Impulsion40);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Adresse41);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Timer140);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Module6);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton46);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Quit129);
   hmi_InitGlobalContext();
   ConnectWidgetVariable();
   ConfigModule29OnShow();
   hmi_EnableDrawings(1);
}

void hmi_FreeFrameWidgets2()
{
   DisconnectWidgetVariable();
   WidgetRemove((tWidget *)(&CanvasConfigModule));
   WidgetRemove((tWidget *)(&OK37));
   WidgetRemove((tWidget *)(&QuatreVingtMA38));
   WidgetRemove((tWidget *)(&ZeroDixVolt39));
   WidgetRemove((tWidget *)(&Impulsion40));
   WidgetRemove((tWidget *)(&Adresse41));
   WidgetRemove((tWidget *)(&Timer140));
   WidgetRemove((tWidget *)(&Module6));
   WidgetRemove((tWidget *)(&TextPushButton46));
   WidgetRemove((tWidget *)(&Quit129));
   ConfigModule29OnDestroy();
}



void hmi_OnOK37Release(tWidget *pWidget)
{
}

void hmi_OnOK37Click(tWidget *pWidget) 
{
  OK37OnClick(pWidget);
}

void hmi_OnQuatreVingtMA38CheckChange(tWidget *pWidget, unsigned long bSelected)
{
  QuatreVingtMA38OnChange(pWidget, bSelected);
}


void hmi_OnZeroDixVolt39CheckChange(tWidget *pWidget, unsigned long bSelected)
{
  ZeroDixVolt39OnChange(pWidget, bSelected);
}


void hmi_OnImpulsion40CheckChange(tWidget *pWidget, unsigned long bSelected)
{
  Impulsion40OnChange(pWidget, bSelected);
}


void hmi_OnAdresse41Release(tWidget *pWidget)
{
}

void hmi_OnAdresse41Click(tWidget *pWidget)
{
  Adresse41OnClick(pWidget);
}


void hmi_OnTimer140Execute(tWidget *pWidget)
{
  Timer140OnExecute(pWidget);
}


void hmi_OnModule6Release(tWidget *pWidget)
{
}

void hmi_OnModule6Click(tWidget *pWidget)
{
  Module6OnClick(pWidget);
}


void hmi_OnTextPushButton46Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton46Click(tWidget *pWidget)
{
}


void hmi_OnQuit129Release(tWidget *pWidget)
{
}

void hmi_OnQuit129Click(tWidget *pWidget)
{
  Quit129OnClick(pWidget);
}


static void ConnectWidgetVariable()
{
  if (g_hmi_CurrentFrame != 2) return;
}

static void DisconnectWidgetVariable()
{
}

void hmi_ConfigModule()
{
   var_table_init();
   hmi_FreeCurrentFrame();
   g_hmi_CurrentFrame = 2;
   hmi_InitFrameWidgets2();
}

