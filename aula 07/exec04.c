/* Exercício: Programa que troca as vogais de uma string pelo caracter '*' */

#include <stdio.h>
#include <string.h>

int main(){
	
	char str[50];
	int i;
	
	strcpy(str,"PRATICA de Programacao");
	
	for(i=0;str[i]!='\0';i++){
		if(str[i] == 'a' ||
		   str[i] == 'e' ||
			str[i] == 'i' ||
			str[i] == 'o' ||
			str[i] == 'u' ||
			str[i] == 'A' ||
		   str[i] == 'E' ||
			str[i] == 'I' ||
			str[i] == 'O' ||
			str[i] == 'U'){
				
				str[i] = '*';
				
			}
	}
	
	puts(str);
	
	return 0;
}
