////////////////////////////////////////////////////////////////////////////
int tail;
void InverserStr(char *machaine){
    int i = 0, j = strlen(machaine) - 1;
    char tmp;

    while(i < j){
        tmp= machaine[i];
        machaine[i] = machaine[j];
        machaine[j] = tmp;
        i++;
        j--;
    }
}


void TextPushButton250OnClick(tWidget *pWidget)
{
   const char * str1;
   char * str2="1" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label223, result);
   free(result) ;
   tail++;
}


void TextPushButton282OnClick(tWidget *pWidget)
{
   char t[4];
   char t2[4];
   char tt[4];
   int l;
   static char str1[4];
   static char strll[16];
   const char *p;
   int adresseMemo;
   int adresseNextF;
   VAR_GET(One);
   sprintf(strll, "%d", One);
   adresseMemo=atoi(strll);
   VAR_GET(NextF);
   sprintf(str1, "%d", NextF);
   adresseNextF=atoi(str1);
   memset(p, '\0', sizeof(p));
   p = LabelTextGet(&Label223);
   memset(t, '\0', sizeof(t));
   memset(t2, '\0', sizeof(t2));
   if (tail>4){
      strncpy(t,p,4);
      InverserStr(p);
      l=strlen(p);
      strncpy(t2,p,l-4);
      InverserStr(t2);
      InverserStr(p);
      hmi_UserFlashErase(adresseMemo);
      hmi_UserFlashWriteEx(adresseMemo, 0, 4, &t);
      hmi_UserFlashWriteEx(adresseMemo, 5, 4, &t2);
   }
   else{

      strcpy(tt,p);
      hmi_UserFlashErase(adresseMemo);
      hmi_UserFlashWriteEx(adresseMemo, 0, 4, &tt);
      hmi_UserFlashWriteEx(adresseMemo, 5, 4, &t2);
   }

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



void TextPushButton224OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="A" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label223, result);
   free(result) ;
   tail++;
}





void TextPushButton225OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="Z" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label223, result);

   free(result) ;
   tail++;
}


void TextPushButton226OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="E" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
    LabelTextSet(&Label223, result);
   free(result) ;
   tail++;
}


void TextPushButton227OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="R" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
    strcat(result,str2);
    LabelTextSet(&Label223, result);
   free(result) ;
   tail++;
}


void TextPushButton228OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="T" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
    strcat(result,str2);
    LabelTextSet(&Label223, result);
   free(result) ;
   tail++;
}


void TextPushButton229OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="Y" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label223, result);

   free(result) ;
   tail++;
}


void TextPushButton230OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="U" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label223, result);

   free(result) ;
   tail++;
}


void TextPushButton231OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="I" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label223, result);

   free(result) ;
   tail++;
}


void TextPushButton232OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="O" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label223, result);

   free(result) ;
   tail++;
}


void TextPushButton233OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="P" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
     strcat(result,str2);
     LabelTextSet(&Label223, result);

   free(result) ;
   tail++;
}


void TextPushButton234OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="Q" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
    strcat(result,str2);
    LabelTextSet(&Label223, result);

   free(result) ;
   tail++;
}


void TextPushButton235OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="S" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
    strcat(result,str2);
    LabelTextSet(&Label223, result);

   free(result) ;
   tail++;
}


void TextPushButton236OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="D" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
    LabelTextSet(&Label223, result);

   free(result) ;
   tail++;
}


void TextPushButton237OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="F" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
    LabelTextSet(&Label223, result);

   free(result) ;
   tail++;
}


void TextPushButton238OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="G" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label223, result);


   free(result) ;
   tail++;
}


void TextPushButton239OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="H" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
    strcat(result,str2);
      LabelTextSet(&Label223, result);


   free(result) ;
   tail++;
}


void TextPushButton240OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="J" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label223, result);

   free(result) ;
   tail++;
}


void TextPushButton241OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="K" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label223, result);

   free(result) ;
   tail++;
}


void TextPushButton242OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="L" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label223, result);


   free(result) ;
   tail++;
}


void TextPushButton243OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="M" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
    strcat(result,str2);
   LabelTextSet(&Label223, result);

   free(result) ;
   tail++;
}


void TextPushButton244OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="W" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label223, result);


   free(result) ;
   tail++;
}


void TextPushButton245OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="X" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label223, result);


   free(result) ;
   tail++;
}


void TextPushButton246OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="C" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label223, result);


   free(result) ;
   tail++;
}


void TextPushButton247OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="V" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label223, result);


   free(result) ;
   tail++;
}


void TextPushButton248OnClick(tWidget *pWidget)
{
  const char * str1; ;
   char * str2="B" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
    LabelTextSet(&Label223, result);


   free(result) ;
   tail++;
}


void TextPushButton249OnClick(tWidget *pWidget)
{
  const char * str1; ;
   char * str2="N" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label223, result);


   free(result) ;
   tail++;
}


void TextPushButton256OnClick(tWidget *pWidget)
{
    tail=0;
      LabelTextSet(&Label223, "");

}


void TextPushButton251OnClick(tWidget *pWidget)
{
    const char * str1; ;
   char * str2="2" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label223, result);


   free(result) ;
   tail++;
}


void TextPushButton252OnClick(tWidget *pWidget)
{
    const char * str1; ;
   char * str2="3" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label223, result);


   free(result) ;
   tail++;
}


void TextPushButton253OnClick(tWidget *pWidget)
{
    const char * str1; ;
   char * str2="4" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
    LabelTextSet(&Label223, result);


   free(result) ;
   tail++;
}


void TextPushButton254OnClick(tWidget *pWidget)
{
    const char * str1; ;
   char * str2="5" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label223, result);


   free(result) ;
   tail++;
}


void TextPushButton255OnClick(tWidget *pWidget)
{
    const char * str1; ;
   char * str2="6" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
    LabelTextSet(&Label223, result);


   free(result) ;
   tail++;
}


void TextPushButton257OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="7" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label223, result);


   free(result) ;
   tail++;
}


void TextPushButton258OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="8" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
    LabelTextSet(&Label223, result);

   free(result) ;
   tail++;
}


void TextPushButton262OnClick(tWidget *pWidget)
{
   const char * str1; ;
   char * str2="0" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label223, result);

   free(result) ;
   tail++;
}


void TextPushButton261OnClick(tWidget *pWidget)
{
     const char * str1; ;
   char * str2="9" ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label223, result);

   free(result) ;
   tail++;
}


void TextPushButton265OnClick(tWidget *pWidget)
{
  const char * str1; ;
   char * str2=" " ;
   str1=LabelTextGet(&Label223);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label223, result);
   free(result) ;
   tail++;
}

//////////////////////////////////////////////////////////////////////////////

int tick;
void Timer292OnExecute(tWidget *pWidget)
{

}

void Clavier44OnShow()
{

}

void Clavier44OnCreate()
{
   LabelTextSet(&Label223, "");
}

void Clavier44OnDestroy()
{
   LabelTextSet(&Label223, "");
}
