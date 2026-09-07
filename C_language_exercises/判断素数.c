#include<stdio.h>
#include<math.h>
int main()
{
    int num=0;
    scanf("%d",&num);
    int k=sqrt(num);
    int i;
    for(i=2;i<=k;i++)
    {
        if(num%2==0) break;
    }
    if(i<=k) printf("%d不是素数\n",num);
    else if(i>k) printf("%d是素数\n",num);
    return 0;
}