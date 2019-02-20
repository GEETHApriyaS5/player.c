#include<stdio.h>
#include<conio.h>
void main()
{
    int n,k,r,c=0,i,p=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        p=p*2;
        if(p==n)
        {
            c++;
            break;
        }
    }
    if(c>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
        
    }
    getch();
}
