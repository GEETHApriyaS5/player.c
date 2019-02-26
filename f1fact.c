#include<stdio.h>
#include<conio.h>
void main()
{
    int f1=1,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f1=f1*i;
    }
    printf("%d",f1);
    getch();
}
