/* Exercício: inicialização e cópia de strings

					strcpy(strdest, strorig) - A string de origem é copiada na 
														string de destino */

#include <stdio.h>
#include <string.h>

int main(){
	
	char str1[50], str2[50];
	
	strcpy(str1, "Uninove Vila Maria, Rua Guaranesia, #600");
	strcpy(str2, str1);
	
	puts(str1);
	puts(str2);
	
	
	return 0;
}
