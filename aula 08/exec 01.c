// Exemplo: Manipula��o de ponteiros

#include <stdio.h>

int main(){
	
	int *p; //Declara��o de ponteiro.
	int a;
	
	p = &a;
	
	printf("Digite um numero\n");
	//scanf("%d", &a);
	scanf("%d", p);
	
	//Impress�o do conte�do de a
	printf("O numero digitado e: %d\n", a);
	printf("O numero digitado e: %d\n", *p);
	
	//Impress�o do endere�o de a
	printf("O endereco de 'a' e: %x\n", p);
	printf("O endereco de 'a' e: %x\n", &a);
	
	return 0;
}
