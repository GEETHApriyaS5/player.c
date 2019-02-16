#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,j,prime=1,c=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
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
         c++;
}    }
printf("%d",c);
getch();
}
