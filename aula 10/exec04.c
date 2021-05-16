/* Exercício: Calculadora básica */

#include <stdio.h>

#define TAM 10

#define SOMA(a,b) (a+b)

int main(){
	
	int n1, n2, r;
	printf("Digite dois valores\n");
	scanf("%d%d", &n1, &n2);
	
	r=SOMA(n1,n2);
	
	printf("Resultado = %d", r);

	return 0;	
}
