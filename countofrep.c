#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[100],i,j,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    c=1;
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            c++;
        }
    }
}
printf("%d",c);
getch();
}
