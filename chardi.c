#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100],s[100];
    int i,j,c=0;
    gets(a);
    gets(s);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;s[j]!='\0';j++)
        {
            if(a[i]==s[j])
            {
                c=0;
            }
            else
            {
                c++;
            }
        }
    }
    if(c==1)
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
    }
    getch();
}
