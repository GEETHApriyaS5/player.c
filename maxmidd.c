#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[100],i,m=0,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2==0)
    {   t=n/2;
        printf("%d",a[t]);
    }
    else
    {
        m=n/2+1;
        printf("%d",m);
    }
    getch();
}
