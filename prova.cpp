#include <locale>
#include <iostream>

using namespace std;

bool lista_Cheia(int n, int cont){
	if(cont < n){
		return true;
	}
	if(cont == n){
		return false;
	}
}

bool Consulta_Prato(int aux){
	if(aux >= 1){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	
	int n, op=0, cont=0, aux=0;
	
	cout << "Projeto Festa junina" << endl;
	
	cout << "Digite quantos convidados haverao na lista: ";
	cin >> n;
	
	string info[n][3], pesq;
	
	while(op != 4){
	
		cout << endl << "Selecione a opção desejada" << endl;
		cout << "1- Incluir convidado" << endl;
		cout << "2- Pesquisar convidado" << endl;
		cout << "3- Imprimir lista" << endl;
		cout << "4- Sair" << endl;
	
		cin >> op;
		aux=0;
		
		switch(op){
		case 1:
			if (lista_Cheia(n, cont) == true){
				cout << "Digite o Nome: ";
				cin >> info[cont][0];
				cout << "Digite o Telefone: ";
				cin >> info[cont][1];
				cout << "Digite o Prato: ";
				cin >> pesq;
				
				for(int i=0; i<cont; i++){
					if(pesq == info[i][2]){
						aux++;
					}
				}
				if(Consulta_Prato(aux) == false){
					info[cont][2] = pesq;
				}
				if(Consulta_Prato(aux) == true){
					cout << "Ja registrado";
					cont--;
				}
				
				cont++;
			}
			else{
				cout << "Lista cheia!!!";
			}
		break;
		
		case 2:
			cout << "Digite o nome: ";
			cin >> pesq;
			for(int i=0; i<cont; i++){
					if(pesq == info[i][0]){
						cout << info[i][0] << ", " << info[i][1] << ", " << info[i][2];
						break;
					}
					else{
						cout << "Não registrado";
					}
			}
			
		break;
		
		case 3:
			for(int i=0; i<cont; i++){
				cout << info[i][0] << ", " << info[i][1] << ", " << info[i][2] << endl;
			}
		break;
		
		case 4:
		break;
		}
	}
	
	return 0;
}
