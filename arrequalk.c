#include<stdio.h>
#include<conio.h>
void main()
{
    int n,k,a[100],i,j=0,c=1,b[100],t;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {  
        if(a[i]==a[j])
        {
             c++;
        }}
        if(c==k)
        {
            printf("%d",a[i]);
        }
    }
getch();
}
