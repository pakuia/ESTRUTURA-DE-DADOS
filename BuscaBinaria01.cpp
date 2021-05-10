#include <stdio.h>
#include <stdlib.h>
int numero[10]={10,20,30,40,50,60,70,80,90,100};

void busca(int buscaNum)
{
  bool achou=false;
  int inicio, meio, fim;

  inicio = 0;
  fim = 10-1; //final do vetor menos 1 porque a posicao no c comeca no zero
  meio = (inicio+fim) / 2;
  while (inicio <= fim && achou==false )
  {
        printf("Meio %i\n", meio);
        printf("Inicio %i\n", inicio);
        printf("Fim %i\n", fim);
        meio = (inicio + fim) / 2;
        if (buscaNum > numero[meio])
         {
           inicio = meio + 1;          
         }
        else if(buscaNum < numero[meio])
         {
           fim = meio-1;       
         } 
       else
         {
           achou = true;    
         }      
  }
        printf("Meio %i\n", meio);
        printf("Inicio %i\n", inicio);
        printf("Fim %i\n", fim);
  
  if (achou==true)
  {
    printf("\n ***Informacao encontrada na posicao*** %i\n ", meio);              
  }
  else
  {
    printf("\n ***Informacao nao encontrada *** \n ");                                
  }
}

int main()
{
 int num;   
 printf("Informe um numero: ");
 scanf("%i",&num);   
 busca(num);
 system("pause");
}
