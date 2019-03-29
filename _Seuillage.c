#include "hmiworks.h"
#pragma GCC diagnostic ignored "-Wunused-variable"

static tWidget *thisCanvas = (tWidget *)&CanvasSeuillage;
static tContext globalContext;
static tContext *thisContext = &globalContext;

#pragma GCC diagnostic warning "-Wunused-variable"


static void ConnectWidgetVariable();
static void DisconnectWidgetVariable();
const unsigned char * ObjectList72_50x30[] = {
ObjectList72_50x30_0_pucImage_Group29,
ObjectList72_50x30_0_pucImage_Group29
};
const unsigned char * ObjectList123_42x27[] = {
ObjectList123_42x27_0_pucImage_Group30,
ObjectList123_42x27_0_pucImage_Group30
};

#include "__seuillage.h"

RectangularButton(erreur122, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, -250, 125, 102, 38,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_Onerreur122Click, hmi_Onerreur122Release, 0,
   0, -1, 0);
RectangularButton(TextPushButton71, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 0, 0, 50, 30,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", ObjectList72_50x30,
   200, 100,
   hmi_OnTextPushButton71Click, hmi_OnTextPushButton71Release, 0,
   0, 0, 1);
TimerWidget(Timer52, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0, 32, 32,
   TS_STYLE_TIMER_ENABLED, 1000, 0, hmi_OnTimer52Execute);
RectangularButton(TextPushButton50, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 131, 27, 43, 24,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0x80FF80, 0x80FF80, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnTextPushButton50Click, hmi_OnTextPushButton50Release, 0,
   0, -1, 0);
tCheckBoxWidget logique58 = CheckBoxStruct(WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 270, 32, 24, 20,
   CB_AOPT_VISIBLE | CB_AOPT_ENABLED | 
   CB_STYLE_OUTLINE | CB_STYLE_FILL | CB_STYLE_TEXT, 16,
   0xFFFFFF, 0x000000, 0x008000, 
   g_pFontCm18, "",
   0, hmi_Onlogique58CheckChange, 0, 0, 2);
RectangularButton(S1Couleur77, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 228, 60, 49, 28,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnS1Couleur77Click, hmi_OnS1Couleur77Release, 0,
   0, -1, 0);
tCheckBoxWidget S1_Y_N78 = CheckBoxStruct(WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 16, 66, 23, 21,
   CB_AOPT_VISIBLE | CB_AOPT_ENABLED | 
   CB_STYLE_OUTLINE | CB_STYLE_FILL | CB_STYLE_TEXT, 16,
   0xFFFFFF, 0x000000, 0x008000, 
   g_pFontCm18, "",
   0, hmi_OnS1_Y_N78CheckChange, 0, 0, 2);
RectangularButton(S2Valeur79, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 87, 96, 44, 28,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnS2Valeur79Click, hmi_OnS2Valeur79Release, 0,
   0, -1, 0);
RectangularButton(S2Couleur82, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 228, 96, 49, 28,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnS2Couleur82Click, hmi_OnS2Couleur82Release, 0,
   0, -1, 0);
tCheckBoxWidget S2_Y_N83 = CheckBoxStruct(WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 16, 100, 23, 21,
   CB_AOPT_VISIBLE | CB_AOPT_ENABLED | 
   CB_STYLE_OUTLINE | CB_STYLE_FILL | CB_STYLE_TEXT, 16,
   0xFFFFFF, 0x000000, 0x008000, 
   g_pFontCm18, "",
   0, hmi_OnS2_Y_N83CheckChange, 0, 0, 2);
RectangularButton(S3Valeur84, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 88, 134, 44, 28,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnS3Valeur84Click, hmi_OnS3Valeur84Release, 0,
   0, -1, 0);
RectangularButton(S3Couleur87, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 229, 134, 49, 28,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnS3Couleur87Click, hmi_OnS3Couleur87Release, 0,
   0, -1, 0);
tCheckBoxWidget S3_Y_N88 = CheckBoxStruct(WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 17, 138, 23, 21,
   CB_AOPT_VISIBLE | CB_AOPT_ENABLED | 
   CB_STYLE_OUTLINE | CB_STYLE_FILL | CB_STYLE_TEXT, 16,
   0xFFFFFF, 0x000000, 0x008000, 
   g_pFontCm18, "",
   0, hmi_OnS3_Y_N88CheckChange, 0, 0, 2);
