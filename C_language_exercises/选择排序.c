#include <stdio.h>
int main()
{
    int age[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&age[i]);
    }
    for(int i=0;i<9;i++)
    {
        int index=i;
        for(int j=i+1;j<10;j++)
        {
            if(age[j]<age[index]) index=j;
        }
        int temp=age[index];
        age[index]=age[i];
        age[i]=temp;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",age[i]);
    }
    return 0;
}