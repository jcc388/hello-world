#include <stdio.h>
#include <stdlib.h>
int main()
 {
  int i;


  char asterismdate[24][6]={ "01.21", "02.18", "02.19", "03.20",
                              "03.21", "04.20", "04.21", "05.20",
                              "05.21", "06.21", "06.22", "07.22",
                              "07.23", "08.22", "08.23", "09.22",
                              "09.23", "10.23", "10.24", "11.22",
                              "11.23", "12.21", "12.22", "01.20"  };


  char asterism[12][7] = { "水瓶座", "雙魚座", "牡羊座",
                           "金牛座", "雙子座", "巨蟹座",
                           "獅子座", "處女座", "天秤座",
                           "天蠍座", "射手座", "魔羯座" };

  char borndate[6];
  printf("在此輸入出生月日(格式:月份.日期):");
  scanf("%5s", borndate);
  for (i = 0; i<=11 ; i++)
     if (strcmp(borndate,asterismdate[2*i])>=0 &&
         strcmp(borndate,asterismdate[2*i+1])<=0)
      {
        printf("星座為:%s\n", asterism[i]);
        break;
      }
     if (i == 12)
           printf("星座為:魔羯座\n");

  return 0;
 }
