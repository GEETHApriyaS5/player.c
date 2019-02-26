#include <stdio.h>

int main()
{
    char a[100],b;
    int i,c=0,t=0;
    gets(a);
    
    scanf("%c",&b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==b)
        {
            c++;
            }
    }
printf("%d",c);
getch();
    return 0;
}
