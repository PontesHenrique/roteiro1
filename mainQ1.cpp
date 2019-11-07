#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int maior = 0, digitado = -1;
	
	while(digitado != 0){
		
		if(digitado > maior){
			maior = digitado;
		}
			
		cout << "Digite um Numero ( 0 para sair): ";
		cin >> digitado;
	}
		cout << "maior: " << maior << endl;

	return 0;
}
