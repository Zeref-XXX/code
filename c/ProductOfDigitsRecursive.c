#include <stdio.h>
int proDigits(int n)
{
    if (n == 0)
        return 1;
    return (n % 10) * proDigits(n / 10);
}
int main()
{
    int number;
    printf("Enter a Number: ");
    scanf("%d", &number);
    printf("Product of The Digits of The Number: %d", proDigits(number));
}