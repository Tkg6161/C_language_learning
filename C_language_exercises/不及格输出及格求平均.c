#include<stdio.h>
int main()
{
    double score=0;
    double sum=0;
    int i=0,count=0;
    for(i=0;i<30;i++)
    {
        scanf("%lf",&score);
        if(score<0) break;
        if(score>0&&score<60) printf("%.2f\n",score);
        else if(score>=60&&score<=100)
        {
            sum+=score;
            count++;
        }
    }
    printf("及格同学的平均成绩是%.2f\n",sum/count);
    return 0;
}