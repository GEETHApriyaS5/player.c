#include<stdio.h>
#include<conio.h>
void main()
{
    long int n,i;
    scanf("%ld",&n);
    if(n>-32768 && n<32767)
    {
        printf("INT");
    }
    else
    {
        printf("no");
    }
    getch();
}
