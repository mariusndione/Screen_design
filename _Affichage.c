#include "hmiworks.h"
#pragma GCC diagnostic ignored "-Wunused-variable"

static tWidget *thisCanvas = (tWidget *)&CanvasAffichage;
static tContext globalContext;
static tContext *thisContext = &globalContext;

#pragma GCC diagnostic warning "-Wunused-variable"


static void ConnectWidgetVariable();
static void DisconnectWidgetVariable();
static const unsigned char * ImageArr_ConfigM113[] = 
{
pucImage_ConfigM113, 
pucImagePress_ConfigM113
};
static const unsigned char * ImageArr_ConfigE115[] = 
{
pucImage_ConfigE115, 
pucImagePress_ConfigE115
};
static const unsigned char * ImageArr_ConfigS116[] = 
{
pucImage_ConfigS116, 
pucImagePress_ConfigS116
};
static const unsigned char * ImageArr_ConfigC117[] = 
{
pucImage_ConfigC117, 
pucImagePress_ConfigC117
};

#include "__affichage.h"

RectangularButton(ConfigM113, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR,
    240, 0, 81, 62, PB_STYLE_FILL|PB_STYLE_IMG|PB_STYLE_TEXT |PB_AOPT_VISIBLE|PB_AOPT_ENABLED, ClrSilver, ClrSilver, 0, ClrSilver,
    g_pFontCm18i, "", ImageArr_ConfigM113, 0, 0,
    hmi_OnConfigM113Click, hmi_OnConfigM113Release, 0, 0, 1, 2);
RectangularButton(ConfigE115, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR,
    240, 178, 80, 62, PB_STYLE_FILL|PB_STYLE_IMG|PB_STYLE_TEXT |PB_AOPT_VISIBLE|PB_AOPT_ENABLED, ClrSilver, ClrSilver, 0, ClrSilver,
    g_pFontCm18i, "", ImageArr_ConfigE115, 0, 0,
    hmi_OnConfigE115Click, hmi_OnConfigE115Release, 0, 0, 1, 2);
RectangularButton(ConfigS116, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR,
    240, 118, 81, 62, PB_STYLE_FILL|PB_STYLE_IMG|PB_STYLE_TEXT |PB_AOPT_VISIBLE|PB_AOPT_ENABLED, ClrSilver, ClrSilver, 0, ClrSilver,
    g_pFontCm18i, "", ImageArr_ConfigS116, 0, 0,
    hmi_OnConfigS116Click, hmi_OnConfigS116Release, 0, 0, 1, 2);
RectangularButton(ConfigC117, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR,
    240, 62, 81, 62, PB_STYLE_FILL|PB_STYLE_IMG|PB_STYLE_TEXT |PB_AOPT_VISIBLE|PB_AOPT_ENABLED, ClrSilver, ClrSilver, 0, ClrSilver,
    g_pFontCm18i, "", ImageArr_ConfigC117, 0, 0,
    hmi_OnConfigC117Click, hmi_OnConfigC117Release, 0, 0, 1, 2);
TimerWidget(Timer179, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0, 32, 32,
   TS_STYLE_TIMER_ENABLED, 1000, 0, hmi_OnTimer179Execute);
RectangularButton(Mesure118, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 0, -2, 241, 185,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000,
   g_pFontCm42b, "", 0,
   200, 100,
   hmi_OnMesure118Click, hmi_OnMesure118Release, 0,
   0, -1, 0);
RectangularButton(UniM119, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 0, 180, 241, 61,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFFFFFF, 0xFFFFFF, 0x000000,
   g_pFontCm38b, "", 0,
   200, 100,
   hmi_OnUniM119Click, hmi_OnUniM119Release, 0,
   0, -1, 0);


Canvas(CanvasAffichage, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0,
       320, 240, (CANVAS_STYLE_APP_DRAWN | CV_AOPT_VISIBLE), 0, 0, 0, 0, 0, 0, OnAffichage112Paint);

void renderAffichage112Vector(tContext *pContext, int ox, int oy) {
}
void OnAffichage112Paint(tWidget *pWidget, tContext *pContext)
{
   hmi_SetForeground(pContext, 0xFFFFFF);
   hmi_FillRect(pContext, 0, 0, 320, 240);
   renderAffichage112Vector(pContext, 0, 0);
}

static void hmi_InitGlobalContext()
{
  GrContextInit(thisContext, thisCanvas->pDisplay);
  GrContextClipRegionSet(thisContext, &(thisCanvas->sPosition));
}
void hmi_InitFrameWidgets9()
{
   hmi_EnableDrawings(0);
   Affichage112OnCreate();
   WidgetAdd(WIDGET_ROOT, (tWidget *)(&CanvasAffichage));
   WidgetAdd(WIDGET_ROOT, (tWidget *)&ConfigM113);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&ConfigE115);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&ConfigS116);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&ConfigC117);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Timer179);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Mesure118);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&UniM119);
   hmi_InitGlobalContext();
   ConnectWidgetVariable();
   Affichage112OnShow();
   hmi_EnableDrawings(1);
}

void hmi_FreeFrameWidgets9()
{
   DisconnectWidgetVariable();
   WidgetRemove((tWidget *)(&CanvasAffichage));
   WidgetRemove((tWidget *)(&ConfigM113));
   WidgetRemove((tWidget *)(&ConfigE115));
   WidgetRemove((tWidget *)(&ConfigS116));
   WidgetRemove((tWidget *)(&ConfigC117));
   WidgetRemove((tWidget *)(&Timer179));
   WidgetRemove((tWidget *)(&Mesure118));
   WidgetRemove((tWidget *)(&UniM119));
}



void hmi_OnConfigM113Release(tWidget *pWidget)
{
}

void hmi_OnConfigM113Click(tWidget *pWidget) 
{
  ConfigM113OnClick(pWidget);
}


void hmi_OnConfigE115Release(tWidget *pWidget)
{
}

void hmi_OnConfigE115Click(tWidget *pWidget) 
{
  ConfigE115OnClick(pWidget);
}


void hmi_OnConfigS116Release(tWidget *pWidget)
{
}

void hmi_OnConfigS116Click(tWidget *pWidget) 
{
  ConfigS116OnClick(pWidget);
}


void hmi_OnConfigC117Release(tWidget *pWidget)
{
}

void hmi_OnConfigC117Click(tWidget *pWidget) 
{
  ConfigC117OnClick(pWidget);
}

void hmi_OnTimer179Execute(tWidget *pWidget)
{
  Timer179OnExecute(pWidget);
}


void hmi_OnMesure118Release(tWidget *pWidget)
{
}

void hmi_OnMesure118Click(tWidget *pWidget)
{
}


void hmi_OnUniM119Release(tWidget *pWidget)
{
}

void hmi_OnUniM119Click(tWidget *pWidget)
{
}


static void ConnectWidgetVariable()
{
  if (g_hmi_CurrentFrame != 9) return;
}

static void DisconnectWidgetVariable()
{
}

void hmi_Affichage()
{
   var_table_init();
   hmi_FreeCurrentFrame();
   g_hmi_CurrentFrame = 9;
   hmi_InitFrameWidgets9();
}

