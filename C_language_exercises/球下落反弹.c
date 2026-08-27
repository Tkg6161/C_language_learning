#include<stdio.h>
int main()
{
    double h=100;
    double sum=0;
    sum=h;
    for(int i=2;i<=10;i++)
    {
        h=h/2;
        sum=sum+h*2;
    }
    h=h/2;
    printf("第10次落地时共经过%lf米\n第10次反弹高度为%lf米\n",sum,h);


    return 0;
}