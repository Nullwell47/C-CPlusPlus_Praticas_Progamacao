/* Exercício em que o usuário digita três valores
   e a média aritmética desses valores é mostrada
	na tela. */

#include<stdio.h>

int main(){
	
	float num1, num2, num3, media;
	
	//Impressão na tela pedindo para o usuário digitar os 3 valores
	printf("Digite 3 valores\n");
	//Captura dos valores
	scanf("%f%f%f", &num1, &num2, &num3);
		
	//Cálculo
	media = ( num1 + num2 + num3 ) / 3;
	
	//resultado na tela
	printf("Resultado = %f\n", media);
	
	return 0;

}


