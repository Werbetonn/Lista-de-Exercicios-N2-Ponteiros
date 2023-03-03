/*Escreva um programa que solicite ao usuário que digite uma string e, em seguida, crie uma 
nova string que seja a cópia da string original, mas com todas as vogais removidas. 
O programa deve usar ponteiros para manipular as strings.*/

#include <stdio.h>

int main() {
    char str[100], nova_str[100];
    int i = 0, j = 0;

    printf("Digite uma palavra: ");
    fgets(str, 100, stdin);

    for (i = 0; i <= 100; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            nova_str[j] = str[i];
            j++;
        }
        if (str[i] == '\0') {
        	break;
		}
    }

    printf("Palavra original: %s", str);
    printf("Nova palavra sem vogais: %s", nova_str);

    return 0;
}

