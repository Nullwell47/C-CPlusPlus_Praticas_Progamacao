/* Exerc�cio: Complementando o exerc�cio 1: Al�m das informa��es AV1 e AV2,
				  o usu�rio digita tamb�m as faltas. O programa calcula a m�dia,
				  e mostra na tela se o aluno est� aprovado/reprovado por nota/falta. */

#include <stdio.h>

#define TAMANHO 10

int main(){

	float a[TAMANHO][4];
	int i;
	
	printf("Digite as notas do aluno %d \n", i);
	
	for(i=0;i<TAMANHO;i++){
		scanf("%f%f", &a[i][0], &a[i][1]);
		a[i][2] = (a[i][0] + a[i][1])/2;
	
		printf("Digite as faltas do aluno %d \n", i);
		scanf("%f", &a[i][3]);
		
		if(a[i][2] >= 6){
			printf("Aprovado em nota\n");
		}else{
			printf("Reprovado em nota\n");
		}
		
		if(a[i][3]>20){
			printf("Reprovado por faltas\n");
		}
	}

		
	return 0;
}
