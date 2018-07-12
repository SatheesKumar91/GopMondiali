/*
 * CasellaSaltaTurno.h
 *
 *  Created on: 09 lug 2018
 *      Author: satis
 */

#ifndef CASELLA_CASELLASALTATURNO_H_
#define CASELLA_CASELLASALTATURNO_H_

#include "Casella.h"
using namespace std;

class CasellaSaltaTurno: public Casella {
public:
	CasellaSaltaTurno();
	void effetto(Giocatore *giocatore)override;
};

#endif /* CASELLA_CASELLASALTATURNO_H_ */
