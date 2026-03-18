#include<stdio.h>
int main()
{
int i,n =5,f=1;
for(i=1;i<=n;i++)
{
    f = f*i;
}
printf("factorial of 5 = %d",f);
return 0 ; 
}