#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip> 

using namespace std;

typedef struct Jogador{

    int nuneroCamisaJogador;
    int votoDoJogador;
	

} Jogador;

struct Jogador jogador[23];//vetor de structs

int Porcentagem(int numeroTotalDeVotos, int votoDoJogador){
	
	int porcento;
	porcento = (votoDoJogador * 100)/numeroTotalDeVotos;
	return porcento;
}

//#include "Q4.cpp"

int main(int argc, char** argv) {
	
	int DigitaCamisa = -1, numeroTotalDeVotos = 0, maior = -1;

	cout << "Digite a Camisa do Jogador: ";
	cin >> DigitaCamisa;
	//Jogador meuJogador;

	if(DigitaCamisa == 0){
		return 0;
	}

	while(DigitaCamisa < 0 || DigitaCamisa > 23){
		cout << "Numero da Camisa Invalido Digite Novamente\n";
		cout << "Digite a Camisa do Jogador: ";
		cin >> DigitaCamisa;
	}
	
	while(DigitaCamisa != 0){
		
		numeroTotalDeVotos++;
		jogador[DigitaCamisa - 1].nuneroCamisaJogador = DigitaCamisa;
		jogador[DigitaCamisa - 1].votoDoJogador++;
		
		//meuJogador.setJogador(DigitaCamisa);
		cout << "Digite a Camisa do Jogador: ";
		cin >> DigitaCamisa;
		
		while(DigitaCamisa < 0 || DigitaCamisa > 23){
		cout << "Numero da Camisa Invalido Digite Novamente\n";
		cout << "Digite a Camisa do Jogador: ";
		cin >> DigitaCamisa;
		}
	}//fim do while
		
    struct Jogador vet;
    int i,j;

    Jogador ordenado[23];

    for(i = 0; i < 23; i++){
    	ordenado[i] = jogador[i];
    }

    for ( i = 1 ; i < 23 ; i++ ){
     	for(j = 0; j < 23 -1; j++){
     		if(ordenado[j].votoDoJogador <  ordenado[j+1].votoDoJogador){
	     		vet = ordenado[j];
				ordenado[j] = ordenado[j+1];
	     		ordenado[j+1] = vet;
			}
		}  
    }//fim do for interno
	
	cout << "\nJogador" << setw(12) << "Votos" << setw(17) << "Porcentagem" << endl;;
	
	for(int i = 0; i < 23; i++){
		if(ordenado[i].votoDoJogador != 0){
			cout << setw(4) << ordenado[i].nuneroCamisaJogador;
			cout << setw(12) << ordenado[i].votoDoJogador;
			cout << setw(16) << Porcentagem(numeroTotalDeVotos, ordenado[i].votoDoJogador) << " %"<< endl;
		}
	}
	
	cout << "\nO jogador mas votado foi o numero  " << ordenado[0].nuneroCamisaJogador << ", ele recebeu " << ordenado[0].votoDoJogador << " votos," 
		<< " ficando com " << Porcentagem(numeroTotalDeVotos, ordenado[0].votoDoJogador) << " % do total de votos" << endl;
	
	return 0;
}
