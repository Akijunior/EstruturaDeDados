#include <stdio.h>

int contaVogais (char s[], char *c) {
    
   int numVogais, i, j;
   numVogais = 0;
   for (i = 0; s[i] != '\0'; ++i) {
      char ch = s[i]; 

      for (j = 0; c[j] != '\0'; ++j) {
         if (c[j] == ch) {
            numVogais += 1;
            break;
         }
      }
   }
   return numVogais;
}

int main(void) {
    
    char s[] = "Aloha", *c = "o";
    
    long contador = contaVogais(s, c);
    printf ("A qtd de vezes que apareceu foi %d.\n",contador);
    return 0;
}

