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
int adresseValP=10;
int adresseCoefEtal=14;
extern int adresseTypeCapteur;
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

void ValPhysique148OnClick(tWidget *pWidget)
{
      VAR_SET(NextF,NUM_FRAME);
      VAR_SET(One,adresseValP);
      hmi_GotoFrameByName("PavetNum");
}


void ConfigCapteur7OnShow()
{
   ////////////////////////////////////////////////////////////////
   static char tab[10];
   float iVal=0;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(adresseCapteur, 0, 4, (char *)&iVal);
      zero=iVal;
      FloatToStr(tab,iVal,2);
      //sprintf(tab, "%d", iVal);
      TextButtonTextSet(&ZeroCapteur12, tab);
      WidgetPaint((tWidget*)&ZeroCapteur12);
   }

   static char tabM[10];
   float iValM=0;
   int iValMP=0;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(adresseMaxCapteur, 0, 4, (char *)&iValM);
      FloatToStr(tabM,iValM,2);
      max=iValM;
      //sprintf(tabM, "%d", iValM);
      TextButtonTextSet(&MaxCapteur13, tabM);
      WidgetPaint((tWidget*)&MaxCapteur13);

      hmi_UserFlashReadEx(adresseTypeCapteur, 0, 4, (char *)&iValMP);
      switch(iValMP){

         case 1 :
               LabelTextSet(&Label144 ,"mA" );
               LabelTextSet(&Label151 ,"mA" );

         break;
         case 2:
               LabelTextSet(&Label144 ,"V" );
               LabelTextSet(&Label151 ,"V" );
         break;
         case 3:
               LabelTextSet(&Label144 ,"Pulse" );
               LabelTextSet(&Label151 ,"Pulse" );
         break;

      }

   }

   static char tabV[10];
   float iValV=0;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(adresseVoie, 0, 4, (char *)&iValV);
      FloatToStr(tabV,iValV,0);
      voie=iValV;
      //sprintf(tabM, "%d", iValM);
      TextButtonTextSet(&Voie36, tabV);
      WidgetPaint((tWidget*)&Voie36);
   }

   static char tabVP[10];
   float iValVP=0;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(adresseValP, 0, 4, (char *)&iValVP);
      FloatToStr(tabVP,iValVP,2);
      TextButtonTextSet(&ValPhysique148, tabVP);
      WidgetPaint((tWidget*)&ValPhysique148);
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
   hmi_GotoFrameByName("Alerte");
}

void Quit128OnClick(tWidget *pWidget)
{
   hmi_GotoFrameByName("Affichage");
}

#endif


