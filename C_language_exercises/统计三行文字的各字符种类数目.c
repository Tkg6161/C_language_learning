#include<stdio.h>
int main()
{
    char text[3][5]={{"sdv./"},{"24 8*"},{"yl @#"}};
    int letter=0,letter_caps=0,digit=0,space=0,others=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(text[i][j]>='a'&&text[i][j]<='z')
            {
                letter++;
                continue;
            }
            if(text[i][j]>='A'&&text[i][j]<='Z')
            {
                letter_caps++;
                continue;
            }
            if(text[i][j]>='0'&&text[i][j]<='9')
            {
                digit++;
                continue;
            }
            if(text[i][j]==' ') space++;
            else others++;

        }
    }
    printf("letter=%d\nletter_caps=%d\ndigit=%d\nspace=%d\nothers=%d\n",letter,letter_caps,digit,space,others);
    return 0;
}