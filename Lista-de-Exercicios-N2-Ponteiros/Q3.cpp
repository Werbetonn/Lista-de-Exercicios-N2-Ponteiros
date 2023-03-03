/*Escreva um programa que declare duas variáveis inteiras e dois ponteiros 
para essas variáveis. Em seguida, preencha as variáveis com valores informados 
pelo usuário. Utilizando ponteiros, troque os valores entre as duas variáveis 
sem usar uma variável temporária e sem utilizar operadores de atribuição direta. 
Em seguida, imprima os valores atualizados das duas variáveis.*/

#include <stdio.h>

int main() {
	
    int var1, var2, *ptr1, *ptr2;
    
    printf("Digite o valor da primeira variavel: ");
    scanf("%d", &var1);
    
    printf("Digite o valor da segunda variavel: ");
    scanf("%d", &var2);
    
    ptr1 = &var1;
    ptr2 = &var2;
    
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
    
    printf("Os valores atualizados sao:\n");
    printf("Variavel 1: %d\n", var1);
    printf("Variavel 2: %d\n", var2);
    
    return 0;
}
