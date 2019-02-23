#include<stdio.h>
#include<conio.h>
void main()
{
    int n,k,i,p=1,c=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<k;i++)
    {
        p=p*k;
        if(p==n)
        {
            printf("yes");
            break;
        }
    }
    /*if(c>0)
    
    {
        printf("yes");
    }*/
    getch();
}
