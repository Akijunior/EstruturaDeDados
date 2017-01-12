
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

struct Aluno{
	
	int mat, idade;
	string nome;
};

typedef struct Aluno aluno;

aluno lista[10];

main(){
	
	lista[0].idade = 12;
	lista[0].mat = 1;
	lista[0].nome = "Maria";
}
