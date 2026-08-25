#include<stdio.h>
int main()
{
    int d=324500;
    int p=3245;
    double r=0.008;
    int m=0;
    while(d>0)
    {
        d=d-(p-d*r);
        m++;
    }
    printf("month=%d",m);
    return 0;
}