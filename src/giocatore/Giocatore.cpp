/*
 * Giocatore.cpp
 *
 *  Created on: 10 lug 2018
 *      Author: satis
 */

#include "Giocatore.h"

Giocatore::Giocatore() {
	nome = "";
	pos = 0;
}

Giocatore::Giocatore(string nome, int pos){
	this->nome = nome;
	this->pos =pos;
}

const string& Giocatore::getNome() const {
	return nome;
}

void Giocatore::setNome(const string& nome) {
	this->nome = nome;
}

int Giocatore::getPos() const {
	return pos;
}

void Giocatore::setPos(int pos) {
	this->pos = pos;
}



