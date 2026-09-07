#include<stdio.h>
#include<string.h>
int main()
{
    char string[3][10];
    char string_max[10];
    for(int i=0;i<3;i++)
    {
        scanf("%s",string[i]);
    }
    //for(int j=0;j<3;j++)
    //{
    //    printf("%s\n",string[j]);
    //}
    if(strcmp(string[0],string[1])>0) strcpy(string_max[10],string[0]);
    else strcpy(string_max[10],string[1]);
    if(strcmp(string_max[10],string[2])<0) strcpy(string_max[10],string[2]);
    printf("最大的字符串是%s\n",string_max);
    return 0;
}