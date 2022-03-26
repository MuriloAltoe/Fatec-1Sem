#include <iostream>
#include <stdlib.h>
#include <locale>
#include <cstring>
using namespace std;
int main()
{
	
	int vetor[5];
	int *ptr=NULL;
	int i;
	
	for(i=0; i<5; i++){
		
		ptr = &vetor[i];
		cout << "Insira o numero" << i+1 << endl;
		cin >> *ptr;
	}
	
	for(i=0; i<5; i++){
		
		int dobro;
		dobro = vetor[i]*2;
		
		cout << "O dobro do vetor" << i+1 << " eh " << dobro << endl;
	}
	
	for(i=0; i<5; i++){
		
		ptr = &vetor[i];
		
		cout << "Endereco " << i+1 << ": " << ptr << endl;	
	}

	return 0;
	
}
	
	
	
