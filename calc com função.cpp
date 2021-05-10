#include <stdio.h>
#include <stdlib.h>
void fsoma()
{
	int num01, num02, total;
	printf("informe o numero 01:\n");
	scanf("%i", &num01);
	printf("informe o numer 02:\n");
	scanf("%i", &num02);
	total = num01 + num02;
	printf("o total eh: %i\n", total);
}
void fsub()
{
	int num01, num02, total;
	printf("informe o numero 01:\n");
	scanf("%i", &num01);
	printf("informe o numer 02:\n");
	scanf("%i", &num02);
	total = num01 - num02;
	printf("o total eh: %i\n", total);
}
void fmult()
{
	int num01, num02, total;
	printf("informe o numero 01:\n");
	scanf("%i", &num01);
	printf("informe o numer 02:\n");
	scanf("%i", &num02);
	total = num01 * num02;
	printf("o total eh: %i\n", total);
}
void fdiv()
{
	int num01, num02, total;
	printf("informe o numero 01:\n");
	scanf("%i", &num01);
	printf("informe o numer 02:\n");
	scanf("%i", &num02);
	total = num01 / num02;
	printf("o total eh: %i\n", total);
}
int main()
{
	int opcao=0; 
	printf("informe 1 para somar\n");
	printf("informe 2 para subtrair\n");
	printf("informe 3 para multiplicar\n");
	printf("ou informe 4 para dividir\n");
	scanf("%i", &opcao);
	if (opcao==1){
		fsoma();
	}
	else if (opcao==2){
		fsub();
	}
	else if (opcao==3){
		fmult();
	}
	else if (opcao==4){
		fdiv();
	}
	else{
		printf("Erro na escolha!");
	}
	return 0;
}
