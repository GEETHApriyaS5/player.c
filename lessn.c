#include<stdio.h>
#include<conio.h>
void main()
{
    int n,k,a[100],i,j=0,c=0,b[100],t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<n)
        {
            printf("%d",a[i]);
        }
    }
getch();
}
