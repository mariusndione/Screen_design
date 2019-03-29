int readValue=-1;
void Timer175OnExecute(tWidget *pWidget)
{
   readValue=hmi_ReadPanelKey();
   if(readValue==PANEL_KEY_ENTER){
      hmi_GotoFrameByName("Seuillage");

    }
}


void MsgErreur172OnCreate()
{
   unsigned long interval = 250;
   TimerIntervalSet(&Timer175, interval);
}

void MsgErreur172OnPaint()
{

}

void MsgErreur172OnShow()
{
   static char str1[4];
   int ret;
   VAR_GET(ErrFrom);
   sprintf(str1, "%d", ErrFrom);
   ret=atoi(str1);
   if(ret==2){
      TextButtonTextSet(&TextPushButton173 ,"VEUILLEZ SVP CHOISIR SEUIL2");
      TextButtonTextSet(&TextPushButton174 ,"INFERIEUR AU SEUIL 1");
   }
   if(ret==3){
      TextButtonTextSet(&TextPushButton173 ,"VEUILLEZ SVP CHOISIR SEUIL3");
      TextButtonTextSet(&TextPushButton174 ,"INFERIEUR AUX SEUILS 2 ET 1");
   }
   if(ret==4){
      TextButtonTextSet(&TextPushButton173 ,"VEUILLEZ SVP CHOISIR SEUIL4");
      TextButtonTextSet(&TextPushButton174 ,"INFERIEUR AUX SEUILS 3,2 ET 1");
   }

}

void Quitter176OnClick(tWidget *pWidget)
{
   hmi_GotoFrameByName("Seuillage");
}
