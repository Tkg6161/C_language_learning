#include<stdio.h>
int main()
{
    int n=1;
    for(int i=1;i<=9;i++)
    {
        n=2*(n+1);
    }
    printf("%d\n",n);
    return 0;
}