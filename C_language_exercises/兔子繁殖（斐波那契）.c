#include<stdio.h>
int main()
{
    //迭代法
    /*
    long f1=1,f2=1;
    for(int i=0;i<19;i++)
    {
        f1=f1+f2;
        f2=f1+f2;
    }
    printf("第40个月兔子总数为%ld\n",f2);
    */

    long f(int n);
    printf("第40个月兔子总数为%ld\n",f(40));

    return 0;
}

//函数递归法
long f(int n)
{
    if(n==1||n==2) return 1;
    return f(n-1)+f(n-2);
}