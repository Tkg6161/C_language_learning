#include<stdio.h>
int main()
{
    double score=0;
    double sum=0;
    int i=0;
    for(i=0;i<30;i++)
    {
        scanf("%lf",&score);
        if(score<0) break;
        sum+=score;
    }
    double aver=sum/i;
    printf("平均成绩为%f",aver);
    
    return 0;
}