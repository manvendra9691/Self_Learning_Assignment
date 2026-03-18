#include <stdio.h>
int main()
{
    int i, n = 123, d = 0, rev = 0;
    for (i = n; i > 0; i = i / 10)
    {
        d = i % 10;
        rev = rev * 10 + d;
    }
    if (n == rev)
        printf("Palindrome number = %d", n);
    else
        printf("Not a Palindrome number = %d", n);

    return 0;
}