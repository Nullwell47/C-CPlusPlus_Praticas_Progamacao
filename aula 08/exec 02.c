/* Exemplo: Programa que soma três valores digitados pelo usuário, sempre
				acessando as variáveis por ponteiros */


#include <stdio.h>

int main(){
	
	int a, b, c, res;
	
	int *pa, *pb, *pc, *pres;
	
	pa = &a;
	pb = &b;
	pc = &c;
	pres = &res;
	
	printf("Digite 3 numeros\n");
	scanf ("%d%d%d", pa, pb, pc);

	*pres = *pa + *pb + *pc;
	
	printf("A soma de %d + %d + %d vale %d", a, b, c, res);
	
	return 0;
}
