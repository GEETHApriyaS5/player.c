#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],k,i,j,t,n;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
if(a[i]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}}
printf("%d",a[k]);
getch();
}
