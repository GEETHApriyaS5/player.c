#include<stdio.h>
#include<conio.h>
void main()
{
    int n,k,a[100],i,j=0,c=0,b[100],t;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<k)
        {
            b[j]=a[i];
            c++;
            j++;
        }
    }
    for(j=0;j<c;j++)
    {
     for(k=j+1;k<c;k++)
     {
        if(b[j]>b[k])
        {
            t=b[j];
            b[j]=b[k];
            b[k]=t;
            
        }
    }
}
for(j=0;j<c;j++)
{
    printf("%d",b[j]);
}
getch();
}
