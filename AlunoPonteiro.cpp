#include <iostream>
#include <string>
using namespace std;

class Aluno {

	private:

		int mat, idade;
		string nome;

	public:

		Aluno(){}
		Aluno(int m,string n, int Idade){

		    mat = m;
			nome = n;
			idade = Idade;
		}

		string getNome();
		int getMat();
		int getIdade();
};

string Aluno::getNome(){
   return nome;
}


int Aluno::getMat(){
   return mat;
}


int Aluno::getIdade(){
   return idade;
}

class Lista{

	private:
		Aluno *l[10];
		int quant;

	public:

		Lista(){
			quant=0;
		}

		void inserir(int m,string n, int Idade){

			if (quant<=9){
				l[quant]= new Aluno(m,n, Idade);
		    	quant++;
			}
	  	}

		void mostrar(){
			for (int i=0;i<quant;i++)
				cout<<"\nMatricula: "<<l[i]->getMat()<<"\nNome: "<<l[i]->getNome()<< "\nIdade: "<<l[i]->getIdade()<< endl;
		}

		int getQuant(){
			return quant;
		}




		Aluno *maisvelho(){

            Aluno *AlunoMaisVelho;
			int cont, Idade;
			string Matricula, Nome;
			
            for(int i = 1; i < quant - 1; i++) {

                if (l[i]-> getIdade() > l[i+1]-> getIdade()) {

                    int cont = i;
                    AlunoMaisVelho = l[cont];
                    Idade = l[cont] -> getIdade();
                    Matricula = l[cont] -> getMat();
                    Nome = l[cont] -> getNome();
                }
                else if (l[i]-> getIdade() < l[i+1]-> getIdade()) {

                    int cont = i + 1;
                    Idade = l[cont] -> getIdade();
                    Matricula = l[cont] -> getMat();
                    Nome = l[cont] -> getNome();
                }
            }
            
            cout << "\n\nMaior idade: " << Idade << ".\n" << "Aluno: " << Nome << ".\n" << "Matricula: " << Matricula << ".\n" << endl;
            
            return AlunoMaisVelho;
		};          
};




int main(){

	int op;
	Lista *turma = new Lista();

	cout << "\nQuantidade: " << turma -> getQuant() << "\n";

	turma -> inserir(1,"Fabio", 15);
	turma -> inserir(2,"Joana", 17);
	turma -> inserir(3,"Glaucio", 22);
	turma -> mostrar();

	cout << "\nQuantidade de alunos: " << turma -> getQuant();
	
	Aluno *velho = turma -> maisvelho();

    return 0;
}
