/* Exercício: Programa que captura e guarda 10 valores do usuário. Depois,
				  mostra na tela:
				  	- O maior valor
					- O menor valor
					- A soma dos valores
					- A média aritmética dos valores */
					
#include<stdio.h>

int main (){
	
	float vet[10], maior, menor, soma, media;
	int i;
	
	printf("Digite 10 valores:\n");
	for(i=0;i<=9;i++){
		scanf("%f", &vet[i]);
	}
	
	//Algoritmo para maior valor
	maior = vet[0];
	for(i=1;i<=9;i++){
		if(vet[i]>maior){
			maior=vet[i];
		}
	}

	//Algoritmo para menor valor
	menor = vet[0];
	for(i=1;i<=9;i++){
		if(vet[i]<menor){
			menor=vet[i];
		}
	}

	//Algoritmo para soma dos valores
	soma = 0;
	for(i=0;i<=9;i++){
		soma = soma + vet[i];
	}
	
	media=soma/10;
	
	printf("Maior valor: %f\n", maior);
	printf("Menor valor: %f\n", menor);
	printf("Soma: %f\n", soma);
	printf("Media: %f\n", media);
	return 0;
}
