#include<stdio.h>
int main()
{
    printf("请输入一个华氏温度\n");
    double F=0,c=0;
    scanf("%lf",&F);
    c= (5*(F-32))/9.0;
    printf("摄氏温度是%.2f\n",c);
    return 0;
}