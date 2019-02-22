#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,j,c=0,t;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]==a[j])
            {
                a[i]=a[j];
            }
            else 
            {
                t=a[i];
            }
        }
    }
    printf("%d",t);
    getch();
}
