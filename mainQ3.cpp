#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip> 

using namespace std;

#include "Q3.cpp"

int main(int argc, char** argv) {
	
	int n;

	cout << "Digite um valor: ";
	cin >> n;
	Aleatorio teste;
	
	while(n != 0){
		
		teste.setJogar(n);
		cout << "Digite um valor: ";
		cin >> n;
	}

	return 0;
}
