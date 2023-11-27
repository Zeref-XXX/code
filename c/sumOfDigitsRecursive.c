#include <stdio.h>
int sumDigits(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + sumDigits(n / 10);
}
int main()
{
    int number;
    printf("Enter a Number: ");
    scanf("%d", &number);
    printf("Sum of The Digits of The Number: %d", sumDigits(number));
}