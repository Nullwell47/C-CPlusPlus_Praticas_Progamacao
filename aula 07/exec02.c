/* Exercício: captura e impressão de string usando a biblioteca string.h 

					gets - captura uma string
					puts - imprime a string na tela */

#include <stdio.h>
#include <string.h>

int main(){
	
	//char str[8] = {'u', 'n', 'i', 'n', 'o', 'v', 'e', '\0'};
	char str[50];
	
	printf("Digite uma string\n");
	gets(str);
	
	//printf("String digitada: %s\n", str);
	puts("String digitada pelo usuario");
	puts(str);
	
	return 0;
}
