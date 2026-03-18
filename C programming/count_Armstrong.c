#include<stdio.h>
int main()
{
int i,n,c=0;
for(n=0;n<1000;n++)
{
   int d=0,s=0;
for(i=n;i>0;i=i/10)
{
d= i% 10;
s += d*d*d;

if(n == s)
{
  c++;
}
}
}
printf("Total Number of Armstrong between 0 to 999= %d",c);
return 0 ; 
}