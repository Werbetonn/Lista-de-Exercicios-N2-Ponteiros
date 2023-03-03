/*Escreva um programa que declare duas vari�veis inteiras e dois ponteiros 
para essas vari�veis. Em seguida, preencha as vari�veis com valores informados 
pelo usu�rio. Utilizando ponteiros, troque os valores entre as duas vari�veis 
sem usar uma vari�vel tempor�ria e sem utilizar operadores de atribui��o direta. 
Em seguida, imprima os valores atualizados das duas vari�veis.*/

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
