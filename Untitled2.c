#include<stdio.h>
int main()
{
int a,n,k,t,s;
for(n=32;n<99;n++)
{
k=n*n;
t=k%10;
k=k/10;
s=k%10;
k=k/10;
if(t!=s)
continue;
t=k%10;
k=k/10;
s=k%10;
k=k/10;
if(t==s)
printf("%d",n*n);
}
}
