#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main(){
	
	struct funcionario
	{
		int cod;
		char nome[50]; 
		int salario; 
		char depto[30];
		char cargo[30];
	};
	int x=1, z=1;
	
	struct funcionario f[4];
	
	for( int i=0 ; i<4 ; i++ )
	{
		cout << "Funcionario " << z << endl;
		cout << "Digite o seu codigo:" << endl;
		cin >> f[i].cod;
		cout << "Digite o seu nome:" << endl;
		cin >> f[i].nome;
		cout << "Digite sua salario:" << endl;
		cin >> f[i].salario;
		cout << "Digite o seu departamento:" << endl;
		cin >> f[i].depto;
		cout << "Digite o seu cargo:" << endl;
		cin >> f[i].cargo;
		z++;
		
	}
	
	cout << "---------------Exibir todos os funcionarios---------------" << endl;
	for (int i=0; i<4; i++)
	{
		cout << "Funcionario " << x << endl; 
		cout << "Codigo:" << f[i].cod << endl;
		cout << "Nome:" << f[i].nome << endl;
		cout << "Salario:" << f[i].salario << endl;
		cout << "Depto:" << f[i].depto << endl;
		cout << "Cargo:" << f[i].cargo << endl;
		x++;
	}
	
	return 0;
	
}
