/*
 * Casella.h
 *
 *  Created on: 08 lug 2018
 *      Author: satis
 */

#ifndef GAME_CASELLA_H_
#define GAME_CASELLA_H_
#include <string>
#include <cstring>
#include "../giocatore/Giocatore.h"

using namespace std;



class Casella {

protected:

	int move;

public:
	Casella();
	virtual void effetto(Giocatore *giocatore){}
	string messaggio();
	int getMove() const;
	void setMove(int move);

	string nome;
};

#endif /* GAME_CASELLA_H_ */
