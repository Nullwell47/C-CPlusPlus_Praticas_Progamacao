/* Exerc�cio em que o usu�rio digita dois
	valores, a opera��o a ser realizada, e o
	resultado � impresso na tela (calculadora simples) */

#include<stdio.h>

int main(){
	
	float num1, num2, res;
	char operacao;
	
	printf("Digite dois valores e a operacao a ser realizada\n");
	scanf("%f%f", &num1, &num2);
	
	getchar(); //resolve o problema de pular o scanf
	scanf("%c", &operacao);
	
	//------bloco if... else if...-------
	if(operacao == '+'){
		res = num1+ num2;
		printf("%f %c %f = %f\n", num1, operacao, num2, res);
	}
	else if(operacao == '-'){
		res = num1- num2;
		printf("%f %c %f = %f\n", num1, operacao, num2, res);
	}
	else if(operacao == '*'){
		res = num1* num2;
		printf("%f %c %f = %f\n", num1, operacao, num2, res);
	}
	else if(operacao == '/'){
		res = num1/ num2;
		printf("%f %c %f = %f\n", num1, operacao, num2, res);
	}else{
		printf("Operacao Invalida!\n");
	}
	//------bloco if... else if...-------
		
	return 0;

}


