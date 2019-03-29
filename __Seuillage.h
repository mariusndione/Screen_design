#ifndef SEUILLAGE_H
#define SEUILLAGE_H
/**
 * \file Seuillage.h
 * \author @Marius Ndione
 * \version 0.1
 * \date 25 Mars 2019
 *
 * Programme de configuration des seuils.
 *
 */


#define VERT 0x80FF80
#define BLEU 0x8000FF
#define JAUNE 0xFFFF80
#define ORANGE 0xFF8000
#define ROUGE 0xFF0000
#define NUM_FRAME 4
int adresseS1Val=19;
int adresseS1Coul=20;
int adresseS2Val=38;
int adresseS2Coul=39;
int adresseS3Val=56;
int adresseS3Coul=57;
int adresseS4Val=74;
int adresseS4Coul=75;
int adresseLogique=26;
int adresseS1Activation=18;
int adresseS2Activation=37;
int adresseS3Activation=55;
int adresseS4Activation=73;
float s1Val=0.0;
float s2Val=0.0;
float s3Val=0.0;
const float initVal=0.0;

/*void checkValue(float a, float b)
{

       if(b>a){
         TextButtonEnabledSet(&erreur122, TRUE);
         TextButtonVisibleSet(&erreur122, TRUE);
         int read=-1;
         read=hmi_ReadPanelKey();
         while(read!=PANEL_KEY_ENTER){
            TextButtonTextSet(&erreur122, "S2 <S1");
            WidgetPaint((tWidget*)&erreur122);
         }
      TextButtonEnabledSet(&erreur122, FALSE);
      TextButtonVisibleSet(&erreur122, FALSE);
      }

} */
void Timer52OnExecute(tWidget *pWidget)
{

}

void majCouleur(tWidget *pWidget,int add){

   int lambda;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(add, 0, 4,(char *)&lambda);
      if(lambda==1 ){
         PushButtonFillColorSet(pWidget,BLEU);
         WidgetPaint((tWidget*)pWidget);
      }
      if(lambda==2){
         PushButtonFillColorSet(pWidget,JAUNE);
         WidgetPaint((tWidget*)pWidget);

      }
      if(lambda==3){
         PushButtonFillColorSet(pWidget,ORANGE);
         WidgetPaint((tWidget*)pWidget);

      }
      if(lambda==4){
         PushButtonFillColorSet(pWidget,ROUGE);
         WidgetPaint((tWidget*)pWidget);
         //lambda=0;
      }
   }


}

void S1_Y_N78OnChange(tWidget *pWidget, unsigned long bSelected)
{
      CheckBoxSelectedSet(pWidget , bSelected);
      if(!bSelected){
      TextButtonVisibleSet(&S1Valeur74,false);
      TextButtonEnabledSet(&S1Valeur74,false);
      TextButtonVisibleSet(&S1Couleur77,false);
      TextButtonEnabledSet(&S1Couleur77,false);
      LabelVisibleSet(&Couleur176 ,false);
   }
   else{
      TextButtonVisibleSet(&S1Valeur74,true);
      TextButtonEnabledSet(&S1Valeur74,true);
      TextButtonVisibleSet(&S1Couleur77,true);
      TextButtonEnabledSet(&S1Couleur77,true);
      LabelVisibleSet(&Couleur176,true);
   }

   WidgetPaint(WIDGET_ROOT);
   hmi_UserFlashErase(adresseS1Activation);
   hmi_UserFlashWriteEx(adresseS1Activation, 0, 4, (char *)&bSelected);

}

void S2_Y_N83OnChange(tWidget *pWidget, unsigned long bSelected)
{
   CheckBoxSelectedSet(pWidget , bSelected);
   if(!bSelected){
      TextButtonVisibleSet(&S2Valeur79,false);
      TextButtonEnabledSet(&S2Valeur79,false);
      TextButtonVisibleSet(&S2Couleur82,false);
      TextButtonEnabledSet(&S2Couleur82,false);
      LabelVisibleSet(&Couleur291 ,false);
   }
   else{
      TextButtonVisibleSet(&S2Valeur79,true);
      TextButtonEnabledSet(&S2Valeur79,true);
      TextButtonVisibleSet(&S2Couleur82,true);
      TextButtonEnabledSet(&S2Couleur82,true);
      LabelVisibleSet(&Couleur291,true);
   }

   WidgetPaint(WIDGET_ROOT);
   hmi_UserFlashErase(adresseS2Activation);
   hmi_UserFlashWriteEx(adresseS2Activation, 0, 4, (char *)&bSelected);
}

