/* Exercício: Escreva um programa em que o usuário digita um
				  valor n, e os números PARES entre 0 e n são
				  impressos na tela. */
				  
#include<stdio.h>

int main(){

	int i, n;
	
	scanf("%d", &n);
	
	i=0;

	while(i<=n){
		//Verificação se o número é par
		if(i%2==0){
			printf("%d - ", i);
		}
		i++;
	}
	
	return 0;
	
}

