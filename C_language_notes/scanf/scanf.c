#include <stdio.h>

int main() {
    /*int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);*/

    /* int num1,num2;
    printf("Enter two integers: ");
    scanf("%d %d",&num1, &num2);
    printf("%d +%d = %d",num1 ,num2 ,num1 + num2);
*/
    //scanf“”中的内容是要输入的内容，里面的空格是分隔，要是两个字符间的分隔才能满足；

    /*int num1,num2;
    printf("Enter two integers: ");
    scanf("%d, %d",&num1, &num2);
    printf("%d + %d = %d", num1, num2, num1 + num2);
    */

    /*int a,b;
    float x,y;
    char c1,c2;
    scanf("a=%d b=%d",&a,&b);
    scanf(" %f %e",&x,&y);
    scanf(" %c %c",&c1,&c2);
    printf("a=%d b=%d\n",a,b);
    printf("x=%f y=%e\n",x,y);
    printf("c1=%c c2=%c\n",c1,c2);
    */

    int a,b;
    float x,y,z;
    char c1,c2;
    scanf("%5d%5d%c%c%f%f%*f,%f",&a,&b,&c1,&c2,&x,&y,&z);
    printf("a=%d b=%d\n",a,b);
    printf("c1=%c c2=%c\n",c1,c2);
    printf("x=%f y=%f z=%f\n",x,y,z);
    //%*f表示输入的浮点数不赋值给任何变量，直接丢弃掉
    


    return 0; 
}