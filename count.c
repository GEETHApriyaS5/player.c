#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,j,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
{
    
    
        if(a[i]<a[i+1])
        {
            c++;
        }
    
}
printf("%d",c);
getch();
}
