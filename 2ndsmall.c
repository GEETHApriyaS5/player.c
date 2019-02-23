#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,n,m,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<n;j++)
        m=a[0];
        if(a[j]<m)
        {
         m=a[i];   
        }
    }
    printf("%d",m);
    getch();
}
