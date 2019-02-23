#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,n,m,j,k;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<k;i++)
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
