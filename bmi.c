#include<stdio.h>

int main()
{
 float h, w, bmi;
 printf("Input weight (unit : kg)? ");
 scanf("%f",&w);
 printf("Input height (unit : meter)? ");
 scanf("%f",&h);
 bmi = w / ( h*h );
 printf("BMI �� %f, ",bmi);
 if(bmi < 18.5) printf("�L��\n");
 else if(18.5 <= bmi && bmi < 24) printf("�з�\n");
 else printf("�L��\n");
}
