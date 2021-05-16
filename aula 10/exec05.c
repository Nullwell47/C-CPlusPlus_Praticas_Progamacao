/* Exercício: Módulo de um número */

#include <stdio.h>

#define MODULO(a) (a<0)?(a*(-1)):(a)

int main(){
	
	int n;
	
	printf("Digite um numero\n");
	scanf("%d", &n);
	
	n=MODULO(n);
	
	printf("Modulo = %d", n);

	return 0;	
}
