
#include <stdio.h>
#include <stdlib.h>

int fib();

main() {
    
    int num;
    printf("Digite eum número: \n");
    scanf("%d", &num);
    
    fib(num);

}

int fib(int alcance) {
    
    int a = 0, b = 1, c = 1;
    printf("Digite até que termo deseja que o Fibonacci vá: \n");
    scanf("%d", &alcance);
    int cont = alcance;
    while(cont > 0) {
        
        if (a == 0) {
            printf("%dº Termo - %d.\n", ((cont - alcance)+1), 0);
            a = b;
        }
        
        else {
            printf("%dº Termo - %d.\n", ((cont - alcance)-1)* -1, b);
            a = b;
            b = c;
            c = a + b;
        }
        
        cont -= 1;
    }
    

}
