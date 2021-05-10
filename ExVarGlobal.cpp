#include <stdio.h>
#include <stdlib.h>
int varGlobal=0;
void funcao()
{
 printf("O valor da var global eh:%i\n",varGlobal);
  varGlobal = varGlobal+10;   
  printf("O valor da var global alterado dentro");  
  printf(" da funcao eh: %i\n",varGlobal);
}int main()
{
  printf("Informe um numero\n");
  scanf("%i",&varGlobal);
  printf("O valor da variavel eh: %i\n",varGlobal);
  funcao();  
  printf("O valor da variavel global agora eh: ");
  printf(" %i\n",varGlobal);
  system("pause");
  return 0;
}
