/*
    Autor: Gessivan Junior
        Data de Criação: 17/04/2024
        Data de modificação: 17/04/2024
    Objetivo:Dado dois valores mostrar o maior
*/

#include <stdio.h>

int main(){
    //declarar valores
    int num1, num2;
    
    //receber valores
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    //verificar se
     if (num1 > num2){
         printf ("O maior número é: %d\n", num1);
         
     }else{
          printf ("O maior número é: %d\n", num2);
     }
     
     return 0;
    
}   


