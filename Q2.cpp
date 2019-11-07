#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Q2.h"

using namespace std;

//função para configurar o nome do curso
void Aleatorio::setJogar(int aleatorio)
{
	cout << "	Adivinhe o numero de 0 a 100\n\nDigite um Numero: ";
	cin >> numeroDigitado;
	
	//cout << aleatorio;

	while(aleatorio != numeroDigitado)
	{
		if(numeroDigitado > aleatorio){
			cout << "Valor Maior\nTente Novamente";
		}else{
			cout << "Valor Menor\nTente Novamente";
		}
			
		cout << "\n\nDigite outro Numero: ";
		cin >> numeroDigitado;
	}
	
	cout <<"\nParabens Voce Venceu!!!";
}


