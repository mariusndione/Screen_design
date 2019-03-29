extern int adresseCoefEtal;
extern int adresseCapteur;
extern int adresseValMax;
extern int adresseValMaxP;
extern int adresseUnite;
extern int adresseS1Coul;
extern int adresseS2Coul;
extern int adresseS1Val;
void calculate(){
   float valReel=0.0;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(adresseValMax, 0, 4, (char *)&valReel);

   }

   float ValPhys=0.0;

   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(adresseValMaxP, 0, 4, (char *)&ValPhys);
   }
   float iValZ=0.0;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(adresseCapteur, 0, 4, (char *)&iValZ);
   }
   float coef=0.0;
   coef=ValPhys/(valReel-iValZ);
   hmi_UserFlashErase(adresseCoefEtal);
   hmi_UserFlashWriteEx(adresseCoefEtal ,0 ,4 ,(char *)&coef);
}
void ConfigM113OnClick(tWidget *pWidget)
{
   hmi_GotoFrameByName("ConfigModule");
}

void ConfigC117OnClick(tWidget *pWidget)
{
   hmi_GotoFrameByName("ConfigCapteur");
}

void ConfigS116OnClick(tWidget *pWidget)
{
   hmi_GotoFrameByName("Seuillage");
}

void ConfigE115OnClick(tWidget *pWidget)
{
   hmi_GotoFrameByName("Alerte");
}

void Affichage112OnShow()
{

   calculate();
   static char tabVal[10];
   float Val=0.0;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(adresseCoefEtal, 0, 4, (char *)&Val);
      FloatToStr(tabVal,Val,2);
      TextButtonTextSet(&Mesure118, tabVal);
   }

   if ( hmi_UserFlashConfig(1792) == 1792 ){

      static char ValU[50];
      char dest[50];
      char destp[50];
      memset(dest, '\0', sizeof(dest));
      memset(destp, '\0', sizeof(destp));
      hmi_UserFlashReadEx(adresseUnite, 0, 4,(char *)&dest);
      hmi_UserFlashReadEx(adresseUnite, 5, 4,(char *)&destp);
      strcat(dest,destp);
      strcpy(ValU,dest);
      TextButtonTextSet(&UniM119,ValU);
   }

   float iS1=0.0;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(adresseS1Val, 0, 4, (char *)&iS1);
      if(Val>iS1){
        majCouleur(&Mesure118,adresseS1Coul);
        majCouleur(&UniM119,adresseS1Coul);
      }
      else{
         majCouleur(&Mesure118,adresseS2Coul);
         majCouleur(&UniM119,adresseS2Coul);
      }

   }


}

void Timer179OnExecute(tWidget *pWidget)
{
   //calculate();
   Affichage112OnShow();
}

void Affichage112OnCreate()
{
   unsigned long interval = 2000;
   TimerIntervalSet(&Timer179, interval);
}
