/* Exerc�cio em que o usu�rio digita tr�s valores
   e a m�dia aritm�tica desses valores � mostrada
	na tela. */

#include<stdio.h>

int main(){
	
	float num1, num2, num3, media;
	
	//Impress�o na tela pedindo para o usu�rio digitar os 3 valores
	printf("Digite 3 valores\n");
	//Captura dos valores
	scanf("%f%f%f", &num1, &num2, &num3);
		
	//C�lculo
	media = ( num1 + num2 + num3 ) / 3;
	
	//resultado na tela
	printf("Resultado = %f\n", media);
	
	return 0;

}


