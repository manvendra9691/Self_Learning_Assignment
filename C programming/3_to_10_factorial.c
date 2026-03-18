#include<stdio.h>
int main()
{
    int i,n ,f;
printf("factorial between 3 to 10 are \n");
for(n=3;n<=10;n++)
{
    f =1;
for(i=1;i<=n;i++)
{
    f = f*i;
}
printf(" %d\n",f);
}

return 0 ; 
}