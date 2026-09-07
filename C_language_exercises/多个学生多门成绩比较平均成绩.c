#include<stdio.h>
int main()
{
    double score[3][6];
    double max=0;
    int max_i=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%lf",&score[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        double sum=0;
        for(int j=0;j<5;j++)
        {
            sum+=score[i][j];
        }
        score[i][5]=sum/5;
    }
    for(int i=0;i<3;i++)
    {
       
        if(score[i][5]>max)
        {
            max_i=i;
            max=score[i][5];
        }
    }
    printf("第%d个同学的平均成绩最高为%f\n",max_i+1,max);
    

    return 0;
}