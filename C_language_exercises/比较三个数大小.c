#include <stdio.h>
int main()
{
    int a, b, c, temp;
    scanf("%d %d %d", &a,&b,&c);
    if(a>b)
    {
        temp=a;
    }else
    {
        temp=b;
    }
    if(temp>c)
    {
        printf("max=%d",temp);
    }else
    {
        printf("max=%d",c);
    }
    return 0;
}