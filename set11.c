#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i=0,c=0;
    gets(a);
    while(a[i]!='\0')
    {
        c++;
        i++;
    
    }
    for(i=c-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    getch();
}
