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


  char asterism[12][7] = { "���~�y", "�����y", "�d�Ϯy",
                           "�����y", "���l�y", "���ɮy",
                           "��l�y", "�B�k�y", "�ѯ��y",
                           "���Ȯy", "�g��y", "�]�~�y" };

  char borndate[6];
  printf("�b����J�X�ͤ��(�榡:���.���):");
  scanf("%5s", borndate);
  for (i = 0; i<=11 ; i++)
     if (strcmp(borndate,asterismdate[2*i])>=0 &&
         strcmp(borndate,asterismdate[2*i+1])<=0)
      {
        printf("�P�y��:%s\n", asterism[i]);
        break;
      }
     if (i == 12)
           printf("�P�y��:�]�~�y\n");

  return 0;
 }
