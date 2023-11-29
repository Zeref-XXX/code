#include<stdio.h>
float Fx(float x)
{
   return x*x -2*x;
}
int main()
{
   float n, L, R;
   float X1,X2,F1;
   int x;
   printf("Enter value of N ");
   scanf("%d",&x);
   printf("Enter Lower limits ");
   scanf("%f",&L);
   printf("Enter Upper limits ");
   scanf("%f",&R);
   float Fx1, Fx2;
   
   float F[x+1];
   F[0] = 1;
   F[1] = 1;
   char Q ;
   for (int i = 2; i < x + 1; i++)
   {
      F[i] = F[i-1]+F[i-2];
   }
   printf ("K\t F*\t L\t R\t X1\t X2\t Fx1\t Fx2\tL/R \n"); 
   for(int k = 1; k <=x; k++)
   { 
      
      F1=F[x-k]/F[x-k+1];
      X2 = L + F1*(R - L);
      X1 = L + R - X2;
      Fx1 = Fx(X1);
      Fx2 = Fx(X2);
      if(Fx1>Fx2){
      
      Q = 'R';}
      if(Fx2>=Fx1){
      Q = 'L';}
      if(F1==1)
      printf("%d\t%.2f\t%.2f\t%.2f     \n",k,F1,L,R); 
      else
      printf("%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t %c\n",k,F1,L,R,X1,X2,Fx1,Fx2,Q); 
      if(Fx1>Fx2){
      L = X1;
      }
      if(Fx2>=Fx1){
      R = X2;
      }
   }
      float xmin = (R + L) / 2;
      float Fxmin = Fx(xmin);
      printf("xmin = %.3f \nfxmin = %.3f\n",xmin,Fxmin);
   return 0;
}