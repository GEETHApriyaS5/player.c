#include<stdio.h>
#include<stdio.h>
void main()
{
    char a[100],b[200];
    int c=0,i,j,l=0,l1=0,c1=0;
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
            if(a[j]==a[j+1])
            {
                l++;
            }
        }
    }
    for(i=0;b[i]!='\0';i++)
    {
        for(j=i+1;b[j]!='\0';j++)
        {
            if(b[i]==b[j])
            {
                c1++;
            }
            if(b[j]==b[j+1])
            {
                l1++;
            }
        }}
        if(c==1 && l==1 && c1==1 && l1==1)
        {
            printf("yes");
            
        }
        else
        {
            printf("no");
        }
getch();
    
}
