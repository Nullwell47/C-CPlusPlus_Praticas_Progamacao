/* Exemplo: Programa que faz a soma de dois valores numa função de soma */

#include <stdio.h>

//Protótipo da função
int soma(int n1, int n2);

int main(){
	
	int x, y, r;
	
	printf("Digite dois valores\n");
	scanf("%d%d", &x, &y);
	
	//chamada da função
	r = soma(x,y);
	
	printf("Soma = %d\n", r);
	
	return 0;
}

int soma(int n1, int n2){
	
	//corpo da função
	int res;
	
	res = n1 + n2;
	
	return res;
	
}
