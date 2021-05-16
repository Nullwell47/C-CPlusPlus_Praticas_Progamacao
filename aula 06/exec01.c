/* Exercício: Programa que guarda as notas AV1, AV2 digitadas pelo usuário numa matriz.
				  Calcula-se a média e guarda-se na mesma matriz. Considere 10 alunos.
				    */

#include <stdio.h>

#define TAMANHO 10

int main(){
	
	float a[10][3];
	int i;
	
	printf("Digite as notas dos %d alunos\n", TAMANHO);
	
	for(i=0;i<TAMANHO;i++){
		scanf("%f%f", &a[i][0], &a[i][1]);
		a[i][2] = (a[i][0] + a[i][1])/2;
	}
	
	for(i=0;i<TAMANHO;i++){
		printf("Aluno %d - media: %f\n", i, a[i][2]);
	}	
	
		
	return 0;
}
