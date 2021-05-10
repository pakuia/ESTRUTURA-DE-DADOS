#include <stdio.h>
#include <stdlib.h>
#include <iostream>

struct registro  
{
  int codigo;
  registro* proximo;
  registro* anterior; 
  //armazenara o endereco de memoria onde esta a
  //estrutura anterior               
} ;
//acima defini uma tipo estrutura chamada registro

typedef registro* ponteiro;
//defino um novo tipo, assim se for criado uma variavel do tipo ponteiro
//ele contera todos os campos da estrutura registro


void ExibeFila(ponteiro primeiro)
{
 ponteiro aux;
 aux = primeiro;
 printf("*** Exibe Fila ***\n");
 while (aux != NULL)
  {
    printf("O codigo do cliente eh %i\n", aux->codigo);       
    aux=aux->proximo;      
  }
     
}

void ExibePilha(ponteiro ultimo)
{
 ponteiro aux;
 aux = ultimo;
 printf("*** Exibe Pilha ***\n");
   while (aux != NULL)
    {
      printf("%s\n", aux->codigo);
      aux=aux->anterior;      
    }

}
main() 
{
ponteiro inicio, anterior, auxiliar, ultimo;
 

char cliente[200];
char rbairro[200];
char resp='S';
//inicializando a pilha
inicio = NULL;
ultimo = NULL;

while (resp== 'S')
{
   printf("\nInforme o nome do cliente: \n");
   scanf("%s", cliente);          
   printf("\nInforme o bairro do cliente: \n");
   scanf("%s", rbairro);          
   
   auxiliar = new registro;
   scanf("%i", &auxiliar->codigo);
   
   auxiliar->proximo = NULL;
   auxiliar->anterior = NULL;   
      if (inicio != NULL)        
        anterior->proximo = auxiliar;
      if (inicio == NULL)
         inicio = auxiliar;
      if (ultimo != NULL)
         auxiliar->anterior = ultimo;
      anterior = auxiliar;
      ultimo = auxiliar;
   printf("Informe S para continuar \n ");
   scanf("%s", &resp);          

}
ExibeFila(inicio);  
ExibePilha(ultimo);
system("pause");  
  
}    
