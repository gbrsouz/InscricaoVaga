#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int seq[100], num;
    seq[0]= 0;
    seq[1] = 1;
    printf("Escreva um número: ");
    scanf("%d", &num);
    for(int i=2; i<100; i++){
        seq[i] = seq[i-1] + seq[i-2];
        if(seq[i] < 0) seq[i] = seq[i] * -1;
        
    }
    for(int i=0; i<100; i++){
        if(num == seq[i]) {
            printf("Este número está na sequência de Fibonacci");
            return 0;
        }
    }
    printf("Este número não está na sequência de Fibonacci");
    return 0;
}