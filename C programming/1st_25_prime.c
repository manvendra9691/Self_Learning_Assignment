#include<stdio.h>
int main()
{
int i,c=0,n=1, flag;
printf("1st 25 Prime numbers are \n");
while(c != 25)
{ 
    flag=1;
for(i=2;i<n;i++)
{
    if(n%i == 0)
    {
        flag = 0;
       
    }
}
if(flag == 1){
 printf(" %d \n",n);
c++;
}
  n++;
}
return 0 ; 
}