/* Exerc�cio em que o usu�rio digita dois valores e o
programa calcula a soma, subtra��o, multiplica��o e divis�o dos
valores. Aqui � necess�rio usar valores reais */

#include<stdio.h>

int main(){

	//Declara��o de vari�veis
	float num1, num2, soma, sub, mult, divi;
	
	//1)
	printf("Digite dois valores \n");
	
	//2)
	scanf("%f%f", &num1, &num2);
	
	//3) Soma
	soma = num1+num2;
	//4) Subtra��o
	sub = num1-num2;
	//5) Multiplica��o
	mult = num1*num2;
	//6) Divis�o
	divi = num1/num2;
	
	printf("Soma = %.2f\n", soma);
	printf("Subtracao = %f\n", sub);
	printf("Multiplicacao = %f\n", mult);
	printf("Divisao = %f\n", divi);
		
	return 0;

}

