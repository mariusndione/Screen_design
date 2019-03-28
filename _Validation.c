#include "hmiworks.h"
#pragma GCC diagnostic ignored "-Wunused-variable"

static tWidget *thisCanvas = (tWidget *)&CanvasValidation;
static tContext globalContext;
static tContext *thisContext = &globalContext;

#pragma GCC diagnostic warning "-Wunused-variable"


static void ConnectWidgetVariable();
static void DisconnectWidgetVariable();

#include "__validation.h"



Canvas(CanvasValidation, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0,
       320, 240, (CANVAS_STYLE_APP_DRAWN | CV_AOPT_VISIBLE), 0, 0, 0, 0, 0, 0, OnValidation29Paint);

void renderValidation29Vector(tContext *pContext, int ox, int oy) {
}
void OnValidation29Paint(tWidget *pWidget, tContext *pContext)
{
   hmi_SetForeground(pContext, 0xFFFFFF);
   hmi_FillRect(pContext, 0, 0, 320, 240);
   renderValidation29Vector(pContext, 0, 0);
}

static void hmi_InitGlobalContext()
{
  GrContextInit(thisContext, thisCanvas->pDisplay);
  GrContextClipRegionSet(thisContext, &(thisCanvas->sPosition));
}
void hmi_InitFrameWidgets4()
{
   hmi_EnableDrawings(0);
   WidgetAdd(WIDGET_ROOT, (tWidget *)(&CanvasValidation));
   hmi_InitGlobalContext();
   ConnectWidgetVariable();
   hmi_EnableDrawings(1);
}

void hmi_FreeFrameWidgets4()
{
   DisconnectWidgetVariable();
   WidgetRemove((tWidget *)(&CanvasValidation));
}


static void ConnectWidgetVariable()
{
  if (g_hmi_CurrentFrame != 4) return;
}

static void DisconnectWidgetVariable()
{
}

void hmi_Validation()
{
   var_table_init();
   hmi_FreeCurrentFrame();
   g_hmi_CurrentFrame = 4;
   hmi_InitFrameWidgets4();
}

