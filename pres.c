#include<stdio.h>
#include<conio.h>
void main()
{
    int n,k,r,c=0;
    scanf("%d%d",&n,&k);
    while(n)
    {
        r=n%10;
        if(r==k)
        {
            c++;
        }
        n=n/10;
    }
    printf("%d",c);
    getch();
    
}
