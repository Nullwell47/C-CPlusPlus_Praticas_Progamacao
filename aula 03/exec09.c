/* Exerc�cio: Programa que captura uma senha do usu�rio e antes de terminar
				  o programa imprime a mensagem:
				  - ACESSO LIBERADO, caso o usu�rio acerte a senha (12345)
				  - ACESSO NEGADO, caso o usu�rio erre a senha tr�s vezes. */
				  
#include<stdio.h>				  

int main(){

	int senha = 12345;
	int captura, tentativas=0;
	
	do{
		printf("Digite uma senha\n");
		scanf("%d", &captura);
		tentativas++;
		
	}while(captura!=senha && tentativas<3);
	
	if(captura==senha && tentativas <= 3){
		printf("ACESSO LIBERADO\n");
	}else{
		printf("ACESSO NEGADO\n");
	}

	
	return 0;
}
