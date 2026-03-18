#include<stdio.h>
int main()
{
int i ,s=0,a[5];
float avg=0;
printf("Enter the marks of 5 subject");
for(i=0;i<5;i++)
{
    scanf("%d", &a[i]);
}
for(i=0;i<5;i++)
{
    s += a[i];
}
avg =(float) s/5;
printf(" Average of 5 subject =  %f ", avg);
return 0 ; 
}