#include<stdio.h>
int main()
{
    //单个字符+getchar()实现
    //输出原文后就无法输出密码
    /*
    char c;
    for(int i=0;(c=getchar())!='\n';i++)
    {
        if(c>='a'&&c<='z'||c>='A'&&c<='Z')
        {
            c+=4;
            if(c>='w'||c>='W'&&c<='Z')
            {
                c-=26;
            }
        }
        printf("%c",c);
    }
    */

    //数组实现
    //可以将原文储存，实现密码和原文均输出
    char string[10];
    scanf("%s",string);
    //先输出密码
    printf("%s\n",string);
    //解出原文并输出
    for(int i=0;string[i]!='\0';i++)
    {
        if(string[i]>='a'&&string[i]<='z'||string[i]>='A'&&string[i]<='Z')
        {
            string[i]+=4;
            if(string[i]>='w'||string[i]>='W'&&string[i]<='Z')
            {
                string[i]-=26;
            }
        }
        printf("%c",string[i]);
    }
    return 0;
}