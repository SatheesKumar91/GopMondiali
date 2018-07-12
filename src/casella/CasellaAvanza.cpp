/*
 * CasellaAvanza.cpp
 *
 *  Created on: 09 lug 2018
 *      Author: satis
 */

#include "CasellaAvanza.h"
using namespace std;


CasellaAvanza::CasellaAvanza(int spostamento) {
	setMove(spostamento);
	nome = "Casella avanza";
}

void CasellaAvanza :: effetto(Giocatore *giocatore){
	giocatore->setPos(giocatore->getPos()+3);

}

void CasellaAvanza::setMove(int move) {
	this->move = move;
}

int CasellaAvanza::getMove() const {
	return move;
}




