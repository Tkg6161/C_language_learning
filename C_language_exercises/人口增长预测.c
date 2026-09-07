#include<stdio.h>
int main()
{
    double population=141178;
    double rate=0.01;
    int year=0;
    for(year=2020;population<200000;year++)
    {
        population*=(1+rate);
    }
    printf("第%d能达到%e万人口",year,population);
    return 0;
}