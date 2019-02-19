#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i,c=0,j,l;
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]==' ')
        {
            for(j=i;j<l;j++)
            {
                a[j]=a[j+1];
            }
            l--;
        }
        
    }
    printf("%s",a);

    getch();
}
