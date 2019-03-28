char* str_sub (char *s, unsigned int start, unsigned int end)
{
   char *new_s = NULL;

   if (s != NULL && start < end)
   {
/* (1)*/
      new_s = malloc (sizeof (*new_s) * (end - start + 2));
      if (new_s != NULL)
      {
         int i;

/* (2) */
         for (i = start; i <= end; i++)
         {
/* (3) */
            new_s[i-start] = s[i];
         }
         new_s[i-start] = '\0';
      }
   }
   return new_s;
}
void readName(int *val1, int *val2, char *dest){                                  //lire le nom

   char  *val=malloc(32);
   memset(val, 0, sizeof(val));
   char *g=malloc (sizeof(char));

        //FloatToStr(val,*val1,0);
         sprintf(val, "%d", *val1);

        int i=0;

        memset(dest, 0, sizeof(dest));

        int tail=longueurChaine(val);
        bool test=false;
        if(tail%2==1)  test=true;
        for(i=0;i<tail;i+=1){
        //FloatToStr(val,*val1,0);//-------------------
         sprintf(val, "%d", *val1);
        memset(g, 0, sizeof(g));
           if (i==0 && test) {
           g[0]= val[0];
           }
           else {g=str_sub(val, i, i+1);
             i+=1;
           }

        int vl=atoi(g)+64;
        if (vl>=96) vl=vl-64;

        memset(val, 0, sizeof(val));
        if (vl!=64) val[0]= vl;
        strcat(dest, val);
        }

        i=0;
        memset(val, 0, sizeof(val));

         //FloatToStr(val,*val2,0);  //--------------------
          sprintf(val, "%d", *val2);
        tail=longueurChaine(val);
           test=false;
         if(tail%2==1)  test=true;
         // memset(dest, 0, sizeof(dest));

        for(i=0;i<tail;i+=1){
        //FloatToStr(val,*val2,0);
         sprintf(val, "%d", *val2);
        memset(g, 0, sizeof(g));
       if (i==0 && test) {
           g[0]= val[0];
           }
           else {g=str_sub(val, i, i+1);
             i+=1;
           }
        int vl=atoi(g)+64;
        if (vl>=96)  vl=vl-64;
        memset(val, 0, sizeof(val));
        if (vl!=64)  val[0]= vl;
        strcat(dest, val);
        }




        /* sprintf(val, "%d", *val1);
          memset(dest, 0, sizeof(dest));
           strcat(dest, val);    */
            //sprintf(val, "%d", *val2);
             //  strcat(dest, val);

}
void TextPushButton62OnClick(tWidget *pWidget)
{
 VAR_SET(One,8);
 VAR_SET(NextF,1);
 hmi_GotoFrameByName("Clavier");
}

void TestClavier61OnShow()
{



   int   iVal;
   int   iVal1;

   char *dest=malloc(16);


    hmi_UserFlashReadEx(8, 0, 4, (char *)&iVal1);
    hmi_UserFlashReadEx(8, 5, 4, (char *)&iVal);

    readName(&iVal1, &iVal, dest);
    TextButtonTextSet(&TextPushButton62,dest);
      WidgetPaint((tWidget*)&TextPushButton62);

}


