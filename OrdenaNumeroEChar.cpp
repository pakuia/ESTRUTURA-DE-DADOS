#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char letra[3][50];
int numero[3];
int posicao;

void ExibeNumeros()
{
 for (posicao=0;posicao <3;posicao++)
 {
  printf("Na posicao %i ", posicao);
  printf(" esta o numero: %i \n", numero[posicao]);
 }    
  system("pause");      
}

void ExibeLetras()
{
 for (posicao=0;posicao <3;posicao++)
 {
  printf("Na posicao %i ", posicao);
  printf(" esta a letra: %s \n", letra[posicao]);

 }    
  system("pause");      
  system("cls");        
}


void OrdenaNumeros()
{
   int troca;
   int qtdTrocas=0;
   bool valida=false;
   posicao = 0;
   do
   {
     valida=false;
     for (posicao=0; posicao <2;posicao++)
     {
         if (numero[posicao]<numero[posicao+1])
         {
          qtdTrocas++;                                 
          troca = numero[posicao];
          numero[posicao] = numero[posicao+1];          
          numero[posicao+1] = troca;                    
          valida=true;
         }
     }    
   }while (valida == true);
 printf("\n Qtd de trocas %i", qtdTrocas);    
     
}


void OrdenaLetras()
{
   char troca[3];
   int qtdTrocas=0;
   bool valida=false;
   posicao = 0;
   do
   {
     valida=false;
     for (posicao=0; posicao <2;posicao++)
     {
     if (strcmp(letra[posicao],letra[posicao+1])<0)
         {
          qtdTrocas++;                                 
          strcpy(troca,letra[posicao]);
          strcpy(letra[posicao],letra[posicao+1]);          
          strcpy(letra[posicao+1],troca);                    
          valida=true;
         }
     }    
   }while (valida == true);
 printf("\n Qtd de trocas %i", qtdTrocas);    
     
}

void insereLetras()
{
 for (posicao=0;posicao <3;posicao++)
 {
  printf("\nInforme a letra da posicao %i ", posicao );
  scanf("%s",letra[posicao]);   
 }    
}

void insereNumeros()
{
 for (posicao=0;posicao <3;posicao++)
 {
  printf("\nInforme o numero da posicao %i ", posicao );
  scanf("%i",&numero[posicao]);   
 }    	
}

int main()
{
  insereNumeros();
  fflush(stdin);	
  insereLetras();
  printf("Exibe numeros desordenados\n");
  ExibeNumeros();
  printf("Exibe letras desordenadas\n");
  ExibeLetras();
  OrdenaLetras();
  OrdenaNumeros();
  printf("Exibe numeros ordenados\n");
  ExibeNumeros();
  printf("Exibe letras ordenadas\n");
  ExibeLetras();
  system("pause");
  return 0;
}
