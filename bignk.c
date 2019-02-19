#include<stdio.h>
#include<conio.h>
void main()
{
    int n,k,a[100],b[100],i,j,m,l;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        m=a[0];
        if(a[i]>m)
        {
            m=a[i];
        }
    }
    for(j=0;j<k;j++)
    {
        l=b[0];
        if(b[j]>l)
        {
            l=b[j];
        }
    }
    printf("%d %d",m,l);
    getch();
}
