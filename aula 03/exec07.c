/* Exerc�cio: Programa que captura as notas AV1 e AV2 de um aluno,
				  calcula a m�dia e mostra se o aluno est� aprovado ou reprovado.
				  Fa�a isso para 10 alunos e, no final, mostre na tela quantos
				  est�o aprovados e reprovados. */
				  
#include<stdio.h>				  

int main(){
	
	float media, AV1, AV2;
	
	int i, iAprov, iReprov;
	
	iAprov=0;
	iReprov=0;
	i=1;
	while(i<=10){
	
		printf("Digite as notas do aluno\n");
		scanf("%f%f", &AV1, &AV2);
		media=(AV1+AV2)/2;
		if(media>=6){
			printf("O aluno %d esta aprovado com media %f\n", i, media);
			iAprov++;
		}else{
			printf("O aluno %d esta reprovado com media %f\n", i, media);
			iReprov++;
		}
		i++;
	
	}
	
	printf("Temos %d alunos aprovados e %d alunos reprovados", iAprov, iReprov);
	
	return 0;
}
