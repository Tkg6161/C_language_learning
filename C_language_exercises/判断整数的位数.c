#include<stdio.h>
#include<math.h>
int main()
{
    int num=0;
    scanf("%d",&num);
    int key1=10,key2=1;
    int index=0;
    int count=0;
    while(num/key2!=0)
    {
        index=num%key1/key2;
        count++;
        key1*=10;
        key2*=10;
    
    }
    if(num==0) printf("0没有位数\n");
    else printf("%d有%d位数\n",num,count);
    
    return 0;

}