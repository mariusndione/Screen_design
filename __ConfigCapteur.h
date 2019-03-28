#ifndef CONFIGCAPTEUR_H
#define CONFIGCAPTEUR_H
/**
 * \file ConfigCapteur.h
 * \author @Marius Ndione
 * \version 0.1
 * \date 12 Mars 2019
 *
 * Programme de configuration du capteur.
 *
 */
#define NUM_FRAME 2
float zero=0.0;
float max=0.0;
int voie=0;
int unite;
int adresseCapteur=6;
int adresseMaxCapteur=7;
int adresseVoie=8;
int adresseUnite=9;


void ZeroCapteur12OnClick(tWidget *pWidget)
{
      VAR_SET(NextF,NUM_FRAME);
      VAR_SET(One,adresseCapteur);
      hmi_GotoFrameByName("PavetNum");
}

void MaxCapteur13OnClick(tWidget *pWidget)
{
      VAR_SET(NextF,NUM_FRAME);
      VAR_SET(One,adresseMaxCapteur);
      hmi_GotoFrameByName("PavetNum");
}


void Voie36OnClick(tWidget *pWidget)
{
      VAR_SET(NextF,NUM_FRAME);
      VAR_SET(One,adresseVoie);
      hmi_GotoFrameByName("PavetNum");
}

void Unite35OnClick(tWidget *pWidget)
{
      VAR_SET(NextF,NUM_FRAME);
      VAR_SET(One,adresseUnite);
      hmi_GotoFrameByName("Clavier");
}

void ConfigCapteur7OnShow()
{
   ////////////////////////////////////////////////////////////////
   static char tab[5];
   float iVal=0;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(adresseCapteur, 0, 4, (char *)&iVal);
      zero=iVal;
      FloatToStr(tab,iVal,2);
      //sprintf(tab, "%d", iVal);
      TextButtonTextSet(&ZeroCapteur12, tab);
      WidgetPaint((tWidget*)&ZeroCapteur12);
   }

   static char tabM[5];
   float iValM=0;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(adresseMaxCapteur, 0, 4, (char *)&iValM);
      FloatToStr(tabM,iValM,2);
      max=iValM;
      //sprintf(tabM, "%d", iValM);
      TextButtonTextSet(&MaxCapteur13, tabM);
      WidgetPaint((tWidget*)&MaxCapteur13);
   }

   static char tabV[5];
   float iValV=0;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(adresseVoie, 0, 4, (char *)&iValV);
      FloatToStr(tabV,iValV,0);
      voie=iValV;
      //sprintf(tabM, "%d", iValM);
      TextButtonTextSet(&Voie36, tabV);
      WidgetPaint((tWidget*)&Voie36);
   }

   if ( hmi_UserFlashConfig(1792) == 1792 ){

      static char iValU[50];
      //memset(iVal, '0', sizeof(iVal));
      char dest1[50];
      char dest2[50];
      memset(dest1, '\0', sizeof(dest1));
      memset(dest2, '\0', sizeof(dest2));
      hmi_UserFlashReadEx(adresseUnite, 0, 4,(char *)&dest1);
      hmi_UserFlashReadEx(adresseUnite, 5, 4,(char *)&dest2);
      strcat(dest1,dest2);
      strcpy(iValU,dest1);
      TextButtonTextSet(&Unite35,iValU);
      WidgetPaint((tWidget*)&Unite35);

      }

}

void ConfigCapteur7OnCreate()
{

}

void TextPushButton55OnClick(tWidget *pWidget)
{
hmi_GotoFrameByName("ConfigModule");
}

void Etalonnage138OnClick(tWidget *pWidget)
{
   hmi_GotoFrameByName("Etalonnage");
}


#endif