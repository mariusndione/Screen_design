#define NUM_FRAME 3
int adresseValMax=13;
int adresseValMaxP=15;
extern int adresseCoefEtal;
extern int adresseTypeCapteur;
extern int adresseCapteur;
void TextPushButton136OnClick(tWidget *pWidget)
{
   hmi_GotoFrameByName("Seuillage");
}

void TextPushButton108OnClick(tWidget *pWidget)
{
   hmi_GotoFrameByName("ConfigCapteur");
}

void ValPhysique157OnClick(tWidget *pWidget)
{
      VAR_SET(NextF,NUM_FRAME);
      VAR_SET(One,adresseValMaxP);
      hmi_GotoFrameByName("PavetNum");
}

void ValReelle63OnClick(tWidget *pWidget)
{
      VAR_SET(NextF,NUM_FRAME);
      VAR_SET(One,adresseValMax);
      hmi_GotoFrameByName("PavetNum");
}

void Etalonnage134OnShow()
{

   LabelTextSet(&Label62,"Msg \r\n suivant l'unite");
   static char tabE[10];
   float iValE=0.0;
   int iValMP=0;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(adresseValMax, 0, 4, (char *)&iValE);
      FloatToStr(tabE,iValE,2);
      TextButtonTextSet(&ValReelle63, tabE);
      WidgetPaint((tWidget*)&ValReelle63);

      hmi_UserFlashReadEx(adresseTypeCapteur, 0, 4, (char *)&iValMP);
      switch(iValMP){

         case 1 :
               LabelTextSet(&Label168 ,"mA" );
         break;
         case 2:
               LabelTextSet(&Label168 ,"V" );
         break;
         case 3:
               LabelTextSet(&Label168 ,"IMP" );
         break;

      }
   }


   static char tabEP[10];
   float iValEP=0.0;
   float iValZ=0.0;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(adresseValMaxP, 0, 4, (char *)&iValEP);
      FloatToStr(tabEP,iValEP,2);
      TextButtonTextSet(&ValPhysique157, tabEP);
      WidgetPaint((tWidget*)&ValPhysique157);
   }




}

void Quit127OnClick(tWidget *pWidget)
{
   hmi_GotoFrameByName("Affichage");
}


