#include<stdio.h>
int main()
{
    int arr[4];
    for(int i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<(4/2);j++)
    {
        int temp=arr[j];
        arr[j]=arr[3-j];
        arr[3-j]=temp;
        
    }
    for(int k=0;k<4;k++)
    {
        printf("%d ",arr[k]);
    }
    return 0;
}