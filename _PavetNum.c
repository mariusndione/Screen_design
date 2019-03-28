#include "hmiworks.h"
#pragma GCC diagnostic ignored "-Wunused-variable"

static tWidget *thisCanvas = (tWidget *)&CanvasPavetNum;
static tContext globalContext;
static tContext *thisContext = &globalContext;

#pragma GCC diagnostic warning "-Wunused-variable"


static void ConnectWidgetVariable();
static void DisconnectWidgetVariable();

#include "__pavetnum.h"

Canvas(Label15, WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 60, 6, 206, 40,
   CANVAS_STYLE_TEXT | CANVAS_STYLE_FILL | CANVAS_STYLE_OUTLINE
    | CANVAS_STYLE_TEXT_HCENTER | CV_AOPT_VISIBLE | CV_AOPT_ENABLED | CANVAS_STYLE_TEXT_OPAQUE
   , 0xFFFFFF, 0x000000, 0x000000,
   g_pFontCm18, "", 0, 0);
RectangularButton(Sept16, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 13, 68, 42, 29,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "7", 0,
   200, 100,
   hmi_OnSept16Click, hmi_OnSept16Release, 0,
   0, -1, 0);
RectangularButton(Huit17, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 65, 68, 42, 29,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "8", 0,
   200, 100,
   hmi_OnHuit17Click, hmi_OnHuit17Release, 0,
   0, -1, 0);
RectangularButton(Neuf18, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 117, 67, 42, 29,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "9", 0,
   200, 100,
   hmi_OnNeuf18Click, hmi_OnNeuf18Release, 0,
   0, -1, 0);
RectangularButton(Quatre19, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 14, 103, 42, 29,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "4", 0,
   200, 100,
   hmi_OnQuatre19Click, hmi_OnQuatre19Release, 0,
   0, -1, 0);
RectangularButton(Cinq20, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 67, 102, 42, 29,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "5", 0,
   200, 100,
   hmi_OnCinq20Click, hmi_OnCinq20Release, 0,
   0, -1, 0);
RectangularButton(Six21, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 118, 102, 42, 29,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "6", 0,
   200, 100,
   hmi_OnSix21Click, hmi_OnSix21Release, 0,
   0, -1, 0);
RectangularButton(Un22, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 15, 140, 42, 29,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "1", 0,
   200, 100,
   hmi_OnUn22Click, hmi_OnUn22Release, 0,
   0, -1, 0);
RectangularButton(Deux23, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 67, 139, 42, 29,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "2", 0,
   200, 100,
   hmi_OnDeux23Click, hmi_OnDeux23Release, 0,
   0, -1, 0);
RectangularButton(Trois24, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 119, 138, 42, 29,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "3", 0,
   200, 100,
   hmi_OnTrois24Click, hmi_OnTrois24Release, 0,
   0, -1, 0);
RectangularButton(Zero25, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 16, 176, 93, 29,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "0", 0,
   200, 100,
   hmi_OnZero25Click, hmi_OnZero25Release, 0,
   0, -1, 0);
RectangularButton(Point27, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 118, 174, 42, 29,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm20b, ".", 0,
   200, 100,
   hmi_OnPoint27Click, hmi_OnPoint27Release, 0,
   0, -1, 0);
RectangularButton(Entrer26, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 172, 138, 38, 61,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000,
   g_pFontCm18, "OK", 0,
   200, 100,
   hmi_OnEntrer26Click, hmi_OnEntrer26Release, 0,
   0, -1, 0);
RectangularButton(Supprime28, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 167, 69, 87, 59,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "Suppr", 0,
   200, 100,
   hmi_OnSupprime28Click, hmi_OnSupprime28Release, 0,
   0, -1, 0);
TimerWidget(Timer132, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0, 32, 32,
   TS_STYLE_TIMER_ENABLED, 1000, 0, hmi_OnTimer132Execute);


Canvas(CanvasPavetNum, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0,
       320, 240, (CANVAS_STYLE_APP_DRAWN | CV_AOPT_VISIBLE), 0, 0, 0, 0, 0, 0, OnPavetNum14Paint);

void renderPavetNum14Vector(tContext *pContext, int ox, int oy) {
}
void OnPavetNum14Paint(tWidget *pWidget, tContext *pContext)
{
   hmi_SetForeground(pContext, 0xC0C0C0);
   hmi_FillRect(pContext, 0, 0, 320, 240);
   renderPavetNum14Vector(pContext, 0, 0);
}

