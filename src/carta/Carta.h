/*
 * Carta.h
 *
 *  Created on: 11 lug 2018
 *      Author: satis
 */

#ifndef CARTA_CARTA_H_
#define CARTA_CARTA_H_

#include "../giocatore/Giocatore.h"
#include <string>
using namespace std;


class Carta {

public:
	Carta();
	string nome;
	virtual void effetto(Giocatore *giocatore){}
};



#endif /* CARTA_CARTA_H_ */
