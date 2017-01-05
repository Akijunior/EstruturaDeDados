
struct aluno {

    int mat;
    float nota;
    char nome[30];
};

typedef struct aluno Aluno;

main() {
    Aluno vet_aluno[20];
    int i = 0;

    while (i<=2) {
        printf("DIgite a matricula: ");
        scanf("%d", &vet[i].mat);
        printf("DIgite a nota: ");
        scanf("%f", &vet[i].nota);
        fflush(stdin);
        printf("Digite o nome: ");
        scanf("%s", &vet[i].nome);
        i += 1;
    }
}

typedef struct aluno {

    int matricula;
    float nota;
    char nome[30];

}Aluno;
