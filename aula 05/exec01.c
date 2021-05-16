/* Exercício: Programa que imprime na tela a seguinte matriz:

				1 	2 	3 .... 	10
				11	12	13....	20
				.	.	. ....	.
				91	92	93....	100
				
				Para casa: Comece o teste de mesa para pelos menos duas linhas */
				
#include <stdio.h>

int main(){
	
	int i, j;
	
	for(j=1;j<=10;j++){
		for(i=1;i<=10;i++){
			printf("%d\t", (j-1)*10+i);
		}
		printf("\n");
	}
	
	/* Solução alternativa */
	/*for(i=1;i<=100;i++){
		printf("%d\t", i);
		if(i%10==0){
			printf("\n");
		}
	}*/
	
	return 0;
}
