#include<stdio.h.>
int main()
{
    char string[20];
    int count=0;

    //scanf("%s",string);
    //scanf 用%s 不能存中间带空格的字符串，会自动在第一个单词后加'\0'

    for(int j=0;string[j]!='\0';j++)
    {
        scanf("%c",&string[j]);
    }
    printf("%s\n",string);

    for(int i=0;string[i]!='\0';i++)
    {
        if(string[i]>='a'&&string[i]<='z'||string[i]>='A'&&string[i]<='Z')
        {
            printf("%c\n",string[i]);
            if(string[i+1]==' '||string[i+1]=='\0')
            {
                printf("%c\n",string[i]);
                count++;
            }
        }
    }
    printf("共有%d个单词\n",count);

    return 0;
}