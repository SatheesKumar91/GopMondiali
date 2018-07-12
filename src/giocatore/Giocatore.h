/*
 * Giocatore.h
 *
 *  Created on: 10 lug 2018
 *      Author: satis
 */

#ifndef GIOCATORE_GIOCATORE_H_
#define GIOCATORE_GIOCATORE_H_
#include <string>

using namespace std;

class Giocatore {
private:
	string nome;
	int pos;
public:
	Giocatore();
	Giocatore(string nome, int pos);
	const string& getNome() const;
	void setNome(const string& nome);
	int getPos() const;
	void setPos(int pos);

};

#endif /* GIOCATORE_GIOCATORE_H_ */
