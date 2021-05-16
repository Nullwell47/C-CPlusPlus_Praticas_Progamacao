/* Exemplo: Esboce o mapa de memória (com endereço e conteúdo) das variáveis
				do programa abaixo. */

#include <stdio.h>

int main (){
	
	int a, b, c;
	int *pa, *pb, *pc;
	
	pa = &a;
	pb = &b;
	pc = &c;
	
	a = 2;
	*pb = 3;
	*pc = b + *pa;
	
	printf("Endereco de a = %x\nEndereco de b = %x\nEndereco de c = %x\n", &a, &b, &c);
	printf("Endereco de pa = %x\nEndereco de pb = %x\nEndereco de pc = %x\n", &pa, &pb, &pc);
	
	return 0;
}
