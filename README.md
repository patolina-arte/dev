  #include <stdio.h>
int main()
{
  int senha = 0 ;
 while(senha != 120) {
 printf("digite sua senha:");
 scanf("%d",&senha);
 
    if(senha != 120 ) {
    printf("senha incorreta. tente novamente./n");
   }
 }
   printf("acesso liberado");
}





