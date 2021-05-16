/* Exercício: Programa que captura 10 valores do usuário
				  e conta quantos são pares */
				  
#include<stdio.h>				  

int main(){
	
	int i, num, cont2;
	
	cont2=0;
	
	i=1;
	while(i<=10){
		printf("Digite um numero\n");
		scanf("%d", &num);
		if(num%2==0){
			cont2++;
		}
		i++;
	}
	
	printf("Numeros pares digitados: %d", cont2);
		
	return 0;
}
