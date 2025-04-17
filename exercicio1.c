#include <stdio.h>

int main()
{
 int idade;
 printf("digite sua idade ");
 scanf("%d",&idade);
 
  if( idade >= 18) {
     printf("e maior de idade");
     
 }else if (idade <= 18) {
     printf("menor de idade adolecente");
 }else {
     ( idade >= 12);
     printf("criança");
 }
 }