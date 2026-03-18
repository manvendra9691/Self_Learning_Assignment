#include<stdio.h>
int main()
{
int i ,j;

for(i=0;i<5;i++)
{
    for(j=0;j<=i;j++)
    {
        if(j==1 || j==3)
        {
        printf("0");
        }
        else{
            printf("1");
        }
    }
    printf("\n");
}
return 0 ; 
}