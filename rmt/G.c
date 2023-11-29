#include<stdio.h>
float Fx(float x)
{
    return x*x - 1.5*x ;
}
int main()
{
    float n, L, R;
    float X1,X2,F1;
    printf("Enter tolerance ");
    scanf("%f",&n);
    printf("Enter Lower limits ");
    scanf("%f",&L);
    printf("Enter Upper limits ");
    scanf("%f",&R);
    float Fx1, Fx2;
    char Q ;
    int k = 0;
    printf("K\t L\t R\t X1\t X2\t Fx1\t Fx2\t L/R \n");
    float L1 = L;
    float R1 = R;
    while((R1-L1)> n)
    {
        R1 = R;
        L1 = L;
        k++;
        F1 = 1 / 1.618;
        X2 = L + F1 * (R - L);
        X1 = L + R - X2;
        Fx1 = Fx(X1);
        Fx2 = Fx(X2);
        if (Fx1 > Fx2)
        Q = 'R';
        if(Fx2>=Fx1)
        Q = 'L';
        if((R-L)<= n){
        printf("%d\t%.2f\t%.2f \n",k,L,R);
        break;
        }
        else
        printf("%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t %c\n",k,L,R,X1,X2,Fx1,Fx2,Q); 
        if(Fx1>Fx2)
        {
        L = X1;
        }
        if(Fx2>=Fx1)
        {
        R = X2;
        }
    }
        float xmin = (R + L) / 2;
        float Fxmin = Fx(xmin);
        printf("xmin = %.3f \nfxmin = %.3f\n",xmin,Fxmin);
    return 0;
    
}