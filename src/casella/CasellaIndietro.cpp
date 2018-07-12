/*
 * CasellaIndietro.cpp
 *
 *  Created on: 09 lug 2018
 *      Author: satis
 */

#include "CasellaIndietro.h"
using namespace std;

CasellaIndietro::CasellaIndietro() {
	// TODO Auto-generated constructor stub
	nome = "Casella torna indietro";

}

void CasellaIndietro :: effetto(Giocatore *giocatore){
	giocatore->setPos(giocatore->getPos()-3);
}

CasellaIndietro::~CasellaIndietro() {
	// TODO Auto-generated destructor stub
}