void S3_Y_N88OnChange(tWidget *pWidget, unsigned long bSelected)
{
   CheckBoxSelectedSet(pWidget , bSelected);
   if(!bSelected){
      TextButtonVisibleSet(&S3Valeur84,false);
      TextButtonEnabledSet(&S3Valeur84,false);
      TextButtonVisibleSet(&S3Couleur87,false);
      TextButtonEnabledSet(&S3Couleur87,false);
      LabelVisibleSet(&Couleur386,false);
   }
   else{
      TextButtonVisibleSet(&S3Valeur84,true);
      TextButtonEnabledSet(&S3Valeur84,true);
      TextButtonVisibleSet(&S3Couleur87,true);
      TextButtonEnabledSet(&S3Couleur87,true);
      LabelVisibleSet(&Couleur386,true);
   }

   WidgetPaint(WIDGET_ROOT);
   hmi_UserFlashErase(adresseS3Activation);
   hmi_UserFlashWriteEx(adresseS3Activation, 0, 4, (char *)&bSelected);
}

void S4_Y_N93OnChange(tWidget *pWidget, unsigned long bSelected)
{
   CheckBoxSelectedSet(pWidget , bSelected);
   if(!bSelected){
      TextButtonVisibleSet(&S4Valeur89,false);
      TextButtonEnabledSet(&S4Valeur89,false);
      TextButtonVisibleSet(&S4Couleur92,false);
      TextButtonEnabledSet(&S4Couleur92,false);
      LabelVisibleSet(&Couleur481,false);
   }
   else{
      TextButtonVisibleSet(&S4Valeur89,true);
      TextButtonEnabledSet(&S4Valeur89,true);
      TextButtonVisibleSet(&S4Couleur92,true);
      TextButtonEnabledSet(&S4Couleur92,true);
      LabelVisibleSet(&Couleur481,true);
   }

   WidgetPaint(WIDGET_ROOT);
   hmi_UserFlashErase(adresseS4Activation);
   hmi_UserFlashWriteEx(adresseS4Activation, 0, 4, (char *)&bSelected);
}


void TextPushButton71OnClick(tWidget *pWidget)
{
 hmi_GotoFrameByName("Etalonnage");
}



void Seuillage45OnCreate()
{

}

void Seuillage45OnDestroy()
{

}

void Seuillage45OnShow()
{
   bool s1,s2,s3,s4,logique;

   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(adresseS1Activation, 0, 4,(char *)&s1);
      hmi_UserFlashReadEx(adresseS2Activation, 0, 4,(char *)&s2);
      hmi_UserFlashReadEx(adresseS3Activation, 0, 4,(char *)&s3);
      hmi_UserFlashReadEx(adresseS4Activation, 0, 4,(char *)&s4);
      S1_Y_N78OnChange(&S1_Y_N78, s1);
      S2_Y_N83OnChange(&S2_Y_N83, s2);
      S3_Y_N88OnChange(&S3_Y_N88, s3);
      S4_Y_N93OnChange(&S4_Y_N93, s4);
      }

   static char tabS1[10];
   //memset(tabS1,'\0',sizeof(tabS1));
   float iValS1=0;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(adresseS1Val, 0, 4, (char *)&iValS1);
      FloatToStr(tabS1,iValS1,2);
      s1Val=iValS1;
      //sprintf(tabS1, "%s", iValS1);
      TextButtonTextSet(&S1Valeur74, tabS1);
      WidgetPaint((tWidget*)&S1Valeur74);

   }

   static char tabS2[10];
   float iValS2=0;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(adresseS2Val, 0, 4, (char *)&iValS2);
      FloatToStr(tabS2,iValS2,2);
      s2Val=iValS2;
      TextButtonTextSet(&S2Valeur79, tabS2);
      WidgetPaint((tWidget*)&S2Valeur79);
      if(s1Val<iValS2 && s1==1 && s2==1){
         hmi_UserFlashErase(adresseS2Val);
         hmi_UserFlashWriteEx(adresseS2Val, 0, 4, (char *)&initVal);
         VAR_SET(ErrFrom,2);
         hmi_GotoFrameByName("MsgErreur");
      }

   }

   static char tabS3[10];
   float iValS3=0;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(adresseS3Val, 0, 4, (char *)&iValS3);
      FloatToStr(tabS3,iValS3,2);
      s3Val=iValS3;
      TextButtonTextSet(&S3Valeur84, tabS3);
      WidgetPaint((tWidget*)&S3Valeur84);
      if((s2Val<iValS3 && s2==1 && s3==1)||(s1Val<iValS3 && s1==1 && s3==1)){
         hmi_UserFlashErase(adresseS3Val);
         hmi_UserFlashWriteEx(adresseS3Val, 0, 4, (char *)&initVal);
         VAR_SET(ErrFrom,3);
         hmi_GotoFrameByName("MsgErreur");
      }

   }

   static char tabS4[10];
   float iValS4=0;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(adresseS4Val, 0, 4, (char *)&iValS4);
      FloatToStr(tabS4,iValS4,2);
      TextButtonTextSet(&S4Valeur89, tabS4);
      WidgetPaint((tWidget*)&S4Valeur89);
      if((s3Val<iValS4 && s4==1 && s3==1)||(s2Val<iValS4 && s4==1 && s2==1)||(s1Val<iValS4 && s4==1 && s1==1)){
         hmi_UserFlashErase(adresseS4Val);
         hmi_UserFlashWriteEx(adresseS4Val, 0, 4, (char *)&initVal);
         VAR_SET(ErrFrom,4);
         hmi_GotoFrameByName("MsgErreur");
      }
   }




      if ( hmi_UserFlashConfig(1792) == 1792 ){
         hmi_UserFlashReadEx(adresseLogique, 0, 4,(char *)&logique);
         logique58OnChange(&logique58, logique);
      }
      majCouleur(&S1Couleur77,adresseS1Coul);
      majCouleur(&S2Couleur82,adresseS2Coul);
      majCouleur(&S3Couleur87,adresseS3Coul);
      majCouleur(&S4Couleur92,adresseS4Coul);


}


