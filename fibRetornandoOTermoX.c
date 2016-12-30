
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
    int cont = 0;
    while(cont < alcance) {
        
        if (a == 0) 

            a = b;
        
        else {
            
            a = b;
            b = c;
            c = a + b;
        }
        cont += 1;
    }
    printf("%dº Termo - %d.\n", cont, b);
}
