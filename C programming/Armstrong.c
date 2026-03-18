#include<stdio.h>
int main()
{
int i,n,d=0,s=0;
n = 153;
for(i=n;i>0;i=i/10)
{
d= i% 10;
s += d*d*d;
}
if(n == s)
{
 printf("Armstrong number = %d", n);
}
else{
printf("Not a Armstrong number = %d", n);
}
return 0 ; 
}