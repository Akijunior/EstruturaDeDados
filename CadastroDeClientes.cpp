#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class DadosDoCliente{
	
	private:
		int numCartao;
		string nomeDoCliente;
		float saldo, limite;
	
	public:
		
		DadosDoCliente(){}
		DadosDoCliente(string nome,int numeroCartao, int saldoCartao, int limCartao){
			
			nomeDoCliente = nome;
			numCartao = numeroCartao;
			saldo = saldoCartao;
			limite = limCartao;
		}
		
		string getNome(){
			return nomeDoCliente;
		}
		float getSaldo(){
			return saldo;
		}
		float getLimite(){
			return limite;
		}
		
		int getNumCartao(){
			return numCartao;
		}

	};




typedef struct DadosDoCliente Cliente;

class ListaDeCliente{
	
	private:
		Cliente *clientesCadastrados[5];
		int quant;
	
	public:
		
		ListaDeCliente(){
			quant = 0;
		}
		void addCliente(string nome,int numCartao, int saldoCartao, int limCartao){

			if (quant <= 4){
				clientesCadastrados[quant] = new Cliente(nome, numCartao, saldoCartao, limCartao);
		    	quant++;
			}
			else{
				cout << "Nao ha vagas para novos cadastros!";
			}
	  	}

		void mostrar(){
			for (int i=0;i<quant;i++)
				cout << "\nNome do Cliente: "<< clientesCadastrados[i] -> getNome() << "\nNumero do Cartao: "
				<< clientesCadastrados[i] -> getNumCartao() << "\nSaldo do Cartao: "<< clientesCadastrados[i] -> getSaldo()
				<< "\nLimite do Cartao: "<< clientesCadastrados[i] -> getLimite() << endl;
		}

		int getQuant(){
			return quant;
		}


		Cliente *maiorLimite(){

            int maior = clientesCadastrados[0] -> getSaldo();
            Cliente *mv = clientesCadastrados[0];
            
			for(int i = 1; i < quant; i++){
				
				if (clientesCadastrados[i] -> getLimite() > mv -> getLimite()){

					mv = clientesCadastrados[i];
				} 
			}
			return mv;
		}

		Cliente *menorLimite(){

            int maior = clientesCadastrados[0] -> getSaldo();
            Cliente *mv = clientesCadastrados[0];
            
			for(int i = 1; i < quant; i++){
				
				if (clientesCadastrados[i] -> getLimite() < mv -> getLimite()){

					mv = clientesCadastrados[i];
				} 
			}
			return mv;
		}	
	};
	
int main(){

	int op;
	ListaDeCliente *clientes = new ListaDeCliente();

	cout << "\nQuantidade: " << clientes -> getQuant() << "\n";
	clientes -> addCliente("Fabio", 15, 1400, 2800);
	clientes -> addCliente("Joana", 17, 750, 2500);
	clientes -> addCliente("Glaucio", 22, 870, 4000);
	clientes -> mostrar();

	cout << "\nQuantidade de clientes: " << clientes -> getQuant();
	
	Cliente *rico = clientes -> maiorLimite();
	Cliente *pobre = clientes -> menorLimite();
	
	cout << "\n\nCliente de maior limite: " << rico -> getNome() << ".\n" << "Limite: " << rico -> getLimite() << "." << endl;
	cout << "\n\nCliente de menor limite: " << pobre -> getNome() << ".\n" << "Limite: " << pobre -> getLimite() << "." << endl;

    return 0;
	}



