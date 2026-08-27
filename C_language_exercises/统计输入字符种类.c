#include<stdio.h>
int main()
{
    int letter=0,space=0,digit=0,others=0;
    char c;
    while((c=getchar())!='\n')
    {
        if(c>='A'&&c<='Z'||c>='a'&&c<='z') letter++;
        else if(c==' ') space++;
        else if(c>='0'&&c<='9') digit++;
        else others++;
    }
    printf("lettter=%d,space=%d,digit=%d,others=%d\n",letter,space,digit,others);
    return 0;
}