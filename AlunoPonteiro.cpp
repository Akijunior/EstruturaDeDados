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

            int maior = l[0] -> getIdade();
            Aluno *mv = l[0];
            
			for(int i = 1; i < quant; i++){
				
				if (l[i] -> getIdade() > mv -> getIdade()){

					mv = l[i];
				} 
			}
			return mv;
}
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
	
	cout << "\n\nMaior idade: " << velho -> getIdade() << ".\n" << "Aluno: " << velho -> getNome() << ".\n" << "Matricula: " << velho -> getMat() << ".\n" << endl;

    return 0;
	}