RectangularButton(S4Valeur89, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 88, 170, 44, 28,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnS4Valeur89Click, hmi_OnS4Valeur89Release, 0,
   0, -1, 0);
RectangularButton(S4Couleur92, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 229, 170, 49, 28,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFFFFFF, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnS4Couleur92Click, hmi_OnS4Couleur92Release, 0,
   0, -1, 0);
tCheckBoxWidget S4_Y_N93 = CheckBoxStruct(WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 18, 174, 23, 21,
   CB_AOPT_VISIBLE | CB_AOPT_ENABLED | 
   CB_STYLE_OUTLINE | CB_STYLE_FILL | CB_STYLE_TEXT, 16,
   0xFFFFFF, 0x000000, 0x008000, 
   g_pFontCm18, "",
   0, hmi_OnS4_Y_N93CheckChange, 0, 0, 2);
RectangularButton(paramAvances94, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 74, 207, 189, 25,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xC0C0C0, 0xFF0000, 0x000000, 0x800000,
   g_pFontCm18b, "Parametres Avances", 0,
   200, 100,
   hmi_OnparamAvances94Click, hmi_OnparamAvances94Release, 0,
   0, -1, 0);
Canvas(Couleur176, WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 146, 63, 70, 21,
   CANVAS_STYLE_TEXT | CANVAS_STYLE_FILL | CANVAS_STYLE_OUTLINE
    | CANVAS_STYLE_TEXT_HCENTER | CV_AOPT_VISIBLE | CV_AOPT_ENABLED | CANVAS_STYLE_TEXT_OPAQUE
   , 0xFFFFFF, 0xFFFFFF, 0x000000,
   g_pFontCm18, "Couleur", 0, 0);
Canvas(Couleur481, WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 146, 172, 70, 21,
   CANVAS_STYLE_TEXT | CANVAS_STYLE_FILL | CANVAS_STYLE_OUTLINE
    | CANVAS_STYLE_TEXT_HCENTER | CV_AOPT_VISIBLE | CV_AOPT_ENABLED | CANVAS_STYLE_TEXT_OPAQUE
   , 0xFFFFFF, 0xFFFFFF, 0x000000,
   g_pFontCm18, "Couleur", 0, 0);
Canvas(Couleur386, WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 147, 137, 70, 21,
   CANVAS_STYLE_TEXT | CANVAS_STYLE_FILL | CANVAS_STYLE_OUTLINE
    | CANVAS_STYLE_TEXT_HCENTER | CV_AOPT_VISIBLE | CV_AOPT_ENABLED | CANVAS_STYLE_TEXT_OPAQUE
   , 0xFFFFFF, 0xFFFFFF, 0x000000,
   g_pFontCm18, "Couleur", 0, 0);
Canvas(Couleur291, WIDGET_ROOT, 0, 0,
   HMI_DISPLAY_DRIVER_PTR, 145, 101, 70, 21,
   CANVAS_STYLE_TEXT | CANVAS_STYLE_FILL | CANVAS_STYLE_OUTLINE
    | CANVAS_STYLE_TEXT_HCENTER | CV_AOPT_VISIBLE | CV_AOPT_ENABLED | CANVAS_STYLE_TEXT_OPAQUE
   , 0xFFFFFF, 0xFFFFFF, 0x000000,
   g_pFontCm18, "Couleur", 0, 0);
RectangularButton(S1Valeur74, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 87, 62, 45, 29,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", 0,
   200, 100,
   hmi_OnS1Valeur74Click, hmi_OnS1Valeur74Release, 0,
   0, -1, 0);
RectangularButton(Quit125, WIDGET_ROOT, 0,
   0, HMI_DISPLAY_DRIVER_PTR, 275, 2, 42, 27,
   (PB_STYLE_OUTLINE | PB_STYLE_TEXT_OPAQUE | PB_STYLE_TEXT | PB_AOPT_VISIBLE | PB_AOPT_ENABLED | PB_STYLE_IMG | PB_STYLE_AUTO_REPEAT | 
   PB_STYLE_FILL), 0xFFFFFF, 0xFF0000, 0x000000, 0x000000,
   g_pFontCm18, "", ObjectList123_42x27,
   200, 100,
   hmi_OnQuit125Click, hmi_OnQuit125Release, 0,
   0, 0, 1);


