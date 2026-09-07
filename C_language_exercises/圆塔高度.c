#include<stdio.h>
#include<math.h>
int main()
{
    double x=0,y=0;
    double height=0;
    scanf("%lf%lf",&x,&y);

    x=fabs(x);y=fabs(y);
    //绝对值函数的知识点
    //头文件<stlib.h>对应整型变量 int->abs() long->labs()
    //头文件<math.h>对应浮点型变量 float->fabsf() double->fabs()


    if(pow(x-2,2)+pow(y-2,2)<=1)
    {
        height=10;
    }
    else height=0;
    printf("高度为%fm\n",height);

    return 0;
}