/*Escreva um programa que declare um array de inteiros com 5 elementos
 e um ponteiro para o primeiro elemento do array. Em seguida, preencha 
 o array com valores informados pelo usuário e imprima esses valores 
 utilizando o ponteiro. Ao final, mostre em tela cada valor armazenado
 e seu respectivo endereço de memória. */

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int n[5];
	int *pn;
	
	for(int i = 0; i < 5; i++) {
		scanf("%d", &n[i]);
	
	}
	pn = n;

for (int j = 0; j < 5; j++) {
	printf("\nValor: %d", *(pn+j));
	printf("\nEndereço %p\n", pn+j);
}

return 0;
}
