/* Exemplo: Calculadora simples separando as opera��es por fun��es */

#include <stdio.h>

//Prot�tipo da fun��o
float soma(float n1, float n2);
float sub(float n1, float n2);
float mult(float n1, float n2);
float divi(float n1, float n2);

//Vari�vel global
int g;

int main(){
	
	float x, y, r;
	char op;
	
	printf("Digite dois valores\n");
	scanf("%f%f", &x, &y);
	printf("Digite a operacao\n");
	getchar();
	scanf("%c", &op);
	
	switch(op){
		case '+':
			r = soma (x,y);
			break;
		case '-':
			r = sub (x,y);
			break;
		case '*':
			r = mult (x,y);
			break;
		case '/':
			r = divi (x,y);
			break;
		default:
			printf("Operacao invalida\n");
	}
	
	printf("Resultado = %f\n", r);
	
	return 0;
}

float soma(float n1, float n2){
	
	//corpo da fun��o
	float res;
	
	res = n1 + n2;
	
	return res;
	
}

float sub(float n1, float n2){
	
	//corpo da fun��o
	float res;
	
	res = n1 - n2;
	
	return res;
	
}

float mult(float n1, float n2){
	
	//corpo da fun��o
	float res;
	
	res = n1 * n2;
	
	return res;
	
}

float divi(float n1, float n2){
	
	//corpo da fun��o
	float res;
	
	res = n1 / n2;
	
	return res;
	
}
