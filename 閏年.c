#include<stdio.h>
int main() {
    int year;
    printf("�b����J�褸�~��");//
    scanf("%d",&year);//
    if(year%400==0||(year%4==0&&year%100!=0)){
       printf("%d�O�|�~\n",year);
    }else{
       printf("%d���O�|�~\n",year);
    }
}
