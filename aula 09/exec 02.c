/* Exemplo: Programa que faz a soma de dois valores numa fun��o de soma */

#include <stdio.h>

//Prot�tipo da fun��o
int soma(int n1, int n2);

int main(){
	
	int x, y, r;
	
	printf("Digite dois valores\n");
	scanf("%d%d", &x, &y);
	
	//chamada da fun��o
	r = soma(x,y);
	
	printf("Soma = %d\n", r);
	
	return 0;
}

int soma(int n1, int n2){
	
	//corpo da fun��o
	int res;
	
	res = n1 + n2;
	
	return res;
	
}
