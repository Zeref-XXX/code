#include <stdio.h>
#include <math.h>
#define f(x) x *x - 2 * x
int main()
{
    float l, r, x1, x2, fk, fx1, fx2, av, ans;
    int n, f[6] = {1, 1, 2, 3, 5, 8};
    printf("Enter n, L, R: \n");
    scanf("%d %f %f", &n, &l, &r);
    printf("K\tFk\tL\tR\tx1\tx2\tf(x1)\tf(x2)\tL/R\n");
    for (int i = 1; i <= n; i++)
    {
        char ch;
        fk = (float)f[n - i] / f[n - i + 1];
        x2 = l + fk * (r - l);
        x1 = l + r - x2;
        fx1 = f(x1);
        fx2 = f(x2);
        if (fx1 > fx2)
            ch = 'R';
        else
            ch = 'L';
        printf("%d\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%c\n\n", i, fk, l, r, x1, x2, fx1, fx2, ch);
        if (fx1 > fx2)
            l = x1;
        else
            r = x2;
    }
    av = (l + r) / 2;
    printf("\n%f", av);
    ans = f(av);
    printf("\nThe answer is %f", ans);
}