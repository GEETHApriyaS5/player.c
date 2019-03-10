#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[100],i,c=0,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {     m=a[1]-a[0];
         c=a[i+1]-a[i];
        if(c<m)
        {
            m=c;
        }
    }
    printf("%d",m);
    getch();
}
