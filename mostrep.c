#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],t;
int i,j,c=0,m=1,l=0;
scanf("%[^\n]",a);
l=strlen(a);
for(i=0;i<l;i++)
{
for(j=i+1;j<l;j++)
{
if(a[i]==a[j])
{
c++;
}
if(c>m)
{
m=c;
t=a[i];
}}
}
printf("%c",t);
getch();
}
