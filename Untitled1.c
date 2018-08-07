#include<stdio.h>
int main(){
    int i,j,s,k;
scanf("%d %d",&i,&j);
if(i%j==0)
    printf("\n%d",i);
else{
  k=(i/j)+1;
s=k*j;
printf("\n%d",s);
}}
