#include <stdio.h>
#include <stdlib.h>






void DivideRecursivo(float n)
{
  float divide;
  if (n>0.1)
   {
     divide=n/2;
     printf("\n O numero %f", n);
     printf(" dividido por 2 eh: %f \n", divide);
     DivideRecursivo(divide);
   }
  printf("Depois de executado a funcao. O numero eh %f\n", n);
}

void DivideNormal(float n)
{
  float divide =0;
  while (n > 0.1)
  {
   divide = n/2;
   printf("\n O numero %f", n);
   printf(" dividido por 2 eh: %f \n", divide);
   n = divide;     
  }
  system("pause");   
}

int main() {
    float numero;
    printf("\n Informe um numero qualquer \n");
    scanf("%f",&numero);
//    printf("\n Numero pela divisao normal \n");
//    DivideNormal(numero);
    system("cls");        
    printf("\n Numero pela divisao recursiva \n");
    DivideRecursivo(numero);
    system("pause");        
   
}
