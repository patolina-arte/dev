
#include <stdio.h>

int main()
{
 int a,b,c;
 printf("digite o valor de a:");
 scanf("%d",&a);
 printf("digite o valor de b");
 scanf("%d",&b);
 printf("digite o valor de c ");
 scanf("%d",&c);
 
 if (a > b &&  a > c) {
     printf("a e maior");
 }else if ( b > a && b > c) {
     printf("b e maior");
 }else {
     printf(" c e maior");
 }
 }