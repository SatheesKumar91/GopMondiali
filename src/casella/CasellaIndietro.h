/*
 * CasellaIndietro.h
 *
 *  Created on: 09 lug 2018
 *      Author: satis
 */

#ifndef CASELLA_CASELLAINDIETRO_H_
#define CASELLA_CASELLAINDIETRO_H_

#include "Casella.h"
using namespace std;

class CasellaIndietro: public Casella {
public:
	CasellaIndietro();
	void effetto(Giocatore *giocatore) override;
	virtual ~CasellaIndietro();
};

#endif /* CASELLA_CASELLAINDIETRO_H_ */
