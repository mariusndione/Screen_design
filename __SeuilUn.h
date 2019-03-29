#define DELAY 250
#define NUM_FRAME 5
#define NB_MAX_SWITCH_RIGHT 4
#define NB_MIN_SWITCH_LEFT 1
int adresseHysteresis1=21;
int adresseRetard1=22;
int adresseVoie1=23;
int adresseAdresse1=24;
int adresseTypeRelais1=25;
int adresseHysteresis2=40;
int adresseRetard2=41;
int adresseVoie2=42;
int adresseAdresse2=43;
int adresseTypeRelais2=44;
int adresseHysteresis3=58;
int adresseRetard3=59;
int adresseVoie3=60;
int adresseAdresse3=61;
int adresseTypeRelais3=62;
int adresseHysteresis4=76;
int adresseRetard4=77;
int adresseVoie4=78;
int adresseAdresse4=79;
int adresseTypeRelais4=80;
int pos=1;
//int adressePos=90;
extern int adresseS1Activation;
extern int adresseS2Activation;
extern int adresseS3Activation;
extern int adresseS4Activation;


void hysteresis104OnClick(tWidget *pWidget)
{
   int pos1=pos;
   //if ( hmi_UserFlashConfig(1792) == 1792 ){

   //hmi_UserFlashReadEx(adressePos, 0, 4, (char *)&pos1);
   if(pos1==1){
   VAR_SET(One,adresseHysteresis1);
   }
   if(pos1==2){
   VAR_SET(One,adresseHysteresis2);
   }
   if(pos1==3){
   VAR_SET(One,adresseHysteresis3);
   }
   if(pos1==4){
   VAR_SET(One,adresseHysteresis4);
   }

   //}
   VAR_SET(NextF,NUM_FRAME);
   hmi_GotoFrameByName("PavetNum");
}

void Retard105OnClick(tWidget *pWidget)
{

   int pos1=pos;
   //if ( hmi_UserFlashConfig(1792) == 1792 ){

   //hmi_UserFlashReadEx(adressePos, 0, 4, (char *)&pos1);
   if(pos1==1){
   VAR_SET(One,adresseRetard1);
   }
   if(pos1==2){
   VAR_SET(One,adresseRetard2);
   }
   if(pos1==3){
   VAR_SET(One,adresseRetard3);
   }
   if(pos1==4){
   VAR_SET(One,adresseRetard4);
   }

   //}
   VAR_SET(NextF,NUM_FRAME);
   hmi_GotoFrameByName("PavetNum");
}



void NO102OnChange(tWidget *pWidget, unsigned long bSelected)
{
   CheckBoxSelectedSet(pWidget , bSelected);

   int pos1=pos;
   //if ( hmi_UserFlashConfig(1792) == 1792 ){

   //hmi_UserFlashReadEx(adressePos, 0, 4, (char *)&pos1);
   if(pos1==1){
   hmi_UserFlashErase(adresseTypeRelais1);
   hmi_UserFlashWriteEx(adresseTypeRelais1, 0, 4, (char *)&bSelected);
   }
   if(pos1==2){
   hmi_UserFlashErase(adresseTypeRelais2);
   hmi_UserFlashWriteEx(adresseTypeRelais2, 0, 4, (char *)&bSelected);
   }
   if(pos1==3){
   hmi_UserFlashErase(adresseTypeRelais3);
   hmi_UserFlashWriteEx(adresseTypeRelais3, 0, 4, (char *)&bSelected);
   }
   if(pos1==4){
   hmi_UserFlashErase(adresseTypeRelais4);
   hmi_UserFlashWriteEx(adresseTypeRelais4, 0, 4, (char *)&bSelected);
   }
   //}
}


