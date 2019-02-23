#include<stdio.h>
#include<conio.h>
void main()
{
    char x[100],y[100];
    int i=0,c=0,j=0,l=0,c1=0;
    scanf("%s",a);
    scanf("%s",b);
    while(x[i]!='\0')
    {
        c++;
        i++;
    }
    while(y[j]!='\0')
    {
        c1++;
        j++;
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<c1;j++)
        {
            if(x[i]==y[j])
            {
                l++;
            }
        }
    }
    if(l==c)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    getch();
}
