#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Q3.h"

using namespace std;

//função para configurar o nome do curso
void Aleatorio::setJogar(int n)
{
	
	int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0, cont6 = 0, randomico;
	srand(time(0));
	
	cout << "\nValores Sorteados" << endl;
	
	for(int i = 1; i <= n; i++){
		
		randomico = (1 + rand() % 6);
		
		if(randomico == 1){
			cont1++;
		}
		if(randomico == 2){
			cont2++;
		}
		if(randomico == 3){
			cont3++;
		}
		if(randomico == 4){
			cont4++;
		}
		if(randomico == 5){
			cont5++;
		}
		if(randomico == 6){
			cont6++;
		}
	
		cout << setw(10) << randomico << endl;//imprime os números sorteados
		
	}//fim do for
	
	cout << "\nValor do Dado" << setw(13) << "Apareceu" << setw(15) << "Porcentagem" << endl;
	
	cout << setw(7) << "1" << setw(16) << cont1 << setw(13) << (cont1*100)/n << " %" << endl;
	cout << setw(7) << "2" << setw(16) << cont2 << setw(13) << (cont2*100)/n << " %" << endl;
	cout << setw(7) << "3" << setw(16) << cont3 << setw(13) << (cont3*100)/n << " %" << endl;
	cout << setw(7) << "4" << setw(16) << cont4 << setw(13) << (cont4*100)/n << " %" << endl;
	cout << setw(7) << "5" << setw(16) << cont5 << setw(13) << (cont5*100)/n << " %" << endl;
	cout << setw(7) << "6" << setw(16) << cont6 << setw(13) << (cont6*100)/n << " %" << endl;
	
}











