int extern  adresseLogique;
void Alerte120OnShow()
{
   int log;
   if ( hmi_UserFlashConfig(1792) == 1792 ){
      hmi_UserFlashReadEx(adresseLogique, 0, 4,(char *)&log);
      if(log==1){
      LabelTextSet(&Label121 ,"Choisissez une valeur > à la precedente ");
      }
      else{
      LabelTextSet(&Label121 ,"Choisissez une valeur < à la precedente ");
      }
   }
}

void TextPushButton122OnClick(tWidget *pWidget)
{
 hmi_GotoFrameByName("Seuillage");
}
