/* Exerc�cio: Programa que captura uma senha do usu�rio e s� termina
				  o programa quando o usu�rio digita a senha correta (12345). */
				  
#include<stdio.h>				  

int main(){

	int senha = 12345;
	int captura;
	
	do{
		printf("Digite uma senha\n");
		scanf("%d", &captura);
		
	}while(captura!=senha);
	
	return 0;
}
