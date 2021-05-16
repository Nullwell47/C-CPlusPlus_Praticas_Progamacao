/* Programa em que o usuário digita o nível de
	acidez de um azeite e mostra-se na tela a sua classificação,
	de acordo com:
	acidez menor que 0.5 -> azeite extra virgem
	acidez entre 0.5 e 0.8 -> azeite virgem
	acidez acima de 0.8 -> azeite comum
	*/

#include<stdio.h>

int main(){
	
	float ac;
	
	printf("Digite a acidez do azeite\n");
	scanf("%f", &ac);
	
	/*if(ac <= 0.5){
		printf("Azeite extra virgem\n");
	}else if (ac > 0.5 && ac <= 0.8){
		printf("Azeite virgem\n");
	}else if (ac > 0.8){
		printf("Azeite comum\n");
	}*/
	
	if(ac <= 0.5){
		printf("Azeite extra virgem\n");
	}else if (ac <= 0.8){
		printf("Azeite virgem\n");
	}else{
		printf("Azeite comum\n");
	}

	return 0;

}


