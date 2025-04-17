#include <stdio.h>

int main()
{
  int numero;
    
  printf("digite o numero:");
  scanf("%d",&numero);
  
  if (numero % 2 == 0 ) {
      printf("seu numero e´par:)");
}else {
    printf("seu numero é impar :D");
}
}