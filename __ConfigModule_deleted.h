//float _IndxLectMod;
float tmp;
void OK13OnClick(tWidget *pWidget)
{
   hmi_GotoFrameByName("ConfigCapteur");
}

void TaperValeur12OnClick(tWidget *pWidget)
{


      //hmi_UserFlashReadEx((1500), 0, 4, (char *)&_IndxLectMod);
      VAR_SET(NextF,2);
      VAR_SET(One,900+1);
      hmi_GotoFrameByName("PavetNum");

}


void ConfigModule4OnShow()
{
   TextButtonTextSet(&TaperValeur12, "   ");
   int  adresse=900;
   float iVal;
   static char tab[4];
   hmi_UserFlashReadEx(adresse+1, 0, 4, (char *)&iVal);
   tmp=iVal;
   //FloatToStr(tab,iVal,0);
   sprintf(tab, "%.2f", iVal);
   TextButtonTextSet(&TaperValeur12, tab);
}

