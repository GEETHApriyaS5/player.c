#include<stdio.h>
#include<conio.h>
void main()
{
    int n,k,i;
    scanf("%d%d",&n,&k);
    for(i=n;i>1;i--)
    {
        if(n%i==0 && k%i==0)
        {
            printf("%d",i);
            break;
        }
    }
    getch();
}
