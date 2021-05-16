/* Programa em que o usuário digita uma letra e o programa
	mostra na tela se é uma vogal ou consoante.
	Complete o código para dar mensagem de erro caso o usuário
	digite algo que não seja uma letra.*/

#include<stdio.h>

int main(){

	char letra;
	
	printf ("Digite um caracter\n");
	scanf("%c", &letra);
	
	if(letra == 'a' || letra == 'A'){
		printf ("Vogal\n");
	}else if (letra == 'e' || letra == 'E'){
		printf ("Vogal\n");
	}else if (letra == 'i' || letra == 'I'){
		printf ("Vogal\n");
	}else if (letra == 'o' || letra == 'O'){
		printf ("Vogal\n");
	}else if (letra == 'u' || letra == 'U'){
		printf ("Vogal\n");
	}else{
		printf ("Consoante\n");
	}
		
		
	return 0;

}


