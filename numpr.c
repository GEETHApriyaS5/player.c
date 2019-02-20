#include<stdio.h>
#include<conio.h>
void main()
{
    //char a[100]="saturday",b[100]="sunday",c[100];
    int i,j,n,k,l=0,c=0,a[100];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            c++;
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
