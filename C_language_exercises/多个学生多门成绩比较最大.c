#include<stdio.h>
int main()
{
    double score[3][5];
    double max=0;int max_i=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%lf",&score[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(score[i][j]>max)
            {
                max=score[i][j];
                max_i=i;
            }
        }
    }
    printf("第%d个同学的其中一门成绩最高为%.2f\n",max_i+1,max);

    return 0;
}