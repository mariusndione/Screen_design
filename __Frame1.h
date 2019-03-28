tPushButtonWidget *pb[39];
tPaintBoxWidget *pbox[14];

#define PB_COUNT() (sizeof(pb)/sizeof(pb[0]))

void Frame12OnCreate()
{
   pb[0] = &TextPushButton6;   //0
   pb[1] = &TextPushButton11;  //1
   pb[2] = &TextPushButton14;  //2
   pb[3] = &TextPushButton15;  //3
   pb[4] = &TextPushButton18;  //4
   pb[5] = &TextPushButton19;  //5
   pb[6] = &TextPushButton22;  //6
   pb[7] = &TextPushButton23;  //7
   pb[8] = &TextPushButton42;  //8
   pb[9] = &TextPushButton43;  //9
   pb[10] = &TextPushButton48; //A
   pb[11] = &TextPushButton74; //B
   pb[12] = &TextPushButton70; //C
   pb[13] = &TextPushButton52; //D
   pb[14] = &TextPushButton32; //E
   pb[15] = &TextPushButton53; //F
   pb[16] = &TextPushButton56; //G
   pb[17] = &TextPushButton58; //H
   pb[18] = &TextPushButton41; //I
   pb[19] = &TextPushButton59; //J
   pb[20] = &TextPushButton62; //K
   pb[21] = &TextPushButton63; //L
   pb[22] = &TextPushButton77; //M
   pb[23] = &TextPushButton76; //N
   pb[24] = &TextPushButton44; //O
   pb[25] = &TextPushButton45; //P
   pb[26] = &TextPushButton28; //Q
   pb[27] = &TextPushButton33; //R
   pb[28] = &TextPushButton49; //S
   pb[29] = &TextPushButton36; //T
   pb[30] = &TextPushButton40; //U
   pb[31] = &TextPushButton71; //V
   pb[32] = &TextPushButton29; //W
   pb[33] = &TextPushButton67; //X
   pb[34] = &TextPushButton37; //Y
   pb[35] = &TextPushButton66; //Z
   pb[36] = &TextPushButton25; //backspace
   pb[37] = &TextPushButton79; //cancel
   pb[38] = &TextPushButton80; //enter
}

static char temp[100];
static char starsign[15];
static int flag;

void TextPushButton6OnClick(tWidget *pWidget)
{
  static int currNum = -1;

  char str[10];

  for(int i = 0 ; i < PB_COUNT() ; i++)
  {
     if(pWidget != (tWidget*)pb[i]) continue;
     flag = 1;

     if(i < 10)
     {
       if(strlen(temp) > 9) break;
       if(strlen(starsign) < 1)
       {
         usnprintf(str, sizeof(str), "%d", i);
         strcat(temp , str) ;
         LabelTextSet(&Label65, temp);
       }
       else
       {
         usnprintf(str, sizeof(str), "%d", i);
         strcat(temp , str) ;
         strcat(starsign, str);
         LabelTextSet(&Label65, starsign);
       }

       WidgetPaint((tWidget*)&Label65);
       currNum++;
       if(currNum > 9) currNum = 9;
     }
     else if((i >= 10) && (i <= 35))
     {
        if(strlen(temp) > 9) break;
        if(strlen(starsign) < 1)
        {
          usnprintf(str, sizeof(str), "%c", i+55);
          strcat(temp, str);
          LabelTextSet(&Label65, temp);
        }
        else
        {
          usnprintf(str, sizeof(str), "%c", i+55);
          strcat(temp, str);
          strcat(starsign, str);
          LabelTextSet(&Label65, starsign);
        }

        WidgetPaint((tWidget*)&Label65);
        currNum++;
        if(currNum > 9) currNum = 9;
     }
     else if( i == 36)
     {
        currNum--;
        if(currNum < 0) currNum = 0;
        temp[currNum] = 0;
        starsign[currNum] = 0;

        if(strlen(starsign) < 1) LabelTextSet(&Label65, temp);
        else LabelTextSet(&Label65, starsign);

        WidgetPaint((tWidget*)&Label65);
     }
     else if( i == 37)
     {
        temp[0] = 0;
        starsign[0] =0 ;
        currNum = 0;
        LabelTextSet(&Label65, starsign);
        WidgetPaint((tWidget*)&Label65);
     }
     else if(i == 38)
     {
        char pasword[] = "2018ICPDAS";

        if(strcmp(pasword, temp) == 0)
        {
           LabelTextSet(&Label65, "Password Correct!");
           WidgetPaint((tWidget*)&Label65);
        }
        else
        {
           LabelTextSet(&Label65, "Password Error!");
           WidgetPaint((tWidget*)&Label65);
        }
           temp[0] = 0;
           starsign[0] = 0;
           currNum = 0;
     }
  }
}