void S1Couleur77OnClick(tWidget *pWidget)
{
    static int a=0;
     a++;
   if(a==1){
      PushButtonFillColorSet(&S1Couleur77,BLEU);
      WidgetPaint((tWidget*)&S1Couleur77);
      hmi_UserFlashErase(adresseS1Coul);
      hmi_UserFlashWriteEx(adresseS1Coul, 0, 4, (char *)&a);

   }
   if(a==2){
      PushButtonFillColorSet(&S1Couleur77,JAUNE);
      WidgetPaint((tWidget*)&S1Couleur77);
      hmi_UserFlashErase(adresseS1Coul);
      hmi_UserFlashWriteEx(adresseS1Coul, 0, 4, (char *)&a);

   }
   if(a==3){
      PushButtonFillColorSet(&S1Couleur77,ORANGE);
      WidgetPaint((tWidget*)&S1Couleur77);
      hmi_UserFlashErase(adresseS1Coul);
      hmi_UserFlashWriteEx(adresseS1Coul, 0, 4, (char *)&a);
   }
   if(a==4){
      PushButtonFillColorSet(&S1Couleur77,ROUGE);
      WidgetPaint((tWidget*)&S1Couleur77);
      hmi_UserFlashErase(adresseS1Coul);
      hmi_UserFlashWriteEx(adresseS1Coul, 0, 4, (char *)&a);
      a=0;
   }

}


void S2Couleur82OnClick(tWidget *pWidget)
{
   static int b=0;
   b++;
   if(b==1){
      PushButtonFillColorSet(&S2Couleur82,BLEU);
      WidgetPaint((tWidget*)&S2Couleur82);
      hmi_UserFlashErase(adresseS2Coul);
      hmi_UserFlashWriteEx(adresseS2Coul, 0, 4, (char *)&b);
   }
   if(b==2){
      PushButtonFillColorSet(&S2Couleur82,JAUNE);
      WidgetPaint((tWidget*)&S2Couleur82);
      hmi_UserFlashErase(adresseS2Coul);
      hmi_UserFlashWriteEx(adresseS2Coul, 0, 4, (char *)&b);
   }
   if(b==3){
      PushButtonFillColorSet(&S2Couleur82,ORANGE);
      WidgetPaint((tWidget*)&S2Couleur82);
      hmi_UserFlashErase(adresseS2Coul);
      hmi_UserFlashWriteEx(adresseS2Coul, 0, 4, (char *)&b);
   }
   if(b==4){
      PushButtonFillColorSet(&S2Couleur82,ROUGE);
      WidgetPaint((tWidget*)&S2Couleur82);
      hmi_UserFlashErase(adresseS2Coul);
      hmi_UserFlashWriteEx(adresseS2Coul, 0, 4, (char *)&b);
      b=0;
   }

}

