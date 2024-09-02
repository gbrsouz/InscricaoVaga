#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    char str[100];
    int tam, tam2;
    char lock;
    printf("Digite uma palavra ou frase: ");
    fgets(str, sizeof(str), stdin);
    tam = strlen(str);
    tam2 = tam - 2;
    for(int i=0; i<tam/2; i++){
        lock = str[i];
        str[i] = str[tam2 - i];
        str[tam2 - i] = lock;
    }
    printf("\n\n%s", str);
    return 0;
}