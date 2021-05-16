/* Exercício em que o usuário digita dois valores e o
programa calcula a soma, subtração, multiplicação e divisão dos
valores. Aqui é necessário usar valores reais */

#include<stdio.h>

int main(){

	//Declaração de variáveis
	float num1, num2, soma, sub, mult, divi;
	
	//1)
	printf("Digite dois valores \n");
	
	//2)
	scanf("%f%f", &num1, &num2);
	
	//3) Soma
	soma = num1+num2;
	//4) Subtração
	sub = num1-num2;
	//5) Multiplicação
	mult = num1*num2;
	//6) Divisão
	divi = num1/num2;
	
	printf("Soma = %.2f\n", soma);
	printf("Subtracao = %f\n", sub);
	printf("Multiplicacao = %f\n", mult);
	printf("Divisao = %f\n", divi);
		
	return 0;

}

