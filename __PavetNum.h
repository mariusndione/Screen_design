int tail=0;
void Timer132OnExecute(tWidget *pWidget)
{

}

void Zero25OnClick(tWidget *pWidget)
{
   const char * str1 ;
   char * str2="0" ;
   str1=LabelTextGet(&Label15);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label15, result);
   free(result) ;
   tail++;
}

void Un22OnClick(tWidget *pWidget)
{
   const char * str1 ;
   char * str2="1" ;
   str1=LabelTextGet(&Label15);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label15, result);
   free(result) ;
   tail++;
}

void Deux23OnClick(tWidget *pWidget)
{
   const char * str1 ;
   char * str2="2" ;
   str1=LabelTextGet(&Label15);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label15, result);
   free(result) ;
   tail++;
}

void Trois24OnClick(tWidget *pWidget)
{
   const char * str1 ;
   char * str2="3" ;
   str1=LabelTextGet(&Label15);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label15, result);
   free(result) ;
   tail++;
}

void Quatre19OnClick(tWidget *pWidget)
{
   const char * str1 ;
   char * str2="4" ;
   str1=LabelTextGet(&Label15);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label15, result);
   free(result) ;
   tail++;
}

void Cinq20OnClick(tWidget *pWidget)
{
   const char * str1 ;
   char * str2="5" ;
   str1=LabelTextGet(&Label15);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label15, result);
   free(result) ;
   tail++;
}

void Six21OnClick(tWidget *pWidget)
{
   const char * str1 ;
   char * str2="6" ;
   str1=LabelTextGet(&Label15);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label15, result);
   free(result) ;
   tail++;
}

void Sept16OnClick(tWidget *pWidget)
{
   const char * str1 ;
   char * str2="7" ;
   str1=LabelTextGet(&Label15);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label15, result);
   free(result) ;
   tail++;
}

void Huit17OnClick(tWidget *pWidget)
{
   const char * str1 ;
   char * str2="8" ;
   str1=LabelTextGet(&Label15);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label15, result);
   free(result) ;
   tail++;
}

void Neuf18OnClick(tWidget *pWidget)
{
   const char * str1 ;
   char * str2="9" ;
   str1=LabelTextGet(&Label15);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label15, result);
   free(result) ;
   tail++;
}

void Supprime28OnClick(tWidget *pWidget)
{
   const char *str1="" ;
   LabelTextSet(&Label15, str1);
}

void Entrer26OnClick(tWidget *pWidget)
{
   char tab[32]={0};
   static char str1[4];
   static char strll[16];
   static const char *p;
   int adresseMemo;
   int adresseNextF;
   p = LabelTextGet(&Label15);
   strcpy(tab,p);
   float pfloat=strtof(p,NULL);
   VAR_GET(One);
   sprintf(strll, "%d", One);
   adresseMemo=atoi(strll);
   VAR_GET(NextF);
   sprintf(str1, "%d", NextF);
   adresseNextF=atoi(str1);
   hmi_UserFlashErase(adresseMemo);
   hmi_UserFlashWriteEx(adresseMemo, 0, 4, (char *)&pfloat);

   if (adresseNextF==1) {
         hmi_GotoFrameByName("ConfigModule");

     }
   if (adresseNextF==2) {
         hmi_GotoFrameByName("ConfigCapteur");
     }
   if (adresseNextF==3) {
         hmi_GotoFrameByName("Etalonnage");
     }
   if (adresseNextF==4) {
         hmi_GotoFrameByName("Seuillage");
     }
   if (adresseNextF==5) {
         hmi_GotoFrameByName("SeuilUn");
     }

   tail=0;


}


void PavetNum14OnCreate()
{
     TimerEnabledSet(&Timer132,1);
      if ( hmi_UserFlashConfig(1792) == 1792 )
          LabelTextSet(&Label15, "");
}

void PavetNum14OnDestroy()
{
   LabelTextSet(&Label15, "");
}

void Point27OnClick(tWidget *pWidget)
{
   const char * str1 ;
   char * str2="." ;
   str1=LabelTextGet(&Label15);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label15, result);
   free(result) ;
   tail++;
}

void PavetNum14OnShow()
{

}

void resetColorButton(int pos){
   switch (pos) {
      case 1:
            PushButtonFillColorSet(&Sept16,0xFFFFFF);
            WidgetPaint((tWidget*)&Sept16);
      break;
      case 2:
            PushButtonFillColorSet(&Huit17,0xFFFFFF);
            WidgetPaint((tWidget*)&Huit17);
      break;
      case 3:
            PushButtonFillColorSet(&Neuf18,0xFFFFFF);
            WidgetPaint((tWidget*)&Neuf18);
      break;
      case 4:
            PushButtonFillColorSet(&Quatre19,0xFFFFFF);
            WidgetPaint((tWidget*)&Quatre19);
      break;
      case 5:
         PushButtonFillColorSet(&Cinq20,0xFFFFFF);
         WidgetPaint((tWidget*)&Cinq20);
      break;
      case 6:
         PushButtonFillColorSet(&Six21,0xFFFFFF);
         WidgetPaint((tWidget*)&Six21);
      break;
      case 7:
         PushButtonFillColorSet(&Un22,0xFFFFFF);
         WidgetPaint((tWidget*)&Un22);
      break;
      case 8:
         PushButtonFillColorSet(&Deux23,0xFFFFFF);
         WidgetPaint((tWidget*)&Deux23);
      break;
      case 9:
         PushButtonFillColorSet(&Trois24,0xFFFFFF);
         WidgetPaint((tWidget*)&Trois24);
      break;
      case 10:
         PushButtonFillColorSet(&Zero25,0xFFFFFF);
         WidgetPaint((tWidget*)&Zero25);

      break;
      case 11:

         PushButtonFillColorSet(&Point27,0xFFFFFF);
         WidgetPaint((tWidget*)&Point27);
      break;
      case 12:

         PushButtonFillColorSet(&Entrer26,0xFFFFFF);
         WidgetPaint((tWidget*)&Entrer26);
      break;
      case 13:

         PushButtonFillColorSet(&Supprime28,0xFFFFFF);
         WidgetPaint((tWidget*)&Supprime28);
      break;
   }



}

