#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100],b[100];
    int i,c=0,j,l;
    scanf("%d",&l);
    
    scanf("%s",a);
    
    for(i=0;i<l;i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' ||a[i]=='u')
        {
            a[i]='\0';
            c++;
        }
    }
    for(i=c;i>=0;i--)
    {
        if(a[i]!='\0')
        {
            printf("%c",a[i]);
        }}
    getch();
}
    
