#include <stdio.h>
#include <math.h>
#define f(x) x *x
int main()
{
    float l, r, x1, x2, fx1, fx2, av, ans, t;
    printf("Enter t, L, R: \n");
    scanf("%f %f %f", &t, &l, &r);
    printf("K\tL\tR\tx1\tx2\tf(x1)\tf(x2)\tL/R\n");
    int k = 1;
    while (r - l > t)
    {
        char ch;

        x2 = l + 0.618 * (r - l);
        x1 = l + r - x2;
        fx1 = f(x1);
        fx2 = f(x2);
        if (fx1 > fx2)
            ch = 'R';
        else
            ch = 'L';
        printf("%d\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%c\n\n", k, l, r, x1, x2, fx1, fx2, ch);
        if (fx1 > fx2)
            l = x1;
        else
            r = x2;
        k++;
    }
    av = (l + r) / 2;
    ans = f(av);
    printf("The answer is %f", ans);
}
