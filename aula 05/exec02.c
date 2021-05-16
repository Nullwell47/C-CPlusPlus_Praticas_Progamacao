/* Exercício: Programa que captura e guarda as notas de 10 alunos de uma sala,
				  e mostra na tela quais alunos estão aprovados e reprovados. */
				  
				  
#include<stdio.h>

int main(){
	
	//sem uso de vetores
	
	/*int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
	
	scanf("%d", &a1);
	scanf("%d", &a2);
	scanf("%d", &a3);
	scanf("%d", &a4);
	scanf("%d", &a5);
	scanf("%d", &a6);
	scanf("%d", &a7);
	scanf("%d", &a8);
	scanf("%d", &a9);
	scanf("%d", &a10);*/
	
	//com uso de vetores sem estrutura de repetição
	/*int a[10];

	scanf("%d", &a[0]);
	scanf("%d", &a[1]);
	scanf("%d", &a[2]);
	scanf("%d", &a[3]);
	scanf("%d", &a[4]);
	scanf("%d", &a[5]);
	scanf("%d", &a[6]);
	scanf("%d", &a[7]);
	scanf("%d", &a[8]);
	scanf("%d", &a[9]);
	
	if(a[0]>=6){
		printf("Aprovado\n");
	}*/
	
	//com uso de vetores e estrutura de repetição
	int a[10], i;
	
	for(i=0;i<=9;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<=9;i++){
		printf("O aluno %d esta ", i);
		if(a[i] >= 6){
			printf("Aprovado\n");
		}
		else{
			printf("Reprovado\n");
		}
	}
	
	return 0;
}
