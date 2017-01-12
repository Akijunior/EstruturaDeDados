
#include <stdio.h>
#include <stdlib.h>
#inlude <string>

class aluno{
	
	private:
		
		int matricula;
		int idade;
		string nome;
	public:
		Aluno(int mat, int id, string name){
			
			matricula = mat;
			idade = id;
			nome = name;
		}
};

typedef struct aluno Aluno;

class Lista{
	private:
		
		Aluno *alunos[10];
		int qtdAlunos = 0;
};

string Aluno::getNome(){
	
	return nome;
}

int Aluno::getMatricula(){
	
	return matricula;
}

int Aluno::getIdade(){
	
	return idade;
}

void AdicionaAluno(){
	int mat, idade;
	string nome;
	
	printf("\nDigite a Matricula: ");
	scanf("%d", &mat);
		
	printf("\nDigite a Idade: ");
	scanf("%d", &idade);
		
	printf("\nDigite o Nome: ");
	gets(nome);
	
	index++;
		
	printf("\nALUNO CADASTRADO COM SUCESSO!\n");
}

void MostrarAlunos(){
	
	for (int i = 0; i < index; i++){
		
		printf("Matricula: %d\nIdade: %d\nNome: %s\n", alunos[index].mat, alunos[index].idade, alunos[index].nome);
	}
}

void BuscarMaisVelho(){
	
	int maior = alunos[0].idade, indexFound;
	
	for (int i = 1; i < index; i++){
		
		if (alunos[index].idade >= maior){
			
			indexFound = i;
		}
	}
	
	printf("O Aluno Mais Velho:\nMatricula: %d\nIdade: %d\nNome: %s\n", alunos[index].mat, alunos[index].idade, alunos[index].nome);
}

main(){
	
	int opcao;
	
	do {
		
		printf(">> MENU <<\n1 - Adicionar\n2 - Mostrar Alunos\n3 - Mais Velho\n0 - Sair\n");
		scanf("%d", &opcao);
		
		if (opcao == 0){
			
			printf("\nPROGRAMA ENCERRADO!\n");
			break;
		} else if (opcao < 0 || opcao > 3){
			
			printf("\nOPCAO INVALIDA!\n");
		}
	} while(opcao != 0);
}
