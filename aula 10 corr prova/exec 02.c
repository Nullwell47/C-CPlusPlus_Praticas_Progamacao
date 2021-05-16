#include <stdio.h>
#include <string.h>

int main(){
	
	char s1[60], s2[20], s3[20];	
	
	int v, c, i;
	
	printf("Digite 3 palavras\n");
	gets(s1);
	gets(s2);
	gets(s3);
	
	v=0;
	c=0;
	for(i=0; i<strlen(s1);i++){
		if(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u')
			v++;
		else
			c++;
	}
	printf("A string %s tem %d vogais e %d consoantes\n", s1, v, c);
	
	v=0;
	c=0;
	for(i=0; i<strlen(s2);i++){
		if(s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u')
			v++;
		else
			c++;
	}
	printf("A string %s tem %d vogais e %d consoantes\n", s2, v, c);

	v=0;
	c=0;
	for(i=0; i<strlen(s3);i++){
		if(s3[i] == 'a' || s3[i] == 'e' || s3[i] == 'i' || s3[i] == 'o' || s3[i] == 'u')
			v++;
		else
			c++;
	}
	printf("A string %s tem %d vogais e %d consoantes\n", s3, v, c);
	
	strcat(s1, s2);
	strcat(s1, s3);
	
	puts(s1);
	
	return 0;
}


