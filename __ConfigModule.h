#ifndef CONFIGMODULE_H
#define CONFIGMODULE_H
/**
 * \file ConfigModule.h
 * \author @Marius Ndione
 * \version 0.1
 * \date 12 Mars 2019
 *
 * Programme de configuration du module.
 *
 */
#define NUM_FRAME 1
/********************Déclaration des variables globales*********/
int addr;               //Variable pour stocker l'adresse du module
int module;
int adresseAdresse=2;  //Adresse pour stocker le type de module
int adresseModule=1;   //Adresse dans laquelle se trouve l'@ du module
int adresseTypeCapteur=0;
static int typeCapteur;

/*****************************************************************/

/*Fonction pour mettre à jour l'affichage de la Textbox capteur***/
void update(int a)
{
   switch(a) {
   case 1:
   TextButtonTextSet(&TextPushButton46 ,"4-20mA" );
   PushButtonFillColorSet(&TextPushButton46,0x00FF00);
   WidgetPaint((tWidget*)&TextPushButton46);
   break;
   case 2:
   TextButtonTextSet(&TextPushButton46 ,"0-10V" );
   PushButtonFillColorSet(&TextPushButton46,0x00FF00);
   WidgetPaint((tWidget*)&TextPushButton46);
   break;
   case 3:
   TextButtonTextSet(&TextPushButton46 ,"Impulsion" );
   PushButtonFillColorSet(&TextPushButton46,0x00FF00);
   WidgetPaint((tWidget*)&TextPushButton46);
   break;
   default:
   TextButtonTextSet(&TextPushButton46 ,"Choisissez le capteur" );
   PushButtonFillColorSet(&TextPushButton46,0xFF0000);
   WidgetPaint((tWidget*)&TextPushButton46);
   break;
   }
}

/********** Checkbox pour capteur de type impulsion ***********/

void Impulsion40OnChange(tWidget *pWidget, unsigned long bSelected)
{

   if (CheckBoxSelectedGet(&Impulsion40)==1){

      CheckBoxSelectedSet(&ZeroDixVolt39 ,false );
      WidgetPaint((tWidget*)&ZeroDixVolt39);
      CheckBoxSelectedSet(&QuatreVingtMA38 ,false );
      WidgetPaint((tWidget*)&QuatreVingtMA38);
      typeCapteur=3;
      update(typeCapteur);
   }
   if (CheckBoxSelectedGet(&Impulsion40)==0){
      typeCapteur=0;
      update(typeCapteur);
   }
   hmi_UserFlashErase(adresseTypeCapteur);
   hmi_UserFlashWriteEx(adresseTypeCapteur, 0, 4, (char *)&typeCapteur)  ;
}

/************* Checkbox pour capteur de type 4-20mA ***************/
void QuatreVingtMA38OnChange(tWidget *pWidget, unsigned long bSelected)
{

   if (CheckBoxSelectedGet(&QuatreVingtMA38)==1){

      CheckBoxSelectedSet(&ZeroDixVolt39 ,false );
      WidgetPaint((tWidget*)&ZeroDixVolt39);
      CheckBoxSelectedSet(&Impulsion40 ,false );
      WidgetPaint((tWidget*)&Impulsion40);
      typeCapteur=1;
      update(typeCapteur);
   }
   if (CheckBoxSelectedGet(&QuatreVingtMA38)==0){
      typeCapteur=0;
      update(typeCapteur);
   }
   hmi_UserFlashErase(adresseTypeCapteur);
   hmi_UserFlashWriteEx(adresseTypeCapteur, 0, 4, (char *)&typeCapteur)  ;
}

/************* Checkbox pour capteur de type 0-10V ***************/
void ZeroDixVolt39OnChange(tWidget *pWidget, unsigned long bSelected)
{

   if (CheckBoxSelectedGet(&ZeroDixVolt39)==1){

      CheckBoxSelectedSet(&QuatreVingtMA38 ,false );
      WidgetPaint((tWidget*)&QuatreVingtMA38);
      CheckBoxSelectedSet(&Impulsion40 ,false );
      WidgetPaint((tWidget*)&Impulsion40);
      typeCapteur=2;
      update(typeCapteur);
   }
   if (CheckBoxSelectedGet(&ZeroDixVolt39)==0){
      typeCapteur=0;
      update(typeCapteur);
   }
   hmi_UserFlashErase(adresseTypeCapteur);
   hmi_UserFlashWriteEx(adresseTypeCapteur, 0, 4, (char *)&typeCapteur);
}

void OK37OnClick(tWidget *pWidget)
{

   hmi_UserFlashReadEx(adresseTypeCapteur, 0, 4, (char *)&typeCapteur);
   if (((typeCapteur!=1) && (typeCapteur!=2) && (typeCapteur!=3)) || (module==0)){
      TextButtonTextSet(&TextPushButton46 ,"Config Incomplete" );
      PushButtonFillColorSet(&TextPushButton46,0xFF0000);
   }
   else {
      hmi_GotoFrameByName("ConfigCapteur");
   }
}


void Adresse41OnClick(tWidget *pWidget)
{
   VAR_SET(NextF,NUM_FRAME);
   VAR_SET(One,adresseAdresse);
   hmi_GotoFrameByName("Clavier");
}

void Module6OnClick(tWidget *pWidget)
{
   VAR_SET(NextF,NUM_FRAME);
   VAR_SET(One,adresseModule);
   hmi_GotoFrameByName("PavetNum");

}





void ConfigModule29OnShow()
{
   static char tab[5];
   char iVal[5];
   memset(iVal, '\0', sizeof(iVal));
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(adresseAdresse, 0, 4, (char *)&iVal);
      //addr=iVal;
      strcpy(tab,iVal);
      TextButtonTextSet(&Adresse41, tab);
      WidgetPaint((tWidget*)&Adresse41);
   }

   static char tabM[5];
   float iValM=0;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(adresseModule, 0, 4, (char *)&iValM);
      FloatToStr(tabM,iValM,0);
      module=iValM;
      TextButtonTextSet(&Module6, tabM);
      WidgetPaint((tWidget*)&Module6);
   }



   int iValC=0;
   if ( hmi_UserFlashConfig(1792) == 1792 ){

      hmi_UserFlashReadEx(adresseTypeCapteur, 0, 4, (char *)&iValC);
      switch(iValC){

         case 1 :
               CheckBoxSelectedSet(&QuatreVingtMA38 ,true );
               WidgetPaint((tWidget*)&QuatreVingtMA38);
               update(iValC);
         break;
         case 2:
               CheckBoxSelectedSet(&ZeroDixVolt39 ,true );
               WidgetPaint((tWidget*)&ZeroDixVolt39);
               update(iValC);
         break;
         case 3:
               CheckBoxSelectedSet(&Impulsion40 ,true );
               WidgetPaint((tWidget*)&Impulsion40);
               update(iValC);
         break;
         default:
               update(iValC);
         break;

      }

   }
}

/*****************************************************************************/

void Timer140OnExecute(tWidget *pWidget)
{

}


void ConfigModule29OnCreate()
{


 }
void ConfigModule29OnPaint()
{

}
void ConfigModule29OnDestroy()
{

}
#endif

