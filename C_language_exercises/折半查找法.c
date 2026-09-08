#include<stdio.h>
int main()
{
    int arr[15]={15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    int left=0,right=14;
    int mid=(left+right)/2;
    int data=0;
    scanf("%d",&data);
    while(1)
    {
        if(data>arr[mid])
        {
            right=mid-1;
        }
        else if(data<arr[mid])
        {
            left=mid+1;
        }
        mid=(left+right)/2;
        if(data==arr[mid])
        {
            printf("%d在数组的第%d个位置\n",data,mid+1);
            break;
        }
        else if(mid==0||mid==14)
        {
            printf("无此数");
            break;
        }
    }
    
    //自己想的，这可不是折半法哈哈
    /*int arr[15]={15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    int data;
    scanf("%d",&data);
    int index=7;
    while(1)
    {
        if(data<arr[index]) index=(index+15)/2;
        else if(data>arr[index]) index=index/2;
        if(data==arr[index])
        {
            printf("%d是数组中的第%d个元素\n",data,index+1);
            break;
        }
        else if(index==0||index==14)
        {
            printf("无此数");
            break;
        } 
    }*/
    return 0;
}