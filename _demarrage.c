#include "hmiworks.h"
#pragma GCC diagnostic ignored "-Wunused-variable"

static tWidget *thisCanvas = (tWidget *)&Canvasdemarrage;
static tContext globalContext;
static tContext *thisContext = &globalContext;

#pragma GCC diagnostic warning "-Wunused-variable"


static void ConnectWidgetVariable();
static void DisconnectWidgetVariable();

#include "__demarrage.h"

TimerWidget(Timer137, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0, 32, 32,
   TS_STYLE_TIMER_ENABLED, 1000, 0, hmi_OnTimer137Execute);


Canvas(Canvasdemarrage, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0,
       320, 240, (CANVAS_STYLE_APP_DRAWN | CV_AOPT_VISIBLE), 0, 0, 0, 0, 0, 0, Ondemarrage2Paint);

void renderdemarrage2Vector(tContext *pContext, int ox, int oy) {
  GrContextFontSet(pContext, g_pFontCm30b);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Bienvenue", -1, ox+90, oy+24, 0);
  hmi_DrawImage(pContext, pucImage_Picture10, ox+21, oy+59);
}
void Ondemarrage2Paint(tWidget *pWidget, tContext *pContext)
{
   hmi_SetForeground(pContext, 0x80FFFF);
   hmi_FillRect(pContext, 0, 0, 320, 240);
 demarrage2OnPaint();
   renderdemarrage2Vector(pContext, 0, 0);
}

static void hmi_InitGlobalContext()
{
  GrContextInit(thisContext, thisCanvas->pDisplay);
  GrContextClipRegionSet(thisContext, &(thisCanvas->sPosition));
}
void hmi_InitFrameWidgets1()
{
   hmi_EnableDrawings(0);
   WidgetAdd(WIDGET_ROOT, (tWidget *)(&Canvasdemarrage));
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Timer137);
   hmi_InitGlobalContext();
   ConnectWidgetVariable();
   hmi_EnableDrawings(1);
}

void hmi_FreeFrameWidgets1()
{
   DisconnectWidgetVariable();
   WidgetRemove((tWidget *)(&Canvasdemarrage));
   WidgetRemove((tWidget *)(&Timer137));
}


void hmi_OnTimer137Execute(tWidget *pWidget)
{
  Timer137OnExecute(pWidget);
}


static void ConnectWidgetVariable()
{
  if (g_hmi_CurrentFrame != 1) return;
}

static void DisconnectWidgetVariable()
{
}

void hmi_demarrage()
{
   var_table_init();
   hmi_FreeCurrentFrame();
   g_hmi_CurrentFrame = 1;
   hmi_InitFrameWidgets1();
}

