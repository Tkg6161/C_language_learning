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

    int num1,num2;
    printf("Enter two integers: ");
    scanf("%d, %d",&num1, &num2);
    printf("%d + %d = %d", num1, num2, num1 + num2);
    return 0; 
}