#include <stdio.h>
int main()
{
    int base, exponent;
    printf("Enter a base number: ");
    scanf("%d", &base);
    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }

    printf("Answer = %lld", result);
    return 0;
}
