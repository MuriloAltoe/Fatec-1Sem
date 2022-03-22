#include <iostream>
#include <cstring>
#include <locale>
#include <cmath>
#include <iomanip>

using namespace std;

int funcao(int mediaf, int mvetor);

int main(){
	
	int x, vetor, mvetor=0, result, mediaf, recebe; 
	
	while(x<10){
		
		cout << "Digite o vetor:";
		
		cin >> vetor;
		
		if(vetor > mvetor){
			mvetor = vetor;
		}
		
		recebe = recebe+vetor;
		
	x++;
	}
	
	mediaf=(recebe/10);
	
	
	cout << "O maior vetor e:" << mvetor;
	cout << "\nO a media dos vetorer e:" << mediaf;
	
	result = funcao(mediaf, mvetor);
	
	cout << "\nEssa é a resposta final: " << result;	
	
}

int funcao(int mediaf, int mvetor){
	
	int r;
	
	r = (mediaf - mvetor);
	
	return r;	
	
}
