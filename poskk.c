#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[100],k,i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            printf("%d",i+1);
            break;
        }
    }
    getch();
}
