#include "hmiworks.h"
#pragma GCC diagnostic ignored "-Wunused-variable"

static tWidget *thisCanvas = (tWidget *)&CanvasAlerte;
static tContext globalContext;
static tContext *thisContext = &globalContext;

#pragma GCC diagnostic warning "-Wunused-variable"


static void ConnectWidgetVariable();
static void DisconnectWidgetVariable();

#include "__alerte.h"

TimerWidget(Timer154, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0, 32, 32,
   TS_STYLE_TIMER_ENABLED, 1000, 0, hmi_OnTimer154Execute);
RectangularButton(TextPushButton121, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 5, 8, 308, 54,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0x000000, 0xFFFFFF, 0x000000, 0xFF0000,
   g_pFontCm20b, "", 0,
   200, 100,
   hmi_OnTextPushButton121Click, hmi_OnTextPushButton121Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton149, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 5, 173, 308, 54,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0x000000, 0xFFFFFF, 0x000000, 0xFF0000,
   g_pFontCm20b, "", 0,
   200, 100,
   hmi_OnTextPushButton149Click, hmi_OnTextPushButton149Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton150, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 5, 118, 308, 54,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0x000000, 0xFFFFFF, 0x000000, 0xFF0000,
   g_pFontCm20b, "", 0,
   200, 100,
   hmi_OnTextPushButton150Click, hmi_OnTextPushButton150Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton152, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 5, 63, 308, 54,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0x000000, 0xFFFFFF, 0x000000, 0xFF0000,
   g_pFontCm20b, "", 0,
   200, 100,
   hmi_OnTextPushButton152Click, hmi_OnTextPushButton152Release, 0,
   0, -1, 0);


Canvas(CanvasAlerte, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0,
       320, 240, (CANVAS_STYLE_APP_DRAWN | CV_AOPT_VISIBLE), 0, 0, 0, 0, 0, 0, OnAlerte120Paint);

void renderAlerte120Vector(tContext *pContext, int ox, int oy) {
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Message de configuration à l'utilisateur avant l'étalonnage", -1, ox+-46, oy+-46, 0);
}
void OnAlerte120Paint(tWidget *pWidget, tContext *pContext)
{
   hmi_SetForeground(pContext, 0x000000);
   hmi_FillRect(pContext, 0, 0, 320, 240);
 Alerte120OnPaint();
   renderAlerte120Vector(pContext, 0, 0);
}

static void hmi_InitGlobalContext()
{
  GrContextInit(thisContext, thisCanvas->pDisplay);
  GrContextClipRegionSet(thisContext, &(thisCanvas->sPosition));
}
void hmi_InitFrameWidgets4()
{
   hmi_EnableDrawings(0);
   Alerte120OnCreate();
   WidgetAdd(WIDGET_ROOT, (tWidget *)(&CanvasAlerte));
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Timer154);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton121);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton149);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton150);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton152);
   hmi_InitGlobalContext();
   ConnectWidgetVariable();
   Alerte120OnShow();
   hmi_EnableDrawings(1);
}

void hmi_FreeFrameWidgets4()
{
   DisconnectWidgetVariable();
   WidgetRemove((tWidget *)(&CanvasAlerte));
   WidgetRemove((tWidget *)(&Timer154));
   WidgetRemove((tWidget *)(&TextPushButton121));
   WidgetRemove((tWidget *)(&TextPushButton149));
   WidgetRemove((tWidget *)(&TextPushButton150));
   WidgetRemove((tWidget *)(&TextPushButton152));
}


void hmi_OnTimer154Execute(tWidget *pWidget)
{
  Timer154OnExecute(pWidget);
}


void hmi_OnTextPushButton121Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton121Click(tWidget *pWidget)
{
}


void hmi_OnTextPushButton149Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton149Click(tWidget *pWidget)
{
}


void hmi_OnTextPushButton150Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton150Click(tWidget *pWidget)
{
}


void hmi_OnTextPushButton152Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton152Click(tWidget *pWidget)
{
}


static void ConnectWidgetVariable()
{
  if (g_hmi_CurrentFrame != 4) return;
}

static void DisconnectWidgetVariable()
{
}

void hmi_Alerte()
{
   var_table_init();
   hmi_FreeCurrentFrame();
   g_hmi_CurrentFrame = 4;
   hmi_InitFrameWidgets4();
}

