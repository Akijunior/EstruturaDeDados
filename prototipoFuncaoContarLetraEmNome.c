
#include <stdio.h>

int contChar (char word[20], char bus, int i, int cont) {

    if (word[i] == bus) {
        cont++;
    }

    if(word[i] == '\0') {
        return cont;
    }

    else {
        return contChar(word, bus, i+1, cont);
    }
}

int main() {

    char word[20];
    char bus;
    printf("Informe uma palavra:\n ");
    fgets(word, 255, stdin);
    printf("Informe o elemento procurado:\n ");
    scanf("%c", &bus);
    printf("%d", contChar(word, bus, 0, 0));
}
