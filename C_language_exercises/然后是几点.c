#include<stdio.h>
int main()
{
    /*//自己做的，对hour minute分别处理
    int start =0;
    scanf("%d",&start);
    int change =0;
    scanf("%d",&change);
    int hour =start/100;
    int minute =start%100;
    int minute_new = (minute +change)%60;
    int hour_change = (minute +change)/60;
    int hour_new = hour +hour_change;
    printf("%d%d",hour_new,minute_new);
    */

    //老师做的，直接把时间转化为分钟处理
    int start,change;
    scanf("%d %d",&start,&change);
    int hour=start/100;
    int minute=start%100;
    int time_former =hour*60+minute;
    int time_later =time_former+change;
    int end =time_later/60*100+time_later%60;
    printf("%d",end);

    return 0;
}