void Voie106OnClick(tWidget *pWidget)
{

   int pos1=pos;
   //if ( hmi_UserFlashConfig(1792) == 1792 ){

   //hmi_UserFlashReadEx(adressePos, 0, 4, (char *)&pos1);
   if(pos1==1){
   VAR_SET(One,adresseVoie1);
   }
   if(pos1==2){
   VAR_SET(One,adresseVoie2);
   }
   if(pos1==3){
   VAR_SET(One,adresseVoie3);
   }
   if(pos1==4){
   VAR_SET(One,adresseVoie4);
   }
   //}
   VAR_SET(NextF,NUM_FRAME);
   hmi_GotoFrameByName("PavetNum");
}
void adresse103OnClick(tWidget *pWidget)
{
   int pos1=pos;
   //if ( hmi_UserFlashConfig(1792) == 1792 ){

   //hmi_UserFlashReadEx(adressePos, 0, 4, (char *)&pos1);
   if(pos1==1){
   VAR_SET(One,adresseAdresse1);
   }
   if(pos1==2){
   VAR_SET(One,adresseAdresse2);
   }
   if(pos1==3){
   VAR_SET(One,adresseAdresse3);
   }
   if(pos1==4){
   VAR_SET(One,adresseAdresse4);
   }
   //}
   VAR_SET(NextF,NUM_FRAME);
   hmi_GotoFrameByName("Clavier");
}

void TextPushButton153OnClick(tWidget *pWidget)
{
   hmi_GotoFrameByName("Seuillage");
}



void SeuilUn95OnShow()
{
   /*if ( hmi_UserFlashConfig(1792) == 1792 ){
      bool choix;
      hmi_UserFlashReadEx(adresseS1Activation, 0, 4,(char *)&choix);
      init(choix);
   } */

   int position=pos;
   static char tabP[10];
   sprintf(tabP, "%d", position);
   LabelTextSet(&Relai96 ,tabP );
   static char tabR[10];
   char iValR[10];
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      switch(position){

         case 1:
            hmi_UserFlashReadEx(adresseAdresse1, 0, 4, (char *)&iValR);
         break;
         case 2:
            hmi_UserFlashReadEx(adresseAdresse2, 0, 4, (char *)&iValR);
         break;
         case 3:
            hmi_UserFlashReadEx(adresseAdresse3, 0, 4, (char *)&iValR);
         break;
         case 4:
            hmi_UserFlashReadEx(adresseAdresse4, 0, 4, (char *)&iValR);
         break;

      }

      strcpy(tabR,iValR);
      //sprintf(tab, "%d", iVal);
      TextButtonTextSet(&adresse103, tabR);
      WidgetPaint((tWidget*)&adresse103);
   }

   static char tabH[10];
   float iValH=0.0;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      switch(position){
         case 1:
            hmi_UserFlashReadEx(adresseHysteresis1, 0, 4, (char *)&iValH);
         break;
         case 2:
            hmi_UserFlashReadEx(adresseHysteresis2, 0, 4, (char *)&iValH);
         break;
         case 3:
            hmi_UserFlashReadEx(adresseHysteresis3, 0, 4, (char *)&iValH);
         break;
         case 4:
            hmi_UserFlashReadEx(adresseHysteresis4, 0, 4, (char *)&iValH);
         break;

      }
      FloatToStr(tabH,iValH,2);
      //sprintf(tab, "%d", iVal);
      TextButtonTextSet(&hysteresis104, tabH);
      WidgetPaint((tWidget*)&hysteresis104);
   }


   static char tabRE[10];
   float iValRE=0.0;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      switch(position){

         case 1:
            hmi_UserFlashReadEx(adresseRetard1, 0, 4, (char *)&iValRE);
         break;
         case 2:
           hmi_UserFlashReadEx(adresseRetard2, 0, 4, (char *)&iValRE);
         break;
         case 3:
           hmi_UserFlashReadEx(adresseRetard3, 0, 4, (char *)&iValRE);
         break;
         case 4:
            hmi_UserFlashReadEx(adresseRetard4, 0, 4, (char *)&iValRE);
         break;

      }
      FloatToStr(tabRE,iValRE,2);
      //sprintf(tab, "%d", iVal);
      TextButtonTextSet(&Retard105, tabRE);
      WidgetPaint((tWidget*)&Retard105);
   }

   static char tabVO[10];
   float iValVO=0;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      switch(position){

         case 1:
           hmi_UserFlashReadEx(adresseVoie1, 0, 4, (char *)&iValVO);
         break;
         case 2:
           hmi_UserFlashReadEx(adresseVoie2, 0, 4, (char *)&iValVO);
         break;
         case 3:
            hmi_UserFlashReadEx(adresseVoie3, 0, 4, (char *)&iValVO);
         break;
         case 4:
            hmi_UserFlashReadEx(adresseVoie4, 0, 4, (char *)&iValVO);
         break;

      }
      FloatToStr(tabVO,iValVO,0);
      //sprintf(tab, "%d", iVal);
      TextButtonTextSet(&Voie106, tabVO);
      WidgetPaint((tWidget*)&Voie106);
   }

   bool mode;

      if ( hmi_UserFlashConfig(1792) == 1792 ){

      switch(position){

         case 1:
            hmi_UserFlashReadEx(adresseTypeRelais1, 0, 4,(char *)&mode);
         break;
         case 2:
            hmi_UserFlashReadEx(adresseTypeRelais2, 0, 4,(char *)&mode);
         break;
         case 3:
            hmi_UserFlashReadEx(adresseTypeRelais3, 0, 4,(char *)&mode);
         break;
         case 4:
            hmi_UserFlashReadEx(adresseTypeRelais4, 0, 4,(char *)&mode);
         break;

      }
         NO102OnChange(&NO102, mode);
      }

   WidgetPaint(WIDGET_ROOT);

}


