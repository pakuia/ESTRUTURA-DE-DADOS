#include <stdio.h>
#include <stdlib.h>

void insere(char n[][10], float p1[], float p2[])
{
	for (int i=0;i<3;i++)
	{	
	printf("Informe o aluno\n");
	scanf("%s",n[i]);
	fflush(stdin);
	printf("Informe a p1 e a p2\n");
	scanf("%f",&p1[i]);
	scanf("%f",&p2[i]);
   }
}

void calculaMedia(float p1[], float p2[], float md[])
{
	for (int i=0; i<3;i++)
	{
	  md[i]=(p1[i]+p2[i])/2;	
	}
}

void exibe(char n[][10],float md[])
{
	for (int i=0;i<3;i++)
	{
		printf("O aluno %s",n[i] );
		printf(" obteve media %.2f\n",md[i]);
	}
}

int main()
{
  float np1[3], np2[3], media[3];
  char nome[3][10];
  insere(nome,np1, np2);	
  calculaMedia(np1,np2,media);
  exibe(nome,media);
  return 0;
}
