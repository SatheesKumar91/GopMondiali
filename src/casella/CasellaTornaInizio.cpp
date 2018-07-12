/*
 * CasellaTornaInizio.cpp
 *
 *  Created on: 09 lug 2018
 *      Author: satis
 */

#include "CasellaTornaInizio.h"
using namespace std;

CasellaTornaInizio::CasellaTornaInizio() {

	nome = "Casella torna inizio";

}

void CasellaTornaInizio::effetto(Giocatore *giocatore){
	giocatore->setPos(0);
}


