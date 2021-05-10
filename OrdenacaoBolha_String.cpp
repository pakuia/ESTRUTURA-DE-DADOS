#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char letra[11][50];
int posicao;

void Exibe()
{
 for (posicao=0;posicao <11;posicao++)
 {
  printf("Na posicao %i: ", posicao);
  printf(" esta a letra: %s \n", letra[posicao]);

 }    
  system("pause");      
  system("cls");          
}

void Ordena()
{
   char troca[11];
   int qtdTrocas=0;
   bool valida=false;
   posicao = 0;
   do
   {
     valida=false;
     for (posicao=0; posicao <10;posicao++)
     {
if (strcmp(letra[posicao],letra[posicao+1])>0)
         {
          qtdTrocas++;                                 
          strcpy(troca,letra[posicao]);
          strcpy(letra[posicao],letra[posicao+1]);          
          strcpy(letra[posicao+1],troca);                    
          valida=true;
         }
     }    
   }while (valida == true);
 printf("\n Qtd de trocas %i:", qtdTrocas);    
     
}

int main() 
{
 for (posicao=0;posicao <11;posicao++)
 {
  printf("\nInforme a letra da posicao %i: ", posicao+1 );
  scanf("%s",letra[posicao]);   
 }    
 
 
printf("\n *** Exibe desordenado *** \n");
Exibe();
Ordena(); 
printf("\n *** Exibe apos ordenacao *** \n");
Exibe();

 
}
