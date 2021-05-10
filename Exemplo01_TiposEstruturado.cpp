#include <stdio.h> 
#include <stdlib.h>

int posicao, continua;    
struct TbFicha  
{
  int codigo;
  char nome[40];
  char bairro[40];
  char cidade[60];     
  char telefone[10];
  int codigoP;
  char nomeP [50];
  float valor;
  int estoque=0;
} ;
//acima defini uma tipo estrutura chamada TbCliente
TbFicha ficha[10];
//criei uma matriz de estrutura, assim em cada posicao alimento os 4 atributos

void insereCliente()
{
    printf("Informe um codigo para o cliente: ");
    scanf("%i", &ficha[posicao].codigo);
    printf("Informe o nome do cliente: ");
    scanf("%s", ficha[posicao].nome);
    printf("Informe o bairro do cliente: ");
    scanf("%s", ficha[posicao].bairro);
    printf("Informe a cidade do cliente: ");
    scanf("%s", ficha[posicao].cidade);
    printf("Informe o telefone:");
    scanf("%s",ficha[posicao].telefone);
}

void exibeCliente()
{
  printf("\nNa posicao digitada estao as informacoes: \n");
  printf("Codigo do cliente: %i \n", ficha[posicao].codigoP);
  printf("Nome: %s \n", ficha[posicao].nome);
  printf("Bairro: %s \n", ficha[posicao].bairro);
  printf("Cidade: %s \n", ficha[posicao].cidade);
  printf("O Telefone eh: %s\n",ficha[posicao].telefone);
}

void insereProduto()
{
    printf("\nInforme o codigo do produto: ");
    scanf("%i", &ficha[posicao].codigoP);
    printf("Informe o nome do produto: ");
    scanf("%s", ficha[posicao].nomeP);
    setbuf(stdin, NULL);
    printf("Informe o valor do produto: ");
    scanf("%f", &ficha[posicao].valor);
    printf("Informe a quantidade em estoque: ");
    setbuf(stdin, NULL);
    scanf("%i", &ficha[posicao].estoque);
}

void exibeProduto()
{
  printf("\nNa posicao digitada estao as informacoes: \n");
  printf("Codigo do produto: %i \n", ficha[posicao].codigoP);
  printf("Nome do produto: %s \n", ficha[posicao].nomeP);
  printf("Valor do produto: %.2f \n", ficha[posicao].valor);
  printf("Quantidade em estoque: %i \n", ficha[posicao].estoque-1);

}

int main() 
{
  do
  {
    printf("Informe uma posicao para guardar o registro: ");
    scanf("%i", &posicao);       
    insereCliente();
    insereProduto();
    printf("\nInforme 1 para continuar\nDigite outro para buscar\n: ");
    scanf("%i",&continua);    
    system("cls");    
  }
  while (continua == 1);   
  system("cls");
  printf("\nInforme a posicao para busca \n");
  scanf("%i", &posicao);       
  exibeCliente();
  exibeProduto();
  system("pause");    
}    