Canvas(CanvasSeuillage, WIDGET_ROOT, 0, 0, HMI_DISPLAY_DRIVER_PTR, 0, 0,
       320, 240, (CANVAS_STYLE_APP_DRAWN | CV_AOPT_VISIBLE), 0, 0, 0, 0, 0, 0, OnSeuillage45Paint);

void renderSeuillage45Vector(tContext *pContext, int ox, int oy) {
  GrContextFontSet(pContext, g_pFontCm22b);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Seuillage", -1, ox+114, oy+0, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "left", -1, ox+163, oy+-117, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "right", -1, ox+289, oy+-114, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Précédent", -1, ox+371, oy+-115, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Couleur ok", -1, ox+40, oy+30, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Logique", -1, ox+201, oy+32, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "S1", -1, ox+52, oy+67, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "S2", -1, ox+52, oy+103, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "S3", -1, ox+53, oy+141, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "S4", -1, ox+53, oy+177, 0);
  GrContextFontSet(pContext, g_pFontCm18);
  hmi_SetForeground(pContext, 0x00000000);
  hmi_DrawString(pContext, "Quit", -1, ox+51, oy+-104, 0);
}
void OnSeuillage45Paint(tWidget *pWidget, tContext *pContext)
{
   hmi_SetForeground(pContext, 0xFFFFFF);
   hmi_FillRect(pContext, 0, 0, 320, 240);
   renderSeuillage45Vector(pContext, 0, 0);
}

static void hmi_InitGlobalContext()
{
  GrContextInit(thisContext, thisCanvas->pDisplay);
  GrContextClipRegionSet(thisContext, &(thisCanvas->sPosition));
}
void hmi_InitFrameWidgets6()
{
   hmi_EnableDrawings(0);
   Seuillage45OnCreate();
   WidgetAdd(WIDGET_ROOT, (tWidget *)(&CanvasSeuillage));
   WidgetAdd(WIDGET_ROOT, (tWidget *)&erreur122);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton71);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Timer52);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&TextPushButton50);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&logique58);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&S1Couleur77);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&S1_Y_N78);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&S2Valeur79);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&S2Couleur82);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&S2_Y_N83);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&S3Valeur84);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&S3Couleur87);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&S3_Y_N88);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&S4Valeur89);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&S4Couleur92);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&S4_Y_N93);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&paramAvances94);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Couleur176);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Couleur481);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Couleur386);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Couleur291);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&S1Valeur74);
   WidgetAdd(WIDGET_ROOT, (tWidget *)&Quit125);
   hmi_InitGlobalContext();
   ConnectWidgetVariable();
   Seuillage45OnShow();
   hmi_EnableDrawings(1);
}

void hmi_FreeFrameWidgets6()
{
   DisconnectWidgetVariable();
   WidgetRemove((tWidget *)(&CanvasSeuillage));
   WidgetRemove((tWidget *)(&erreur122));
   WidgetRemove((tWidget *)(&TextPushButton71));
   WidgetRemove((tWidget *)(&Timer52));
   WidgetRemove((tWidget *)(&TextPushButton50));
   WidgetRemove((tWidget *)(&logique58));
   WidgetRemove((tWidget *)(&S1Couleur77));
   WidgetRemove((tWidget *)(&S1_Y_N78));
   WidgetRemove((tWidget *)(&S2Valeur79));
   WidgetRemove((tWidget *)(&S2Couleur82));
   WidgetRemove((tWidget *)(&S2_Y_N83));
   WidgetRemove((tWidget *)(&S3Valeur84));
   WidgetRemove((tWidget *)(&S3Couleur87));
   WidgetRemove((tWidget *)(&S3_Y_N88));
   WidgetRemove((tWidget *)(&S4Valeur89));
   WidgetRemove((tWidget *)(&S4Couleur92));
   WidgetRemove((tWidget *)(&S4_Y_N93));
   WidgetRemove((tWidget *)(&paramAvances94));
   WidgetRemove((tWidget *)(&Couleur176));
   WidgetRemove((tWidget *)(&Couleur481));
   WidgetRemove((tWidget *)(&Couleur386));
   WidgetRemove((tWidget *)(&Couleur291));
   WidgetRemove((tWidget *)(&S1Valeur74));
   WidgetRemove((tWidget *)(&Quit125));
   Seuillage45OnDestroy();
}


