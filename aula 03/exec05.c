/* Exercício: Programa que captura 10 valores do usuário
				  e faz o somatório desses valores */
				  
#include<stdio.h>				  

int main(){
		
	int i, num, cont2;
	
	cont2=0;
	
	i=1;
	while(i<=10){
		printf("Digite um numero\n");
		scanf("%d", &num);
		cont2=cont2+num;
		i++;
	}
	
	printf("Somatorio: %d", cont2);
	return 0;
}
