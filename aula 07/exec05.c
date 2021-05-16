/* Exercício: Concatenação de strings. Função strcat.
					
					strcat(strdest,destorig); 
					
					Tamanho da string. Função: strlen
					
					strlen (str);
					 */

#include <stdio.h>
#include <string.h>

int main(){
	
	char str1[50];
	char str2[50];
	
	int tam1, tam2;
	
	strcpy(str1, "Uninove");
	strcpy(str2, " VM");
	strcat(str1, str2);
	
	
	puts("String 1");
	puts(str1);
	
	puts("String 2");
	puts(str2);
	
	tam1 = strlen(str1);
	tam2 = strlen(str2);
	
	printf("Tamanho da string 1: %d, e da string 2: %d", tam1, tam2);
	
	return 0;
}
