#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[100],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i+1]==0)
        {
            printf("%d",a[i]);
        }
    }
    getch();
}
