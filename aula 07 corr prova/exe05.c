#include <stdio.h>

int main(){

	int idade;
	
	scanf("%d", &idade);
	
	if(idade >= 10 && idade <= 14){
		printf("infantil\n");
	} else if(idade >= 15 && idade <= 17){
		printf("juvenil\n");
	} else if(idade >= 18 && idade <= 25){
		printf("adulto\n");
	} else {
		printf("idade fora dos intervalos\n");
	}

}
