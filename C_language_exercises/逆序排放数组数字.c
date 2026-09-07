#include<stdio.h>
#include<stdlib.h>
int main()
{
    /*int arr[4];
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
    }*/

    int n;
    scanf("%d",&n);
    int* arr=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n/2;j++)
    {
        int temp=arr[j];
        arr[j]=arr[n-1-j];
        arr[n-1-j]=temp;
    }
    for(int k=0;k<n;k++)
    {
        printf("%d ",arr[k]);
    }



    return 0;
}