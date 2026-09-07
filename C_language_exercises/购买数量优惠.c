#include<stdio.h>
int main()
{
    int num=0;
    double price=0;
    double cost=0;
    double pay;
    printf("请分别输入购买数量和物品单价\n");
    scanf("%d%lf",&num,&price);
    
    //if语句实现优惠
    /*
    if(num>=50&&num<100) cost=0.05;
    else if(num>=100&&num<300) cost=0.075;
    else if(num>=300&&num<500) cost=0.1;
    else if(num>=500) cost=0.15;
    */

    //switch语句实现优惠
    int c=num/50;
    if(c>10) c=10;
    switch(c)
    {
        case 1:cost=0.05;break;
        case 2:
        case 3:
        case 4:
        case 5:cost=0.075;break;
        case 6:
        case 7:
        case 8:
        case 9:cost=0.1;break;
        case 10:cost=0.15;break;
        default:break;    
    }

    pay=num*price*(1-cost);
    printf("你需要付款%f\n",pay);
    return 0;

}
