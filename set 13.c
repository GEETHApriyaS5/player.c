#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,s=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    printf("%d",s);
    getch();
}
