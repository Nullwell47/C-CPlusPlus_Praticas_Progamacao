/* Exercício em que o usuário digita dois
	valores, a operação a ser realizada, e o
	resultado é impresso na tela (calculadora simples) */

#include<stdio.h>

int main(){
	
	float num1, num2, res;
	char operacao;
	
	printf("Digite dois valores e a operacao a ser realizada\n");
	scanf("%f%f", &num1, &num2);
	
	getchar(); //resolve o problema de pular o scanf
	scanf("%c", &operacao);
	
	//------bloco if-------
	if(operacao == '+'){
		res = num1+ num2;
	}
	if(operacao == '-'){
		res = num1- num2;
	}
	if(operacao == '*'){
		res = num1* num2;
	}
	if(operacao == '/'){
		res = num1/ num2;
	}
	//------bloco if-------
	
	printf("%f %c %f = %f\n", num1, operacao, num2, res);
	
	return 0;

}


