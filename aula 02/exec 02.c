/* Programa em que o usu�rio digita uma letra e o programa
	mostra na tela se � uma vogal ou consoante.
	Complete o c�digo para dar mensagem de erro caso o usu�rio
	digite algo que n�o seja uma letra.*/

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


