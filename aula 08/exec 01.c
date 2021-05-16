// Exemplo: Manipulação de ponteiros

#include <stdio.h>

int main(){
	
	int *p; //Declaração de ponteiro.
	int a;
	
	p = &a;
	
	printf("Digite um numero\n");
	//scanf("%d", &a);
	scanf("%d", p);
	
	//Impressão do conteúdo de a
	printf("O numero digitado e: %d\n", a);
	printf("O numero digitado e: %d\n", *p);
	
	//Impressão do endereço de a
	printf("O endereco de 'a' e: %x\n", p);
	printf("O endereco de 'a' e: %x\n", &a);
	
	return 0;
}