void hmi_Onerreur122Release(tWidget *pWidget)
{
}

void hmi_Onerreur122Click(tWidget *pWidget)
{
  erreur122OnClick(pWidget);
}


void hmi_OnTextPushButton71Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton71Click(tWidget *pWidget)
{
  TextPushButton71OnClick(pWidget);
}


void hmi_OnTimer52Execute(tWidget *pWidget)
{
  Timer52OnExecute(pWidget);
}


void hmi_OnTextPushButton50Release(tWidget *pWidget)
{
}

void hmi_OnTextPushButton50Click(tWidget *pWidget)
{
}


void hmi_Onlogique58CheckChange(tWidget *pWidget, unsigned long bSelected)
{
  logique58OnChange(pWidget, bSelected);
}


void hmi_OnS1Couleur77Release(tWidget *pWidget)
{
}

void hmi_OnS1Couleur77Click(tWidget *pWidget)
{
  S1Couleur77OnClick(pWidget);
}


void hmi_OnS1_Y_N78CheckChange(tWidget *pWidget, unsigned long bSelected)
{
  S1_Y_N78OnChange(pWidget, bSelected);
}


void hmi_OnS2Valeur79Release(tWidget *pWidget)
{
}

void hmi_OnS2Valeur79Click(tWidget *pWidget)
{
  S2Valeur79OnClick(pWidget);
}


void hmi_OnS2Couleur82Release(tWidget *pWidget)
{
}

void hmi_OnS2Couleur82Click(tWidget *pWidget)
{
  S2Couleur82OnClick(pWidget);
}


void hmi_OnS2_Y_N83CheckChange(tWidget *pWidget, unsigned long bSelected)
{
  S2_Y_N83OnChange(pWidget, bSelected);
}


void hmi_OnS3Valeur84Release(tWidget *pWidget)
{
}

void hmi_OnS3Valeur84Click(tWidget *pWidget)
{
  S3Valeur84OnClick(pWidget);
}


void hmi_OnS3Couleur87Release(tWidget *pWidget)
{
}

void hmi_OnS3Couleur87Click(tWidget *pWidget)
{
  S3Couleur87OnClick(pWidget);
}


void hmi_OnS3_Y_N88CheckChange(tWidget *pWidget, unsigned long bSelected)
{
  S3_Y_N88OnChange(pWidget, bSelected);
}


void hmi_OnS4Valeur89Release(tWidget *pWidget)
{
}

void hmi_OnS4Valeur89Click(tWidget *pWidget)
{
  S4Valeur89OnClick(pWidget);
}


void hmi_OnS4Couleur92Release(tWidget *pWidget)
{
}

void hmi_OnS4Couleur92Click(tWidget *pWidget)
{
  S4Couleur92OnClick(pWidget);
}


void hmi_OnS4_Y_N93CheckChange(tWidget *pWidget, unsigned long bSelected)
{
  S4_Y_N93OnChange(pWidget, bSelected);
}


void hmi_OnparamAvances94Release(tWidget *pWidget)
{
}

void hmi_OnparamAvances94Click(tWidget *pWidget)
{
  paramAvances94OnClick(pWidget);
}


void hmi_OnS1Valeur74Release(tWidget *pWidget)
{
}

void hmi_OnS1Valeur74Click(tWidget *pWidget)
{
  S1Valeur74OnClick(pWidget);
}


void hmi_OnQuit125Release(tWidget *pWidget)
{
}

void hmi_OnQuit125Click(tWidget *pWidget)
{
  Quit125OnClick(pWidget);
}


static void ConnectWidgetVariable()
{
  if (g_hmi_CurrentFrame != 6) return;
}

static void DisconnectWidgetVariable()
{
}

void hmi_Seuillage()
{
   var_table_init();
   hmi_FreeCurrentFrame();
   g_hmi_CurrentFrame = 6;
   hmi_InitFrameWidgets6();
}

