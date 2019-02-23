#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i=0,c=0,n,j,l=0,k,t;
    scanf("%[^\n]",a);
    scanf("%d",&k);
    while(a[i]!='\0')
    {
        l++;
        i++;
    }
    for(i=0;i<k;i++)
    {
        t=a[l-1];
        for(j=l-1;j>=0;j--)
        {
            a[j]=a[j-1];
        }
        a[0]=t;
    }
    for(i=0;i<l;i++)
    {
        printf("%c",a[i]);
    }
    getch();
}
