#include<stdio.h>
#include<conio.h>
void main()
{
    int l,r,m,i;
    scanf("%d%d",&l,&r);
    if(l>r)
    {
        m=r;
    }
    else
    {
        m=l;
    }
    while(1)
    {
        if(l%m==0 && r%m==0)
    {
        printf("%d",m);
        break;
    }
    else
    {
        m++;
    }}
    getch();
}
