#include<stdio.h>
int main()
{
int i,n=4, flag = 1;
for(i=2;i<n;i++)
{
    if(n%i == 0)
    {
        flag = 0;
        break;
    }
}
if(flag == 1)
 printf("Prime number = %d", n);
 else
 printf("Not a Prime number = %d", n);

return 0 ; 
}