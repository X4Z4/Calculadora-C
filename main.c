#include<stdio.h>
#include<math.h>

int main(){
  int n1 ;
  int n2 ;
  
  printf("Escreva o primeiro numero:  ");
    scanf("%d",&n1);
 
  printf("Escreva o segundo numero: ");
    scanf("%d",&n2);
  
  int s = n1+n2;
  int m = n1*n2;
  int sub = n1-n2;
  int div = n1/n2;
  printf("A soma desses numeros é: %d \n",s);

  printf("A multiplicação desses numeros é: %d \n",m);

  printf("A subtração desses numeros é: %d \n",sub);

  printf("A div desses numeros é: %d \n",div);

 
    return 0;
}
