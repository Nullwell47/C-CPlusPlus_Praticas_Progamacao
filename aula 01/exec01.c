/* Exercício em que o usuário digita dois valores,
o programa soma esses dois valores e imprime o resultado na
tela. Obs: Soma-se apenas valores inteiros */

#include<stdio.h>

int main(){

	//Declaração de variáveis
	int num1;
	int num2;
	int res;
	
	//1)
	printf("Digite dois valores inteiros\n");
	//  \n - quebra de linha
	
	//2)
	scanf("%d", &num1);
	scanf("%d", &num2);
	// %f - float
	// %c - char
	
	//3)
	res=num1+num2;
	
	//4)
	printf("Soma = %d", res);
	
	
	return 0;

}

