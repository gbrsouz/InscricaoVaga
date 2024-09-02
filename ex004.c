#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    float sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48, o = 19849.53;
    float total = sp + rj + mg + es + o;
    printf("O percentual de representação de SP foi: %.2f\n", ((sp/total)*100));
    printf("O percentual de representação de RJ foi: %.2f\n", ((rj/total)*100));
    printf("O percentual de representação de MG foi: %.2f\n", ((mg/total)*100));
    printf("O percentual de representação de ES foi: %.2f\n", ((es/total)*100));
    printf("O percentual de representação de Outros foi: %.2f\n", ((o/total)*100));
    return 0;
}