#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i,j,n,k,l=0,c=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i+=3)
    {
        printf("%c",a[i]);
    }
    
    getch();
    
}
