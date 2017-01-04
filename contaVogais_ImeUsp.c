#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int contaVogais (char s[]) {
   int numVogais, i;
   char *vogais;
   vogais = "aeiouAEIOU";
   numVogais = 0;
   for (i = 0; s[i] != '\0'; ++i) {
      char ch = s[i]; 
      int j;
      for (j = 0; vogais[j] != '\0'; ++j) {
         if (vogais[j] == ch) {
            numVogais += 1;
            break;
         }
      }
   }
   return numVogais;
}


int main(void) {
    
    char s[] = "Aloha";
    long contador = contaVogais(s);
    printf ("A qtd de vogais encontrada foi %d.\n", contador);
    return 0;
}

