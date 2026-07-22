#include <stdio.h>
int main()
{
    /*
    //没法处理0啊
    int num =0;
    scanf("%d",&num);
    int key1= 10;
    int key2= 1;
    int key3= 1;
    int dim =num%key1/key2;
    while(dim!=0||num%key1==0)
    {
        key3*=10;
        key1*=10;
        key2*=10;
        dim=num%key1/key2;

    }
    int sum=0;
    key1= 10;
    key2= 1;
    key3/=10;
    dim =num%key1/key2;
    while(dim!=0||num%key1==0)
    {
        sum+=dim*key3;
        key3/=10;
        key1*=10;
        key2*=10;
        dim=num%key1/key2;
    }
    printf("%d",sum);
    */
   
    int num;
    scanf("%d", &num);

    int reversed = 0;

    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    printf("%d\n", reversed);

   
    return 0;
}