#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include<windows.h>
#include<conio.h>
#include<math.h>
struct registro  
{
  int codigo;
  
  registro* direita;
  registro* esquerda; 
  
  //armazenara o endereco de memoria onde esta a
  //estrutura anterior               
} ;
//acima defini uma tipo estrutura chamada registro

typedef registro* ponteiro;
//defino um novo tipo, assim se for criado uma variavel do tipo ponteiro
//ele contera todos os campos da estrutura registro

void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

void Exibe(ponteiro raiz, int coluna, int linha)
{
 int desloque=0;
 gotoxy(coluna, linha);
 desloque = trunc(30/(linha * 1.2));
 if (raiz == NULL)    
   {
      printf(".") ;   
   }
 else
   {
     printf("%i",raiz->codigo);
     Exibe(raiz->esquerda, coluna-desloque, linha + 2);                
     Exibe(raiz->direita, coluna+desloque, linha + 2);     
   }  
}

void AlocaDado(ponteiro raiz, ponteiro novoRegistro, int numero)
{
     if (numero > raiz->codigo)     
     {
         if (raiz->direita == NULL)       
          {
             raiz->direita =novoRegistro;              
          }
         else
          {
            AlocaDado(raiz->direita, novoRegistro, numero);
          } 
     }
     else
     {
         if (raiz->esquerda == NULL)
         {
            raiz->esquerda = novoRegistro;                
         }
         else
         {
            AlocaDado(raiz->esquerda, novoRegistro, numero);
         }
     }
}

main() 
{
ponteiro raiz, auxiliar;
int dado;
system("cls");
char resp='S';

raiz = NULL;
auxiliar = NULL;

while (resp== 'S')
{
   printf("\nInforme um numero qualquer: \n");
   scanf("%i", &dado);          
   auxiliar = new registro;
   auxiliar->codigo=dado;
   auxiliar->direita = NULL;
   auxiliar->esquerda = NULL;   
      if (raiz != NULL)        
        AlocaDado(raiz, auxiliar, dado);
      else
 
        raiz=auxiliar;
   printf("Informe S para continuar \n ");
   scanf("%s", &resp);          
}
system("cls");
Exibe(raiz, 40,1);

system("pause");
  
}    
