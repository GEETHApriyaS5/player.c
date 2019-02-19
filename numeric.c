#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i,c=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
getch();
    
}
