#include<stdio.h>
int main() {
    int year;
    printf("在此輸入西元年份");//
    scanf("%d",&year);//
    if(year%400==0||(year%4==0&&year%100!=0)){
       printf("%d是閏年\n",year);
    }else{
       printf("%d不是閏年\n",year);
    }
}
