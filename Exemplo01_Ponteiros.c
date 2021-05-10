#include <stdio.h>
#include <stdlib.h>

int main()
{

  int *ponteiro, num01, num02;
  int tamanhovariavel=0;

  //obrigatoriamente voce deve dizer qual o tipo do ponteiro
  //para ele saber a qtd de bytes que ira reservar para esse endereco
  printf("Informe um numero qualquer ");
  scanf("%i", &num01);//25
  //armazena no endereco da variavel num01
  printf("\nO numero que voce digitou em num01 foi %i", num01);
  ponteiro = &num01;
  //copia o endereco de memoria para a var ponteiro
  num02 = *ponteiro;
  //copia o endereco para a variavel num02
  printf("\nO numero exibido atraves do ponteiro em num02 eh: %i\n", num02);
  //acima exibe o conteudo da variaven num02 apontado pelo ponteiro
  tamanhovariavel = sizeof(num01);
  //o sizeof retorna a quantidade de memoria alocada para aquela informacao
  printf("A qtd de bytes da variavel num01 eh: %i\n", tamanhovariavel);
  system("pause");

}