static void hmi_InitGlobalContext()
{
  GrContextInit(thisContext, thisCanvas->pDisplay);
  GrContextClipRegionSet(thisContext, &(thisCanvas->sPosition));
}
void hmi_InitFrameWidgets2()
{
   hmi_EnableDrawings(0);
   PavetNum14OnCreate();
   WidgetAdd(WIDGET_ROOT, (tWidget *)(&CanvasPavetNum));
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Label15);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Sept16);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Huit17);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Neuf18);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Quatre19);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Cinq20);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Six21);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Un22);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Deux23);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Trois24);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Zero25);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Point27);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Entrer26);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Supprime28);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Timer132);
   hmi_InitGlobalContext();
   ConnectWidgetVariable();
   PavetNum14OnShow();
   hmi_EnableDrawings(1);
}

void hmi_FreeFrameWidgets2()
{
   DisconnectWidgetVariable();
   WidgetRemove((tWidget *)(&CanvasPavetNum));
   WidgetRemove((tWidget *)(&Label15));
   WidgetRemove((tWidget *)(&Sept16));
   WidgetRemove((tWidget *)(&Huit17));
   WidgetRemove((tWidget *)(&Neuf18));
   WidgetRemove((tWidget *)(&Quatre19));
   WidgetRemove((tWidget *)(&Cinq20));
   WidgetRemove((tWidget *)(&Six21));
   WidgetRemove((tWidget *)(&Un22));
   WidgetRemove((tWidget *)(&Deux23));
   WidgetRemove((tWidget *)(&Trois24));
   WidgetRemove((tWidget *)(&Zero25));
   WidgetRemove((tWidget *)(&Point27));
   WidgetRemove((tWidget *)(&Entrer26));
   WidgetRemove((tWidget *)(&Supprime28));
   WidgetRemove((tWidget *)(&Timer132));
   PavetNum14OnDestroy();
}


void hmi_OnSept16Release(tWidget *pWidget)
{
}

void hmi_OnSept16Click(tWidget *pWidget)
{
  Sept16OnClick(pWidget);
}


void hmi_OnHuit17Release(tWidget *pWidget)
{
}

void hmi_OnHuit17Click(tWidget *pWidget)
{
  Huit17OnClick(pWidget);
}


void hmi_OnNeuf18Release(tWidget *pWidget)
{
}

void hmi_OnNeuf18Click(tWidget *pWidget)
{
  Neuf18OnClick(pWidget);
}


void hmi_OnQuatre19Release(tWidget *pWidget)
{
}

void hmi_OnQuatre19Click(tWidget *pWidget)
{
  Quatre19OnClick(pWidget);
}


void hmi_OnCinq20Release(tWidget *pWidget)
{
}

void hmi_OnCinq20Click(tWidget *pWidget)
{
  Cinq20OnClick(pWidget);
}


void hmi_OnSix21Release(tWidget *pWidget)
{
}

void hmi_OnSix21Click(tWidget *pWidget)
{
  Six21OnClick(pWidget);
}


void hmi_OnUn22Release(tWidget *pWidget)
{
}

void hmi_OnUn22Click(tWidget *pWidget)
{
  Un22OnClick(pWidget);
}


void hmi_OnDeux23Release(tWidget *pWidget)
{
}

void hmi_OnDeux23Click(tWidget *pWidget)
{
  Deux23OnClick(pWidget);
}


void hmi_OnTrois24Release(tWidget *pWidget)
{
}

void hmi_OnTrois24Click(tWidget *pWidget)
{
  Trois24OnClick(pWidget);
}


void hmi_OnZero25Release(tWidget *pWidget)
{
}

void hmi_OnZero25Click(tWidget *pWidget)
{
  Zero25OnClick(pWidget);
}


void hmi_OnPoint27Release(tWidget *pWidget)
{
}

void hmi_OnPoint27Click(tWidget *pWidget)
{
  Point27OnClick(pWidget);
}


void hmi_OnEntrer26Release(tWidget *pWidget)
{
}

void hmi_OnEntrer26Click(tWidget *pWidget)
{
  Entrer26OnClick(pWidget);
}


void hmi_OnSupprime28Release(tWidget *pWidget)
{
}

void hmi_OnSupprime28Click(tWidget *pWidget)
{
  Supprime28OnClick(pWidget);
}


void hmi_OnTimer132Execute(tWidget *pWidget)
{
  Timer132OnExecute(pWidget);
}


static void ConnectWidgetVariable()
{
  if (g_hmi_CurrentFrame != 2) return;
}

static void DisconnectWidgetVariable()
{
}

void hmi_PavetNum()
{
   var_table_init();
   hmi_FreeCurrentFrame();
   g_hmi_CurrentFrame = 2;
   hmi_InitFrameWidgets2();
}

