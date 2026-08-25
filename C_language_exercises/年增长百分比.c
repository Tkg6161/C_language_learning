#include<math.h>
#include<stdio.h>
int main()
{
    double rate=0.1;
    int years=10;
    double p=pow(1+rate,years);
    printf("p=%f",p);
    return 0;
}