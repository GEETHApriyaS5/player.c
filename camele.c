#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i,t;
    gets(a);
    if(a[0]>='a' && a[0]<='z')
    {
        a[0]=a[0]-32;
    }
    for(i=1;a[i]!='\0';i++)
    {
        if(a[i-1]==' ')
        {
            a[i]=a[i]-32;
        }
    }
    printf("%s",a);
    getch();
}
