/* Exerc�cio em que o usu�rio digita tr�s notas
   de um aluno, calcula-se a m�dia aritm�tica desses valores 
	e mostra-se na tela se o aluno est� aprovado ou n�o,
	considerando a m�dia m�nima para aprova��o 6.0. */

#include<stdio.h>

int main(){
	
	float num1, num2, num3, media;
	
	//Impress�o na tela pedindo para o usu�rio digitar os 3 valores
	printf("Digite 3 valores\n");
	//Captura dos valores
	scanf("%f%f%f", &num1, &num2, &num3);
		
	//C�lculo
	media = ( num1 + num2 + num3 ) / 3;
	
	//---------bloco if-else---------
	if(media > 6){
		printf("Aprovado");
	}
	else{
		printf("Reprovado");
	}
	//---------bloco if-else---------
	
	return 0;

}


