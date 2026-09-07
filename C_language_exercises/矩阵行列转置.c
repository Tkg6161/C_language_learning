#include<stdio.h>
int main()
{   
    //需要另一个数组来存储转置后的矩阵
    int arr[2][3]={{1,2,3,},{78,9,5}};
    int arr2[3][2];

     for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr2[j][i]=arr[i][j];
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}