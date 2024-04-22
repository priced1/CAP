/*   
    Autor: Gessivan Junior
        Data de Criação: 17/04/2024
        Data de modificação: 17/04/2024
    Objetivo: Criar um algoritmo de troca de dois valores  
*/

#include <stdio.h>
int main (){
    
    //  valores para troca
    double a = 1.0;
    double b = 3.0;
    double temp;
    
    //  mensagem de antes da troca
    printf("Antes da troca: o A vira %2.lf,  e o B vira %2.lf\n", a, b);
    
    //  troca de valores do a e do b
    temp = a;
    a = b;
    b = temp;
    
    //  mensagem depois da troca
    printf("Depois da troca: o A vira %2.lf, e o B vira %2.lf\n", a, b);
    return 0;
}



