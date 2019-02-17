#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[100];
    int i,t;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i+=2)
    {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
        
    }
    printf("%s",a);
    getch();
}
