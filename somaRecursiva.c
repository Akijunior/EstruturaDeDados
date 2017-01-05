
#include <stdio.h>

int somaRecursiva(int n){

    int soma;
    if (n==0){
        soma = 0;
    }
    else{
        soma = n + somaRecursiva(n-1);
    }
    return soma;
}

main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    int somaRecursiva(int n);
    int resultado = somaRecursiva(num);
    printf("O valor de %d apos a soma recursiva foi %d.", num, resultado);
}
