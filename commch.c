#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100],b[100];
    int i,j,c=0;
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;b[j]!='\0';j++)
        {
            if(a[i]==b[j])
            {
                c++;
                break;
            }
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
