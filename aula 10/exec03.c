/* Exercício: Calculadora básica */

#include <stdio.h>

void soma(int n1, int n2, int *res);

int main(){

	int a, b, r;
	char op;

	printf("Digite os dois valores\n");
	scanf("%d%d", &a, &b);
	printf("Digite a operacao\n");
	getchar();
	scanf("%c", &op);

	if(op == '+'){
		soma(a, b, &r);
	}

	printf("%d %c %d = %d", a, op, b, r);

	return 0;
}

void soma(int n1, int n2, int *res){
	
	*res = n1 + n2;
	
}
