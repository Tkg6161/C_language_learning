#include<stdio.h>
#include<math.h>
int main()
{
    int k;int i;
    for(int num=100;num<=200;num++)
    {
        k=sqrt(num);
        for(i=2;i<=k;i++)
        {
            if(num%i==0) break;
        }
        if(i>k) printf("%d\n",num);
    }
    return 0;
}