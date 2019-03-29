int readVal=-1;
int checkVal=0;
void init(){
   TextButtonTextSet(&TextPushButton121 ,"VERIFIEZ BIEN QUE");
   TextButtonTextSet(&TextPushButton152 ," LA MESURE EST A 0");
   TextButtonTextSet(&TextPushButton150 ,"PUIS APPUYEZ SUR F5");
   TextButtonTextSet(&TextPushButton149 ,"");
}

void Alerte120OnShow()
{
}

void Alerte120OnPaint()
{
   TextButtonTextSet(&TextPushButton121 ,"VERIFIEZ BIEN QUE");
   TextButtonTextSet(&TextPushButton152 ," LES BROCHES INIT ET GND ");
   TextButtonTextSet(&TextPushButton150 ,"DU MODULE SONT RELIEES");
   TextButtonTextSet(&TextPushButton149 ,"PUIS APPUYEZ SUR F2");

}

void Alerte120OnCreate()
{
   unsigned long interval = 250;
   TimerIntervalSet(&Timer154, interval);
}

void Timer154OnExecute(tWidget *pWidget)
{
   readVal=hmi_ReadPanelKey();
   if(readVal==PANEL_KEY_DOWN){
      init();
      checkVal=1;
    }

   if(readVal==PANEL_KEY_ENTER && checkVal==1){
      checkVal=0;
      hmi_GotoFrameByName("Etalonnage");

    }
}
