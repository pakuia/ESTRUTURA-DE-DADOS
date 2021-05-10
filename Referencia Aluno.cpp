#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int posicao, continua; 
float media;   
struct TbFicha  
{
  char nome[50];
  float np1;
  float np2;
} ;
TbFicha ficha[10];

void insereAluno()
{
	printf("Informe o nome do aluno: \n");
    scanf("%s", &ficha[posicao].nome);
    printf("Informe a np1:\n");
    scanf("%f", &ficha[posicao].np1);
    if (ficha[posicao].np1 > 10 || ficha[posicao].np1 < 0 ){
    	system("cls"); 
    	printf("\nErro ao digitar NP1!");
    	printf("\nO aluno nao foi cadastrado!\n");
	}
	else{
	    printf("Informe a np2:\n");
	    scanf("%f", &ficha[posicao].np2);
		if (ficha[posicao].np2 >10 || ficha[posicao].np2 <0){
			strcpy(ficha[posicao].nome , NULL);
			ficha[posicao].np1 = 0;
			ficha[posicao].np2 = 0;
			posicao = 0;
			system("cls"); 
			printf("\nErro ao digitar NP2!");
			printf("\nO aluno nao foi cadastrado!\n");
		}
	}
}

void calcMedia()
{
	media = (ficha[posicao].np1 + ficha[posicao].np2) / 2;
	printf("Media: %.2f \n", media);
}


void exibeNome()
{
  printf("\nNa posicao digitada estao as informacoes: \n");
  printf("\nNome: %s \n", ficha[posicao].nome);
  printf("Np1: %.2f \n", ficha[posicao].np1);
  printf("np2: %.2f \n", ficha[posicao].np2);
}

int main() 
{
  do
  {
    printf("Informe uma posicao para guardar o registro (!~ de 0):\n");
    scanf("%i", &posicao);       
    insereAluno();
    printf("\nInforme 1 para inserir mais alunos\nDigite outro para buscar alunos\n: ");
    scanf("%i",&continua);    
    system("cls");    
  }
  while (continua == 1);   
  system("cls");
  printf("\nInforme a posicao para busca\n");
  scanf("%i", &posicao);       
  exibeNome();
  calcMedia();
  system("pause");    
}    
