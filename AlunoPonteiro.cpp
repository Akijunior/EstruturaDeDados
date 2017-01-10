
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

            int maiorIdade = l[0] -> getIdade();
            Aluno *AlunoMaisVelho;

            for(int i = 1; i < quant - 1; i++) {

                if (l[i]-> getIdade() > l[i+1]-> getIdade()) {
                    maiorIdade = l[i] -> getIdade();
                }
                else if (l[i] < l[i+1]) {
                    maiorIdade = l[i+1] -> getIdade();
                }
            }
            for(int j = 0; j < quant - 1; j++) {

                if (l[j]-> getIdade() == maiorIdade) {
                    AlunoMaisVelho = l[j];
                    break;
                }
		};
            return AlunoMaisVelho;
};

};
int main(){

	int op;
	Lista * turma = new Lista();

	cout << "Quantidade: " << turma -> getQuant();

	turma -> inserir(1,"Fabio", 15);
	turma -> inserir(2,"Joana", 17);
	turma -> inserir(3,"Glaucio", 22);
	turma -> mostrar();

	cout << "\nQuantidade de alunos: " << turma -> getQuant();
	

	Aluno *velho = turma -> maisvelho();

    cout << "\n\nMais velho: " << velho -> getNome() << "\nIdade: " << velho -> getIdade() ;

    return 0;
}


