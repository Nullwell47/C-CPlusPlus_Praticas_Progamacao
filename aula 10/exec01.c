/* Exercício: Programa que recebe três valores do usuário e tenha uma função
				  que retorne a soma e a multiplicação desses valores */

#include <stdio.h>

void calculo(int n1, int n2, int n3, int *soma, int *mult);

int main(){
	
	int a, b, c, s, m;
	
	printf("Digite tres valores\n");
	scanf("%d%d%d", &a, &b, &c);
	
	calculo(a, b, c, &s, &m);
	
	printf("Soma = %d e multiplicacao = %d", s, m);
	
	return 0;
}

void calculo(int n1, int n2, int n3, int *soma, int *mult){
	
	*soma = n1 + n2 + n3;
	*mult = n1 * n2 * n3;
	
}
