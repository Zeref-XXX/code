#include <stdio.h>
int fibo(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return (fibo(n - 1) + fibo(n - 2));
}
int main()
{
    int n;
    printf("Enter the nth Term: ");
    scanf("%d", &n);
    printf("Fibonacci upto %dth term:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibo(i));
    }
    printf("\n");
    return 0;
}