void Prev164OnClick(tWidget *pWidget)
{
   static char tmp[3]={NULL};
   if(pos==NB_MIN_SWITCH_LEFT){
      TextButtonEnabledSet(&Prev164 ,false );
   }
   else{
      pos--;
   }
   //hmi_UserFlashErase(adressePos);
  // hmi_UserFlashWriteEx(adressePos, 0, 4, (char *)&pos);
   TextButtonEnabledSet(&Prev164 ,true );
   FloatToStr(tmp,pos,0);
   LabelTextSet(&Relai96 ,tmp );
   SeuilUn95OnShow();
}

void Next107OnClick(tWidget *pWidget)
{
   static char tmp[3]={NULL};
   if(pos==NB_MAX_SWITCH_RIGHT){
      TextButtonEnabledSet(&Next107 ,false );
   }
   else{
      pos++;

   }
   //hmi_UserFlashErase(adressePos);
   //hmi_UserFlashWriteEx(adressePos, 0, 4, (char *)&pos);
   TextButtonEnabledSet(&Next107 ,true );
   FloatToStr(tmp,pos,0);
   LabelTextSet(&Relai96 ,tmp );
   SeuilUn95OnShow();
}
void SeuilUn95OnCreate()
{

   unsigned long interval = DELAY;
   TimerIntervalSet(&Timer110, interval);
}

void Timer110OnExecute(tWidget *pWidget)
{

   int posPanel=-1;
   posPanel=hmi_ReadPanelKey();
   if(posPanel==PANEL_KEY_LEFT){
      Prev164OnClick(&Prev164);
   }

   if(posPanel==PANEL_KEY_RIGHT){
      Next107OnClick(&Next107);
   }
   if(posPanel==PANEL_KEY_ENTER){
      Valider111OnClick(&Valider111);
   }

}

void Valider111OnClick(tWidget *pWidget)
{
 hmi_GotoFrameByName("Affichage");
}

void SeuilUn95OnPaint()
{

}

void Quit126OnClick(tWidget *pWidget)
{
   hmi_GotoFrameByName("Affichage");
}
