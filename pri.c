#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,j,prime=1;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<=b;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                prime=0;
                break;
            }
        }
        if(prime==1)
        {
        printf("%d ",i);
}    }
getch();
}
