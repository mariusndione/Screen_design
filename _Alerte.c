#include "hmiworks.h"
#pragma GCC diagnostic ignored "-Wunused-variable"

static tWidget *thisCanvas = (tWidget *)&CanvasAlerte;
static tContext globalContext;
static tContext *thisContext = &globalContext;

#pragma GCC diagnostic warning "-Wunused-variable"


static void ConnectWidgetVariable();
static void DisconnectWidgetVariable();

#include "__alerte.h"

Canvas(Label121, WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 11, 21, 291, 167,
   CANVAS_STYLE_TEXT | CANVAS_STYLE_FILL | CANVAS_STYLE_OUTLINE
    | CANVAS_STYLE_TEXT_HCENTER | CV_AOPT_VISIBLE | CV_AOPT_ENABLED | CANVAS_STYLE_TEXT_OPAQUE
   , 0xFFFFFF, 0x000000, 0xFFFFFF,
   g_pFontCm26b, "", 0, 0);
RectangularButton(TextPushButton122, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 249, 202, 57, 29,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0x00FF00, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "OK", 0,
   200, 100,
   hmi_OnTextPushButton122Click, hmi_OnTextPushButton122Release, 0,
   0, -1, 0);


Canvas(CanvasAlerte, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0,
       320, 240, (CANVAS_STYLE_APP_DRAWN | CV_AOPT_VISIBLE), 0, 0, 0, 0, 0, 0, OnAlerte120Paint);

void renderAlerte120Vector(tContext *pContext, int ox, int oy) {
}
void OnAlerte120Paint(tWidget *pWidget, tContext *pContext)
{
   hmi_SetForeground(pContext, 0xFFFFFF);
   hmi_FillRect(pContext, 0, 0, 320, 240);
   renderAlerte120Vector(pContext, 0, 0);
}

static void hmi_InitGlobalContext()
{
  GrContextInit(thisContext, thisCanvas->pDisplay);
  GrContextClipRegionSet(thisContext, &(thisCanvas->sPosition));
}
void hmi_InitFrameWidgets10()
{
   hmi_EnableDrawings(0);
   WidgetAdd(WIDGET_ROOT, (tWidget *)(&CanvasAlerte));
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Label121);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton122);
   hmi_InitGlobalContext();
   ConnectWidgetVariable();
   Alerte120OnShow();
   hmi_EnableDrawings(1);
}

void hmi_FreeFrameWidgets10()
{
   DisconnectWidgetVariable();
   WidgetRemove((tWidget *)(&CanvasAlerte));
   WidgetRemove((tWidget *)(&Label121));
   WidgetRemove((tWidget *)(&TextPushButton122));
}


void hmi_OnTextPushButton122Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton122Click(tWidget *pWidget)
{
  TextPushButton122OnClick(pWidget);
}


static void ConnectWidgetVariable()
{
  if (g_hmi_CurrentFrame != 10) return;
}

static void DisconnectWidgetVariable()
{
}

void hmi_Alerte()
{
   var_table_init();
   hmi_FreeCurrentFrame();
   g_hmi_CurrentFrame = 10;
   hmi_InitFrameWidgets10();
}

