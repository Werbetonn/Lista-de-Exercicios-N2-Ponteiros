/*Escreva um programa que declare uma variável real e um ponteiro para essa variável. 
Em seguida, preencha a variável com um valor real informado pelo usuário e utilize o 
ponteiro para calcular o dobro desse valor. Por fim, utilize o ponteiro para imprimir 
na tela o valor original e o dobro calculado.*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");

	float numero;
	float *ptr;
  
	printf("Digite um número real: ");
	scanf("%f", &numero);
  
	ptr = &numero;
  
	printf("Valor original: %.2f\n", *ptr);
	printf("Dobro: %.2f\n", (*ptr) * 2);
  
	return 0;
}
