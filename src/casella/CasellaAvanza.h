/*
 * CasellaAvanza.h
 *
 *  Created on: 09 lug 2018
 *      Author: satis
 */

#ifndef CASELLA_CASELLAAVANZA_H_
#define CASELLA_CASELLAAVANZA_H_

#include "Casella.h"
using namespace std;

class CasellaAvanza: public Casella { // @suppress("Class has a virtual method and non-virtual destructor")
private:
	int move;

public:

	CasellaAvanza(int spostamento);
	void effetto(Giocatore *giocatore) override;
	int getMove() const;
	void setMove(int move);
};

#endif /* CASELLA_CASELLAAVANZA_H_ */
