#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            a[i]='\0';
        }}
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]!='\0')
            {
                printf("%c",a[i]);
            }
        }
    getch();
}
