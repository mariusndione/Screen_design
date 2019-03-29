#include "hmiworks.h"
#pragma GCC diagnostic ignored "-Wunused-variable"

static tWidget *thisCanvas = (tWidget *)&CanvasMsgErreur;
static tContext globalContext;
static tContext *thisContext = &globalContext;

#pragma GCC diagnostic warning "-Wunused-variable"


static void ConnectWidgetVariable();
static void DisconnectWidgetVariable();

#include "__msgerreur.h"

RectangularButton(TextPushButton173, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 14, 41, 292, 66,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0xFFFFFF, 0xFF0000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnTextPushButton173Click, hmi_OnTextPushButton173Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton174, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 14, 106, 292, 66,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0xFFFFFF, 0xFF0000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnTextPushButton174Click, hmi_OnTextPushButton174Release, 0,
   0, -1, 0);
TimerWidget(Timer175, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0, 32, 32,
   TS_STYLE_TIMER_ENABLED, 1000, 0, hmi_OnTimer175Execute);
RectangularButton(Quitter176, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 88, 189, 162, 32,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xC0C0C0, 0xFF0000, 0x000000, 0x008000,
   g_pFontCm22b, "Quitter", 0,
   200, 100,
   hmi_OnQuitter176Click, hmi_OnQuitter176Release, 0,
   0, -1, 0);


Canvas(CanvasMsgErreur, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0,
       320, 240, (CANVAS_STYLE_APP_DRAWN | CV_AOPT_VISIBLE), 0, 0, 0, 0, 0, 0, OnMsgErreur172Paint);

void renderMsgErreur172Vector(tContext *pContext, int ox, int oy) {
  GrContextFontSet(pContext, g_pFontCm24b);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "ERREUR", -1, ox+106, oy+4, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Erreur lors de la saisie des seuils", -1, ox+30, oy+-46, 0);
}
void OnMsgErreur172Paint(tWidget *pWidget, tContext *pContext)
{
   hmi_SetForeground(pContext, 0xFFFFFF);
   hmi_FillRect(pContext, 0, 0, 320, 240);
 MsgErreur172OnPaint();
   renderMsgErreur172Vector(pContext, 0, 0);
}

static void hmi_InitGlobalContext()
{
  GrContextInit(thisContext, thisCanvas->pDisplay);
  GrContextClipRegionSet(thisContext, &(thisCanvas->sPosition));
}
void hmi_InitFrameWidgets7()
{
   hmi_EnableDrawings(0);
   MsgErreur172OnCreate();
   WidgetAdd(WIDGET_ROOT, (tWidget *)(&CanvasMsgErreur));
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton173);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton174);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Timer175);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Quitter176);
   hmi_InitGlobalContext();
   ConnectWidgetVariable();
   MsgErreur172OnShow();
   hmi_EnableDrawings(1);
}

void hmi_FreeFrameWidgets7()
{
   DisconnectWidgetVariable();
   WidgetRemove((tWidget *)(&CanvasMsgErreur));
   WidgetRemove((tWidget *)(&TextPushButton173));
   WidgetRemove((tWidget *)(&TextPushButton174));
   WidgetRemove((tWidget *)(&Timer175));
   WidgetRemove((tWidget *)(&Quitter176));
}


void hmi_OnTextPushButton173Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton173Click(tWidget *pWidget)
{
}


void hmi_OnTextPushButton174Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton174Click(tWidget *pWidget)
{
}


void hmi_OnTimer175Execute(tWidget *pWidget)
{
  Timer175OnExecute(pWidget);
}


void hmi_OnQuitter176Release(tWidget *pWidget)
{
}

void hmi_OnQuitter176Click(tWidget *pWidget)
{
  Quitter176OnClick(pWidget);
}


static void ConnectWidgetVariable()
{
  if (g_hmi_CurrentFrame != 7) return;
}

static void DisconnectWidgetVariable()
{
}

void hmi_MsgErreur()
{
   var_table_init();
   hmi_FreeCurrentFrame();
   g_hmi_CurrentFrame = 7;
   hmi_InitFrameWidgets7();
}

