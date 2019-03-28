#include "hmiworks.h"
#pragma GCC diagnostic ignored "-Wunused-variable"

static tWidget *thisCanvas = (tWidget *)&CanvasConfigModule;
static tContext globalContext;
static tContext *thisContext = &globalContext;

#pragma GCC diagnostic warning "-Wunused-variable"


static void ConnectWidgetVariable();
static void DisconnectWidgetVariable();
static const unsigned char * ImageArr_OK13[] = 
{
pucImage_OK13, 
pucImagePress_OK13
};

#include "__configmodule.h"

RectangularButton(TaperValeur12, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 45, 103, 224, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnTaperValeur12Click, hmi_OnTaperValeur12Release, 0,
   0, -1, 0);
RectangularButton(OK13, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR,
    237, 197, 70, 32, PB_STYLE_FILL|PB_STYLE_IMG|PB_STYLE_TEXT |PB_AOPT_VISIBLE|PB_AOPT_ENABLED, ClrSilver, ClrSilver, 0, ClrSilver,
    g_pFontCm18, "", ImageArr_OK13, 0, 0,
    hmi_OnOK13Click, hmi_OnOK13Release, 0, 0, 1, 2);


Canvas(CanvasConfigModule, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0,
       320, 240, (CANVAS_STYLE_APP_DRAWN | CV_AOPT_VISIBLE), 0, 0, 0, 0, 0, 0, OnConfigModule4Paint);

void renderConfigModule4Vector(tContext *pContext, int ox, int oy) {
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Donnez l'adresse du module", -1, ox+64, oy+28, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Puis appuyez sur OK", -1, ox+87, oy+56, 0);
}
void OnConfigModule4Paint(tWidget *pWidget, tContext *pContext)
{
   hmi_SetForeground(pContext, 0xFFFFFF);
   hmi_FillRect(pContext, 0, 0, 320, 240);
   renderConfigModule4Vector(pContext, 0, 0);
}

static void hmi_InitGlobalContext()
{
  GrContextInit(thisContext, thisCanvas->pDisplay);
  GrContextClipRegionSet(thisContext, &(thisCanvas->sPosition));
}
void hmi_InitFrameWidgets2()
{
   hmi_EnableDrawings(0);
   WidgetAdd(WIDGET_ROOT, (tWidget *)(&CanvasConfigModule));
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TaperValeur12);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&OK13);
   hmi_InitGlobalContext();
   ConnectWidgetVariable();
   ConfigModule4OnShow();
   hmi_EnableDrawings(1);
}

void hmi_FreeFrameWidgets2()
{
   DisconnectWidgetVariable();
   WidgetRemove((tWidget *)(&CanvasConfigModule));
   WidgetRemove((tWidget *)(&TaperValeur12));
   WidgetRemove((tWidget *)(&OK13));
}


void hmi_OnTaperValeur12Release(tWidget *pWidget)
{
}

void hmi_OnTaperValeur12Click(tWidget *pWidget)
{
  TaperValeur12OnClick(pWidget);
}



void hmi_OnOK13Release(tWidget *pWidget)
{
}

void hmi_OnOK13Click(tWidget *pWidget) 
{
  OK13OnClick(pWidget);
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

