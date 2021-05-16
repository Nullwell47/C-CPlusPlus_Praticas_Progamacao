#include <stdio.h>

int main(){

int vetA[10];
int i;

i=0;
while(i<10){
   vetA[i] = 0;
   if(i%3==0)
      vetA[i] = i;
   else
      vetA[i] = 3*i;
   i++;
}

for(i=0;i<10;i++){
	printf("%d - ", vetA[i]);
}

return 0;

}
