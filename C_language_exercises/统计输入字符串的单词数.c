#include<stdio.h.>
int main()
{
    char string[20];
    int count=0;

    //scanf("%s",string);
    //scanf 用%s 不能存中间带空格的字符串，会自动在第一个单词后加'\0'

    //for(int j=0;string[j]!='\0';j++)
    //{
    //   scanf("%c",&string[j]);
    //}
    //不能用该循环终止逻辑，数组元素未初始化均为乱码，可能导致循环提前结束

    char c;
    int i;
    for(i=0;(c=getchar())!='\n';i++)
    {
        string[i]=c;
    }
    string[i]='\0';
    //for循环输入字符串要手动在最后加'\0'

    for(int i=0;string[i]!='\0';i++)
    {
        if(string[i]>='a'&&string[i]<='z'||string[i]>='A'&&string[i]<='Z')
        {
            if(string[i+1]==' '||string[i+1]=='\0')
            {
                count++;
            }
        }
    }
    printf("共有%d个单词\n",count);

    return 0;
}