/* Exerc�cio: Programa que captura 10 m�dias de alunos
				  e imprime na tela quantos est�o aprovados
				  e quantos est�o reprovados. */
				  
#include<stdio.h>				  

int main(){
	
	float media;
	
	int i, iAprov, iReprov;
	
	iAprov=0;
	iReprov=0;
	i=1;
	while(i<=10){
	
		printf("Digite a nota do aluno\n");
		scanf("%f", &media);
		if(media>=6){
			iAprov++;
		}else{
			iReprov++;
		}
		i++;
	
	}
	
	printf("Temos %d alunos aprovados e %d alunos reprovados", iAprov, iReprov);
	
	
	return 0;
}
