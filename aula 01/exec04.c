/* Exercício em que o usuário digita três notas
   de um aluno, calcula-se a média aritmética desses valores 
	e mostra-se na tela se o aluno está aprovado ou não,
	considerando a média mínima para aprovação 6.0. */

#include<stdio.h>

int main(){
	
	float num1, num2, num3, media;
	
	//Impressão na tela pedindo para o usuário digitar os 3 valores
	printf("Digite 3 valores\n");
	//Captura dos valores
	scanf("%f%f%f", &num1, &num2, &num3);
		
	//Cálculo
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


