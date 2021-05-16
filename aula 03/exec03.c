/* Exercício: Programa que captura 10 valores do usuários
				  e imprime novamente somente os valores maiores que 100 */
				  
#include<stdio.h>				  

int main(){
	
	int num, i;
	
	i=1;
	while(i<=10){
		printf("Digite um numero\n");
		scanf("%d", &num);
		if(num>100){
			printf("Numero digitado: %d\n", num);
		}
		i++;
	}
	
	return 0;
}
