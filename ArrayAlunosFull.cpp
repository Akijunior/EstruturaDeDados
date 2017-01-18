#include <iostream>

#include <string>

using namespace std;



class Aluno {



	private:

		string nome;



	public:

		int mat, idade;

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
	  	
	  	void remover(int indice) {
	  		
	  		for(int i = indice; i < quant - 1; i++){
	  			l[i] = l[i+1];
			  }
			  quant --;
		  }
	
		
		void consultar(){
			
			int opcao;
			cout << "Digite 1 para escolher por matricula, 2 para ver por nome e 3 para filtrar por idade.";
			cin >> opcao;
			
			if(opcao == 1){
				cout << "\\Consulta por Matricula//\n\n";
				int matSearch;
				cout << "Digite a matricula do aluno que procura: \n";
				cin >> matSearch;
				for(int i = 0; i < quant; i++){
					if(l[i] -> getMat() == matSearch){
						cout<<"\nMatricula: "<<l[i]->getMat()<<"\nNome: "<<l[i]->getNome()<< "\nIdade: "<<l[i]->getIdade()<< endl;
						}
					}
				}
			
			else if(opcao == 2){
				cout << "\\Consulta por Nome//\n\n";
				cout << "Digite o nome do aluno que procura: \n";
				string nameSearch;
				cin >> nameSearch;
				for(int i = 0; i < quant; i++){
					if(l[i] -> getNome() == nameSearch){
						cout<<"\nMatricula: "<<l[i]->getMat()<<"\nNome: "<<l[i]->getNome()<< "\nIdade: "<<l[i]->getIdade()<< endl;
						}
					}
			}
			
			else if(opcao == 3){
				cout << "\\Consulta por Idade//\n\n";
				cout << "Digite a idade do aluno que procura: \n";
				int idadeSearch;
				cin >> idadeSearch;
				for(int i = 0; i < quant; i++){
					if(l[i] -> getIdade() == idadeSearch){
						cout<<"\nMatricula: "<< l[i]->getMat() <<"\nNome: "<< l[i]->getNome() << "\nIdade: "<<l[i]->getIdade()<< endl;
						}
					}
				}
			cout << "\n\n";
			}
		
		
		void alterar(){
			
			int posicao, opcao;
			cout << "Digite a posicao do aluno de quem deseja alterar dados: ";
			cin >> posicao;
			cout << "Digite 1 - Alterar Matricula\n2 - Alterar nome\n3 - Alterar idade\n";
			cin >> opcao;
			
			Aluno *mv = l[posicao];
			
			if(opcao == 1){
				
				int novaMatricula;
				cout << "Digite a nova matricula do aluno: \n";
				cin >> novaMatricula;
				mv -> mat = novaMatricula;
				}
			
			else if(opcao == 2){
				cout << "Digite o novo nome do aluno: \n";
				string novoNome;
				cin >> novoNome;
				l[posicao] -> getNome() = novoNome;
			}
			
			else if(opcao == 3){
				cout << "Digite a nova idade do aluno: \n";
				int novaIdade;
				cin >> novaIdade;
				mv -> idade = novaIdade;
			}
			cout << "A alteracao foi feita com sucesso!\n\n";
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
	string painel = "\\\\\ PAINEL DE ALUNOS /////\n\n1 - Adicionar novo Aluno\n2 - Remover Aluno\n3 - Consultar aluno\n4 - Alterar Cadastro de Aluno\n0 - Sair\n";
	cout << painel;
	cin >> op;
	
	while(op != 0){
	
		if (op == 1){
			int mat, idade;
			string nome;
			cout << "Digite a matricula do aluno: \n";
			cin >> mat;
			cout << "Digite o nome do aluno: \n";
			cin >> nome;
			cout << "Digite a idade do aluno: \n\n";
			cin >> idade;
			turma -> inserir(mat,nome, idade);		
		}
		
		else if (op == 2){
			int indice;
			cout << "Digite o indice do aluno que deseja remover: \n";
			cin >> indice;
			turma -> remover(indice);
			cout << "\nO aluno foi removido com sucesso!\n\n";
		}
	
		else if (op == 3) {
			turma -> consultar();
		}
		
		else if(op == 4){
			turma -> alterar();
			
		}
		
		else if(op == 0){
			cout << "O programa sera agora encerrado... Tanananam\n";
			break;
		}
		cout << "Situacao atual\n\n";
		turma -> mostrar();
		cout << "\nQuantidade de alunos: " << turma -> getQuant() << "\n";
		cout << painel;
		cin >> op;
		
		}

    return 0;

	}


