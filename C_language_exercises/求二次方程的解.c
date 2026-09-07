#include <stdio.h>
#include<math.h>
int main()
{
    double a=0,b=0,c=0;
    scanf("%lf%lf%lf",&a,&b,&c);
    double t=b*b-4*a*c;
    double m=-b/(2*a);
    double n=sqrt(t)/(2*a);
    
    if(t>0) printf("有两个实数解分别为%.2f %.2f\n",m+n,m-n);
    else if(t==0) printf("有一个实数解为%.2f\n",m+n);
    else if(t<0) printf("方程无解\n");

    return 0;
}