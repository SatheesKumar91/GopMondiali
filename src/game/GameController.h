/*
 * GameController.h
 *
 *  Created on: 08 lug 2018
 *      Author: satis
 */

#ifndef GAME_GAMECONTROLLER_H_
#define GAME_GAMECONTROLLER_H_
#include "../casella/Casella.h"
#include "../giocatore/Giocatore.h"
#include <iostream>
#include <ostream>
#include <string>
#include <cstring>

using namespace std;

class GameController {

private:
	int numeroCaselle;
	int prob;
	int probSpecial;
	int dado;
	Casella *tabellone [100];


	//da rimuovere
	Casella *tabellone2[100];

public:
	GameController();
	void messaggioBenvenuto();
	void creaTabellone();
	int lanciaDado();


	//da rimuovere
	void stampaTabellone(Casella *tabellone[], int lenght);
	/*void creaTabelloneVuoto();
	void stampaTabelloneVuoto(Casella *tabellone[], int lenght);
	*/
	void stampaGiocatore(Giocatore *giocatore);
	void cambiaPosizione(Giocatore *giocatore , int dado, int numeroCaselle);
	void integritaTabellone(Casella *tabellone, int lenght);
};

#endif /* GAME_GAMECONTROLLER_H_ */
