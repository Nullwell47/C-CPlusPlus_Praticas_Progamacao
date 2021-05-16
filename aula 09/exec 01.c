/* Exemplo: Analise a diferença entre as expressões abaixo:

			- *p++
			- (*p)++
			- *(p++)
			- ++(*p) */
			
#include <stdio.h>

void main (){
	
	int vet[3] = {0, 2, 4}, i, z;
	int *p;
	
	p=vet;
	
	printf("Primeiro caso \n");
	z = *p++;
	//Primeiro atribui o valor de *p em z, depois faz o ++ em p
	printf("z = %d\n", z);
	for(i=0;i<3;i++){
		printf("%d \n", vet[i]);
	}
	
	printf("Segundo caso \n");
	p=vet;
	z = (*p)++;
	printf("z = %d\n", z);
	for(i=0;i<3;i++){
		printf("%d \n", vet[i]);
	}	

	printf("Terceiro caso \n");
	p=vet;
	vet[0] = 0;
	z = *(p++);
	printf("z = %d\n", z);
	for(i=0;i<3;i++){
		printf("%d \n", vet[i]);
	}	
	
	printf("Quarto caso \n");
	p=vet;
	vet[0] = 0;
	z = ++(*p);
	printf("z = %d\n", z);
	for(i=0;i<3;i++){
		printf("%d \n", vet[i]);
	}
	
	return 0;
}
