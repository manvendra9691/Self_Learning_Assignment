#include <stdio.h>
int main()
{
    int j, i;
    printf("Table from 5 to 10 ");
    for (j = 5; j <= 10; j++)
    {
        for (i = 1; i <= 10; i++)
        {
    printf("%d * %d = %d \n" , j,i,j*i);
        }
        printf("------------------------------------ \n");
    }
    return 0;
}