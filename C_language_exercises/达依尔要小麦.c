#include<stdio.h>
#include<math.h>
int main()
{
    double sum=0;
    //double才存的下从1到2的64次方累加
    for(int i=0;i<64;i++)
    {
        sum+=pow(2,i);
    }
    printf("共%e粒小麦\n",sum);
    //%e是输出浮点数的指数形式的格式占位符

    return 0;
}