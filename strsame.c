#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100],b[100];
    int i=0,c=0,j=0,l=0,l1=0;
    scanf("%s",a);
    scanf("%s",b);
    while(a[i]!='\0')
    {
        c++;
        i++;
    }
    while(b[j]!='\0')
    {
        l1++;
        j++;
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<l1;j++)
        {
            if(a[i]==b[j])
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
