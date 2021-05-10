#include <stdio.h>
#include <stdlib.h>
int vetCodigo[10];
float vetValor[10];
char vetProduto[10][20];
int indice=0, busca=0, indiceEncontrado=-1;

void insere()
{
  for (indice=0;indice<3;indice++)
  {
   system("cls");   
   printf("Informe o codigo do produto \n");
   scanf("%i",&vetCodigo[indice]);
   printf("Informe o valor do produto \n");
   scanf("%f",&vetValor[indice]);
   fflush(stdin);
   printf("Informe o nome do produto\n");
   scanf("%s",vetProduto[indice]);   
  }   
}

void exibe()
{
  for (indice=0;indice<3;indice++)
  {
   printf("No indice %i", indice);
   printf(" estao os valores \n");
   printf("***************************\n");
   printf("Codigo %i", vetCodigo[indice]);
   printf(" Valor %.2f", vetValor[indice]);   
   printf(" Produto %20s\n", vetProduto[indice]);
  }    
}

void buscaProduto()
{
  float qtd=0, total=0;   
  printf("Informe um codigo de produto\n");
  scanf("%i", &busca);   
  for (indice=0;indice<3;indice++)
  {
   if (busca == vetCodigo[indice])
   {
     indiceEncontrado = indice;
     indice=50;        
   }   
  }
  
 if (indiceEncontrado>-1)
   {
      system("cls");                   
      printf("No indice  %i",indiceEncontrado);   
      printf(" foi encontrado o produto %s\n",vetProduto[indiceEncontrado]);
      printf("Informe a quantidade de produtos \n");
      scanf("%f",&qtd);
      total = qtd * vetValor[indiceEncontrado];
      printf("O total da compra eh: %.2f\n",total);
   }
 else
 {
   printf("Produto nao encontrado \n");   
 } 
  
}

int main()
{
  insere();  
  exibe();
  buscaProduto();
  system("pause");  
  return 0;
}
