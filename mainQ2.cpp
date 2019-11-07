#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

#include "GradeBook.cpp"

int main(int argc, char** argv) {
	
	int aleatorio;
	srand(time(0));

	aleatorio = rand() % 100;
	cout << aleatorio;
	
	Aleatorio teste;
	teste.setJogar(aleatorio);
	
	return 0;
}















