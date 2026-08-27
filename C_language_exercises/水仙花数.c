#include <stdio.h>
#include <math.h>
int main()
{
    int key1=10,key2=1;
    int sum=0;
    int index;
    for(int num=100;num<=999;num++)
    {
        sum=0;
        key1=10;
        key2=1;
        while(num/key2!=0)
        {
            index=num%key1/key2;
            key1*=10;
            key2*=10;
            sum=sum+pow(index,3);
        }
        if(sum==num) printf("%d\n",num);
    }
}