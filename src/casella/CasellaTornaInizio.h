/*
 * CasellaTornaInizio.h
 *
 *  Created on: 09 lug 2018
 *      Author: satis
 */

#ifndef CASELLA_CASELLATORNAINIZIO_H_
#define CASELLA_CASELLATORNAINIZIO_H_


#include "Casella.h"
using namespace std;

class CasellaTornaInizio: public Casella {
public:
	CasellaTornaInizio();
	void effetto(Giocatore *giocatore)override;
};

#endif /* CASELLA_CASELLATORNAINIZIO_H_ */