void S3Couleur87OnClick(tWidget *pWidget)
{
   static int c=0;
   c++;
   if(c==1){
      PushButtonFillColorSet(&S3Couleur87,BLEU);
      WidgetPaint((tWidget*)&S3Couleur87);
      hmi_UserFlashErase(adresseS3Coul);
      hmi_UserFlashWriteEx(adresseS3Coul, 0, 4, (char *)&c);
   }
   if(c==2){
      PushButtonFillColorSet(&S3Couleur87,JAUNE);
      WidgetPaint((tWidget*)&S3Couleur87);
      hmi_UserFlashErase(adresseS3Coul);
      hmi_UserFlashWriteEx(adresseS3Coul, 0, 4, (char *)&c);
   }
   if(c==3){
      PushButtonFillColorSet(&S3Couleur87,ORANGE);
      WidgetPaint((tWidget*)&S3Couleur87);
      hmi_UserFlashErase(adresseS3Coul);
      hmi_UserFlashWriteEx(adresseS3Coul, 0, 4, (char *)&c);
   }
   if(c==4){
      PushButtonFillColorSet(&S3Couleur87,ROUGE);
      WidgetPaint((tWidget*)&S3Couleur87);
      hmi_UserFlashErase(adresseS3Coul);
      hmi_UserFlashWriteEx(adresseS3Coul, 0, 4, (char *)&c);
      c=0;
   }

}


void S4Couleur92OnClick(tWidget *pWidget)
{
   static int d=0;
   d++;
   if(d==1){
      PushButtonFillColorSet(&S4Couleur92,BLEU);
      WidgetPaint((tWidget*)&S4Couleur92);
      hmi_UserFlashErase(adresseS4Coul);
      hmi_UserFlashWriteEx(adresseS4Coul, 0, 4, (char *)&d);
   }
   if(d==2){
      PushButtonFillColorSet(&S4Couleur92,JAUNE);
      WidgetPaint((tWidget*)&S4Couleur92);
      hmi_UserFlashErase(adresseS4Coul);
      hmi_UserFlashWriteEx(adresseS4Coul, 0, 4, (char *)&d);
   }
   if(d==3){
      PushButtonFillColorSet(&S4Couleur92,ORANGE);
      WidgetPaint((tWidget*)&S4Couleur92);
      hmi_UserFlashErase(adresseS4Coul);
      hmi_UserFlashWriteEx(adresseS4Coul, 0, 4, (char *)&d);
   }
   if(d==4){
      PushButtonFillColorSet(&S4Couleur92,ROUGE);
      WidgetPaint((tWidget*)&S4Couleur92);
      hmi_UserFlashErase(adresseS4Coul);
      hmi_UserFlashWriteEx(adresseS4Coul, 0, 4, (char *)&d);
      d=0;
   }

}

void S1Valeur74OnClick(tWidget *pWidget)
{
   VAR_SET(One,adresseS1Val);
   VAR_SET(NextF,NUM_FRAME);
   hmi_GotoFrameByName("PavetNum");
}


void S2Valeur79OnClick(tWidget *pWidget)
{
   VAR_SET(One,adresseS2Val);
   VAR_SET(NextF,NUM_FRAME);
   hmi_GotoFrameByName("PavetNum");
}



void S3Valeur84OnClick(tWidget *pWidget)
{
   VAR_SET(One,adresseS3Val);
   VAR_SET(NextF,NUM_FRAME);
   hmi_GotoFrameByName("PavetNum");
}

void S4Valeur89OnClick(tWidget *pWidget)
{
   VAR_SET(One,adresseS4Val);
   VAR_SET(NextF,NUM_FRAME);
   hmi_GotoFrameByName("PavetNum");
}



void paramAvances94OnClick(tWidget *pWidget)
{
   hmi_GotoFrameByName("SeuilUn");
}

void logique58OnChange(tWidget *pWidget, unsigned long bSelected)
{
   CheckBoxSelectedSet(pWidget , bSelected);
   /*Si bSelected=true on a une logique descendante*/
   /*Si bSelected=false on a une logique ascendante*/
   hmi_UserFlashErase(adresseLogique);
   hmi_UserFlashWriteEx(adresseLogique, 0, 4, (char *)&bSelected);
}



void Quit125OnClick(tWidget *pWidget)
{
   hmi_GotoFrameByName("Affichage");
}
void erreur122OnClick(tWidget *pWidget)
{

}
#endif



