/* Exerc�cio: Escreva um programa em que o usu�rio digita um
				  valor n, e os n�meros PARES entre 0 e n s�o
				  impressos na tela. */
				  
#include<stdio.h>

int main(){

	int i, n;
	
	scanf("%d", &n);
	
	i=0;

	while(i<=n){
		//Verifica��o se o n�mero � par
		if(i%2==0){
			printf("%d - ", i);
		}
		i++;
	}
	
	return 0;
	
}

