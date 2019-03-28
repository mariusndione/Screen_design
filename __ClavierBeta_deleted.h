void Timer198OnExecute(tWidget *pWidget)
{

}

void ClavierBeta63OnShow()
{

}




/*//////////////////////////////////////////////////////////////


int tail;
 char g[16];
static char tab[16];
static char strl[16];
static char strll[16];
static char str1[4];
static char str[16];
int adresseNextF;
void ClavierBeta63OnShow()
{
   VAR_GET(NextF);
   sprintf(str1, "%d", NextF);
   adresseNextF=atoi(str1);
   LabelTextSet(&Label65, "");
   tail=0;
  //  result=malloc(strlen(10)+2);
}

int tick;
void Timer198OnExecute(tWidget *pWidget)
{
     int reading=-1;
          reading = hmi_ReadPanelKey();
          if (reading==16 && tick==1)  {
          tick=0;
           TextPushButton282OnClick(&TextPushButton282);
          }
          else if(reading==0) tick=1;
}

void TextPushButton250OnClick(tWidget *pWidget)
{
    char * str1 ;
   char * str2="1" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label66, result);
   if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }
   free(result) ;
   tail++;
}

static char *p;
char t[18];
void TextPushButton282OnClick(tWidget *pWidget)
{

     p = LabelTextGet(&Label66);
       char * Mo;
       Mo= LabelTextGet(&Label66);
       LabelTextSet(&Label66,"");
       strcpy(t,p);

        float val1;
        float val2;


   VAR_GET(One);
   sprintf(strll, "%d", One);
   int adresseMemo=atoi(strll);


   /* VAR_GET(NextF);
   sprintf(str1, "%d", NextF);
   int adresseNextF=atoi(str1);
   getValName( t,&adresseMemo) ;


         hmi_GotoFrameByName("TestClavier");

     tail=0;





        //free(dest) ;





}


 void getValName( char *j,int *adresseMemo){

    // char t[16];
     char t1[32];
     char g[32];
     int tail1=strlen(j);//*tail;
     //char tab[16];
     //int tab[16];
    // strcpy(t,j);
     // LabelTextSet(&Label66,"");
      char *dest=malloc(sizeof(char *)*32);
        char *g1=malloc(32);
      memset(dest,0,sizeof(dest));
       memset(t1,0,sizeof(t1));
        memset(g1,0,sizeof(g1));

       int i=0;
        int a;
       // tail=tail/2;
  for (i=0;i<tail1;i++){
      char b=*(j+i);
      if ((int)(*(j+i))>=64) a=(int)(*(j+i))-64;
      else  a=(int)(*(j+i));
      memset(t1,0,sizeof(t1));
      sprintf(t1, "%02u", a);
      strcat(dest,t1);

   }
   //strcpy(tab,dest);
   //int d=1;

   tail1=tail1*2;
   float pfloat1=0;
   float pfloat2=0;
   int h=0;
   hmi_UserFlashErase(*adresseMemo);
    if (tail1<=10){

      pfloat1=strtof(dest,NULL);
      int a= atoi(dest);
       int b= 0;
     hmi_UserFlashWriteEx(*adresseMemo, 0, 4, (char *)&a);
      hmi_UserFlashWriteEx(*adresseMemo, 5, 4, (char *)&b);

      }
      else {

         for(h=0;h<10;h++){         //pas plus d'un nom de 16 caractères
           char b=*(dest+h);
          g[h]=b;

         }
       pfloat1=strtof(g,NULL);
        int a= atoi(g);

       hmi_UserFlashWriteEx(*adresseMemo, 0, 4, (char *)&a);

           memset(g, 0, sizeof(g));
           for(h=10;h<tail1;h++){         //pas plus d'un nom de 16 caractères
           char b=*(dest+h);
          g[h-10]=b;

         }

     pfloat2=strtof(g,NULL);
        int b= atoi(g);

     hmi_UserFlashWriteEx(*adresseMemo, 5, 4, (char *)&b);


      }
      //FloatToStr(g1,pfloat1,0);
      // LabelTextSet(&Label66,g1);
 }
void TextPushButton224OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="A" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label66, result);


  if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}





void TextPushButton225OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="Z" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label66, result);
   if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton226OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="E" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
    LabelTextSet(&Label66, result);
    if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton227OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="R" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
    strcat(result,str2);
    LabelTextSet(&Label66, result);
    if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton228OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="T" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
    strcat(result,str2);
    LabelTextSet(&Label66, result);
   if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton229OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="Y" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label66, result);
    if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton230OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="U" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label66, result);
    if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton231OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="I" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label66, result);
    if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton232OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="O" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label66, result);
     if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }
   free(result) ;
   tail++;
}


void TextPushButton233OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="P" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
     strcat(result,str2);
     LabelTextSet(&Label66, result);
    if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton234OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="Q" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
    strcat(result,str2);
    LabelTextSet(&Label66, result);
    if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton235OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="S" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
    strcat(result,str2);
    LabelTextSet(&Label66, result);
   if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton236OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="D" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
    LabelTextSet(&Label66, result);
   if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton237OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="F" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
    LabelTextSet(&Label66, result);
    if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton238OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="G" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label66, result);
    if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton239OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="H" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
    strcat(result,str2);
      LabelTextSet(&Label66, result);
     if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton240OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="J" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label66, result);
     if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton241OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="K" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label66, result);
   if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton242OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="L" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label66, result);
     if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton243OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="M" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
    strcat(result,str2);
   LabelTextSet(&Label66, result);
    if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }
   free(result) ;
   tail++;
}


void TextPushButton244OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="W" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label66, result);
     if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton245OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="X" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label66, result);
    if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton246OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="C" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label66, result);
   if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton247OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="V" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label66, result);
    if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton248OnClick(tWidget *pWidget)
{
  char * str1 ;
   char * str2="B" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
    LabelTextSet(&Label66, result);
   if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton249OnClick(tWidget *pWidget)
{
  char * str1 ;
   char * str2="N" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label66, result);
    if(adresseNextF==1){
   static char TAB[8];
    memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton256OnClick(tWidget *pWidget)
{
    tail=0;
      LabelTextSet(&Label66, "");
        LabelTextSet(&Label65, "");

}


void TextPushButton251OnClick(tWidget *pWidget)
{
    char * str1 ;
   char * str2="2" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label66, result);
    if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton252OnClick(tWidget *pWidget)
{
    char * str1 ;
   char * str2="3" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label66, result);
    if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton253OnClick(tWidget *pWidget)
{
    char * str1 ;
   char * str2="4" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
    LabelTextSet(&Label66, result);
    if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton254OnClick(tWidget *pWidget)
{
    char * str1 ;
   char * str2="5" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label66, result);
    if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton255OnClick(tWidget *pWidget)
{
    char * str1 ;
   char * str2="6" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
    LabelTextSet(&Label66, result);
    if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton257OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="7" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label66, result);
    if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton258OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="8" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
    LabelTextSet(&Label66, result);
    if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton262OnClick(tWidget *pWidget)
{
   char * str1 ;
   char * str2="0" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label66, result);
    if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton261OnClick(tWidget *pWidget)
{
     char * str1 ;
   char * str2="9" ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label66, result);
   if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}


void TextPushButton265OnClick(tWidget *pWidget)
{
  char * str1 ;
   char * str2=" " ;
   str1=LabelTextGet(&Label66);
   char *result=malloc(strlen(str1)+2);
   strcpy(result,str1) ;
   strcat(result,str2);
   LabelTextSet(&Label66, result);
    if(adresseNextF==1){
   static char TAB[8];
   memset(TAB,0,8);
   for(int i=0;i<tail+1;i++){
      strcat(TAB,"*");
   }
    LabelTextSet(&Label65, TAB);
   }

   free(result) ;
   tail++;
}








*/////////////////////////////////////////////////////////////////