#include "hmiworks.h"
#pragma GCC diagnostic ignored "-Wunused-variable"

static tWidget *thisCanvas = (tWidget *)&CanvasTestClavier;
static tContext globalContext;
static tContext *thisContext = &globalContext;

#pragma GCC diagnostic warning "-Wunused-variable"


static void ConnectWidgetVariable();
static void DisconnectWidgetVariable();

#include "__testclavier.h"

RectangularButton(TextPushButton62, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 94, 77, 178, 55,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnTextPushButton62Click, hmi_OnTextPushButton62Release, 0,
   0, -1, 0);


Canvas(CanvasTestClavier, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0,
       320, 240, (CANVAS_STYLE_APP_DRAWN | CV_AOPT_VISIBLE), 0, 0, 0, 0, 0, 0, OnTestClavier61Paint);

void renderTestClavier61Vector(tContext *pContext, int ox, int oy) {
}
void OnTestClavier61Paint(tWidget *pWidget, tContext *pContext)
{
   hmi_SetForeground(pContext, 0xFFFFFF);
   hmi_FillRect(pContext, 0, 0, 320, 240);
   renderTestClavier61Vector(pContext, 0, 0);
}

static void hmi_InitGlobalContext()
{
  GrContextInit(thisContext, thisCanvas->pDisplay);
  GrContextClipRegionSet(thisContext, &(thisCanvas->sPosition));
}
void hmi_InitFrameWidgets11()
{
   hmi_EnableDrawings(0);
   WidgetAdd(WIDGET_ROOT, (tWidget *)(&CanvasTestClavier));
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton62);
   hmi_InitGlobalContext();
   ConnectWidgetVariable();
   TestClavier61OnShow();
   hmi_EnableDrawings(1);
}

void hmi_FreeFrameWidgets11()
{
   DisconnectWidgetVariable();
   WidgetRemove((tWidget *)(&CanvasTestClavier));
   WidgetRemove((tWidget *)(&TextPushButton62));
}


void hmi_OnTextPushButton62Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton62Click(tWidget *pWidget)
{
  TextPushButton62OnClick(pWidget);
}


static void ConnectWidgetVariable()
{
  if (g_hmi_CurrentFrame != 11) return;
}

static void DisconnectWidgetVariable()
{
}

void hmi_TestClavier()
{
   var_table_init();
   hmi_FreeCurrentFrame();
   g_hmi_CurrentFrame = 11;
   hmi_InitFrameWidgets11();
}

