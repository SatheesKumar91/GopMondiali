/*
 * Casella.cpp
 *
 *  Created on: 08 lug 2018
 *      Author: satis
 */
#include "../casella/Casella.h"

#include <string>
#include <cstring>

using namespace std;


Casella::Casella() {
	// TODO Auto-generated constructor stub

}

int Casella::getMove() const {
	return move;
}

void Casella::setMove(int move) {
	this->move = move;
}
