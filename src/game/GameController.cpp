/*
 * GameController.cpp
 *
 *  Created on: 08 lug 2018
 *      Author: satis
 */



#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

#include "../game/GameController.h"
#include "../casella/Casella.h"
#include "../casella/CasellaVuota.h"
#include "../casella/CasellaAvanza.h"
#include "../casella/CasellaIndietro.h"
#include "../casella/CasellaPescaCarta.h"
#include "../casella/CasellaSaltaTurno.h"
#include "../casella/CasellaTornaInizio.h"
#include "../casella/CasellaFinale.h"
#include "../casella/CasellaIniziale.h"
#include "../giocatore/Giocatore.h"



GameController::GameController() { // @suppress("Class members should be properly initialized")

	//metodo per il messaggio di benvenuto

	messaggioBenvenuto();

	srand((unsigned int)time(0));
	// creazione dei giocatori da eliminare

	string nomeGiocatore = "Sasso";
	Giocatore *giocatore1 = new Giocatore(nomeGiocatore, 0);

	stampaGiocatore(giocatore1);


	creaTabellone();


	stampaTabellone(tabellone, numeroCaselle);

	cout << "Programma terminato" << endl;

	//ESPERIMENTI

	cout << giocatore1->getNome() << " inizia la partita..." << endl;

	while (tabellone[giocatore1->getPos()]->nome != "Finish"){
		dado = lanciaDado();
		cout << "esce il numero: " << dado << endl;
		cambiaPosizione(giocatore1, dado, numeroCaselle);
		cout << giocatore1->getNome() << " alla posizione: " << giocatore1->getPos() << endl;
		cout << tabellone[giocatore1->getPos()]->nome << "!"<< endl;
		while(tabellone[giocatore1->getPos()]->nome != "Casella Vuota"){
			tabellone[giocatore1->getPos()]->effetto(giocatore1);
			cout << giocatore1->getNome() << " alla posizione: " << giocatore1->getPos() << endl;
			cout << tabellone[giocatore1->getPos()]->nome << "!"<< endl;
		}
	}
	cout << giocatore1->getNome() << " vince!!" << endl;



	//FINE ESPERIMENTI



	cout << "Programma terminato" << endl;




}

void GameController :: creaTabellone(){

	cout << "Creazione tabellone in corso...." << endl;

	int V= 0, A= 0, I= 0, PC= 0, ST= 0,TI= 0;

	numeroCaselle = rand()  % 61+ 40;
	tabellone[numeroCaselle-1] = new CasellaFinale();
	tabellone[0] = new CasellaIniziale();

	for (int i = 1; i < numeroCaselle-1 ; ++i) {

		prob = rand() % 100;

	//	cout << "probabilità"<< prob << endl;

		if (prob < 50) {
			tabellone[i] = new CasellaVuota();
			V++;
		}else {
			probSpecial = rand() % 100;
			if (probSpecial < 20) {
				tabellone[i] = new CasellaAvanza(rand()%4+1);
				A++;
			} else if (probSpecial < 40 ) {
				tabellone[i] = new CasellaIndietro();
				I++;
			} else if(probSpecial < 75) {
				tabellone[i] = new CasellaPescaCarta();
				PC++;
			} else if(probSpecial < 92){
				tabellone[i] = new CasellaSaltaTurno();
				ST++;
			} else{
				tabellone[i] = new CasellaTornaInizio();
				TI++;
			}

		}

	}

	cout << "Tabellone generato!" << endl;
	cout << "numero caselle totali: " << numeroCaselle << endl;
	cout << "numero caselle vuote: " << V << endl;
	cout << "numero caselle avanza: " << A << endl;
	cout << "numero caselle indietro: " << I << endl;
	cout << "numero caselle Pesca una carta: " << PC << endl;
	cout << "numero caselle salta un turno: " << ST << endl;
	cout << "numero caselle torna all'inizio: " << TI << endl;

}

void GameController :: messaggioBenvenuto(){
	cout<<"Benvenuti al Gioco Dell'Oca Tema Mondiali" << endl;
}



void GameController :: stampaGiocatore(Giocatore *giocatore){
	cout << "Nome Giocatore: " << giocatore->getNome()<< " "<< "Attualmente alla casella: "<< giocatore->getPos()<< endl;

}

int GameController :: lanciaDado(){
	return (rand() % 6) + 1;

}

void GameController::cambiaPosizione(Giocatore *giocatore, int dado, int numeroCaselle ){
	giocatore->setPos(giocatore->getPos()+ dado);
	if (giocatore->getPos()> numeroCaselle-1) {
		giocatore->setPos(numeroCaselle-1);
	}
}

/*void GameController::creaTabelloneVuoto(){
	for (int i = 0; i < 20; ++i) {
		tabellone2[i] = new CasellaVuota();
	}
}

void GameController:: stampaTabelloneVuoto(Casella *tabellone[], int lenght){
	for (int var = 0; var < lenght; ++var) {
		cout << tabellone[var]->nome << endl;

	}
}*/

void GameController::stampaTabellone(Casella *tabellone[], int lenght){
	for (int i = 0; i < lenght; ++i) {
		cout <<i << ". "<< tabellone[i]->nome << endl;

	}
}

// Esperimento
void GameController::integritaTabellone(Casella *tabellone, int lenght){
	for (int i = 0; i < lenght; ++i) {
		if (tabellone[i].nome != "Casella Avanza") {
			continue;
		}

		int a = 0;
		int nuovoMov = tabellone[i].getMove();
		while  (i+nuovoMov >= lenght || tabellone[i+nuovoMov].nome != "Casella Vuota"){
			nuovoMov = a++;
		}
		tabellone[i].setMove(nuovoMov);

	}

}
