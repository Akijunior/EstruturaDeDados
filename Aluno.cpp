

#include <stdio.h>
#include <stdlib.h>
#include <string>

struct aluno {

    int mat;
    float nota;
    char nome[30];
};

typedef struct aluno Aluno;

main() {
    Aluno vet[20];
    int i = 0;

    while (i<=2) {
    	
        printf("Digite a matricula: ");
        scanf("%d", &vet[i].mat);
        fflush(stdin);
        printf("Digite a nota: ");
        scanf("%f", &vet[i].nota);
        fflush(stdin);
        printf("Digite o nome: ");
        scanf("%s", &vet[i].nome);
        fflush(stdin);
        i += 1;
    }
}

typedef struct aluno {

    int matricula;
    float nota;
    char nome[30];

}Aluno;
