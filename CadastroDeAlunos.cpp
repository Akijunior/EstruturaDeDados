
#include <iostream>
#include <string>	
using namespace std;

int main() {
	
	int tamanho, cont = 0;
	cout << "Digite o tamanho da lista que deseja: "; 
	cin >> tamanho;
	string Aluno[tamanho], matricula[tamanho];
	int idade[tamanho];
	
	while (cont < 3) {
		
		cout << "Digite o nome do aluno: "; 
		cin >> Aluno[cont];
		cout << "Digite a matricula do aluno: "; 
		cin >> matricula[cont];
		cout << "Digite a idade do aluno: "; 
		cin >> idade[cont];
		
		cont ++;
		
	}
	for(int i = 0; i < 3; i++) {
		
		std::cout << "Aluno: " << Aluno[i] + "\nMatricula: " << matricula[i]  + "\nIdade: "<< idade[i] + ".\n"<< std::endl;
	}	
}
