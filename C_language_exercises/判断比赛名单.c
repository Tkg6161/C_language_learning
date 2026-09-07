#include<stdio.h>
int main()
{
    char a,b,c;
    for(a='X';a<='Z';a++)
    {
        for(b='X';b<='Z';b++)
        {
            for(c='X';c<='Z';c++)
            {
                if(a!=b&&b!=c&&a!=c)
                {
                    if(a!='X'&&c!='X'&&c!='Z')
                    {
                        printf("A-%c\nB-%c\nC-%c\n",a,b,c);
                    }
                }
            }
        }
    }
    return 0;
}