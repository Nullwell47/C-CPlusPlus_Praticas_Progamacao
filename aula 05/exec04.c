/* Exercício: Programa que calcula a soma e multiplicação de 10 valores
				  contidos num vetor. Além disso, mostra a posição do maior e menor
				  valor contido no vetor. */

#include<stdio.h>

int main (){
	
	float vet[10], soma, mult, menor, maior;
	int i, imaior, imenor;
	
	printf("Digite 10 valores:\n");
	for(i=0;i<=9;i++){
		scanf("%f", &vet[i]);
	}
	
	//Algoritmo para maior valor
	maior = vet[0];
	imaior = 0;
	for(i=1;i<=9;i++){
		if(vet[i]>maior){
			maior=vet[i];
			imaior = i;
		}
	}

	//Algoritmo para menor valor
	menor = vet[0];
	imenor = 0;
	for(i=1;i<=9;i++){
		if(vet[i]<menor){
			menor=vet[i];
			imenor = i;
		}
	}

	//Algoritmo para soma dos valores
	soma = 0;
	for(i=0;i<=9;i++){
		soma = soma + vet[i];
	}

	//Algoritmo para multiplicação dos valores
	mult = 1;
	for(i=0;i<=9;i++){
		mult = mult * vet[i];
	}

	printf("Posicao do maior valor: %d\n", imaior);
	printf("Posicao do menor valor: %d\n", imenor);
	printf("Soma: %f\n", soma);
	printf("Multiplicacao: %f\n", mult);

	
	return 0;
}
