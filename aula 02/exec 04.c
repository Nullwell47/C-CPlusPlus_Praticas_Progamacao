/* Programa em que o usuário digita uma letra e é impresso na
	tela se é uma vogal ou consoante.
	*/

#include<stdio.h>

int main(){
	
	char letra;
	
	printf ("Digite um caracter\n");
	scanf("%c", &letra);
	
	/*switch(letra){
		case 'a':
			printf("Vogal");
			break;
		case 'e':
			printf("Vogal");
			break;		
		case 'i':
			printf("Vogal");
			break;
		case 'o':
			printf("Vogal");
			break;
		case 'u':
			printf("Vogal");
			break;
		default:
			printf("Consoante");
	}*/
	
	//Melhorando e colocando as maiúsculas
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':	
		case 'I':
		case 'O':
		case 'U':
			printf("Vogal");
			break;
		default:
			printf("Consoante");
	}
	
	return 0;

}


