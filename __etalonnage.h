#define NUM_FRAME 3
int adresseValMax=13;
int adresseCoefEtal=14;

void TextPushButton136OnClick(tWidget *pWidget)
{
   hmi_GotoFrameByName("Seuillage");
}

void TextPushButton108OnClick(tWidget *pWidget)
{
   hmi_GotoFrameByName("ConfigCapteur");
}

void CoefEtalonnage63OnClick(tWidget *pWidget)
{
      VAR_SET(NextF,NUM_FRAME);
      VAR_SET(One,adresseValMax);
      hmi_GotoFrameByName("PavetNum");
}

void Etalonnage134OnShow()
{
   static char tabE[5];
   float iValE=0.0;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(adresseValMax, 0, 4, (char *)&iValE);
      FloatToStr(tabE,iValE,2);
      TextButtonTextSet(&CoefEtalonnage63, tabE);
      WidgetPaint((tWidget*)&CoefEtalonnage63);
   }

   LabelTextSet(&Label62,"Msg \r\n suivant l'unite");
}
