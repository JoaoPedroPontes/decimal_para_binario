#include <stdio.h>
#include <stdlib.h>

int main(void){
  int num;
  int conversao[500];
  int count=0;
  
  printf("Insira o número\n");  
  if(!scanf("%i",&num)){
    printf("Apenas numeros!!! O programa foi encerrado.\n");
    exit(0);
  }

  while(num >= 1){
    conversao[count] = num % 2;
    count++;
    num/=2;
  }

  count--;
  printf("Resultado: ");
  for(int v=0;count>=v;count--){
    printf("%i",conversao[count]);
  }

  printf("\n");

  return 0;
}
