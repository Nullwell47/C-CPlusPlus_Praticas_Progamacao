/* Exemplo: Uso de ponteiros com vetores. Programa que captura 10 valores do usuário
				e mostra a soma na tela. */

#include <stdio.h>

int main (){
	
	int v[10], i, soma;
	int *p;
	
	p=v; //Aqui, o ponteiro aponta para a primeira posição do vetor, equivale a p=&v[0];
	
	soma = 0;
	for(i=0;i<10;i++){
		printf("Endereco de onde aponta p: %x\n", p);
		scanf("%d", p);
		soma = soma + *p; //Equivale a soma = soma + v[i];
		p++;
	}
	
	printf("Soma = %d\n", soma);
	
	return 0;
}
