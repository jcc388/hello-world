#include<stdio.h>

int main()
{
 float h, w, bmi;
 printf("Input weight (unit : kg)? ");
 scanf("%f",&w);
 printf("Input height (unit : meter)? ");
 scanf("%f",&h);
 bmi = w / ( h*h );
 printf("BMI 為 %f, ",bmi);
 if(bmi < 18.5) printf("過輕\n");
 else if(18.5 <= bmi && bmi < 24) printf("標準\n");
 else printf("過重\n");
}
