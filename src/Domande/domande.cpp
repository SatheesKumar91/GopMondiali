/*
 * domande.cpp
 *
 *  Created on: 09 lug 2018
 *      Author: satis
 */

#include <string>
using namespace std;


struct Domanda {
	string domanda;
	string risposte[4];
	int rispCorretta;
};


Domanda domande[]= {
		{
				"Quale nazionale ha vinto più mondiali fino ad ora?",
				{
						"Italia", "Brasile", "Germania", "Francia"
				},
				2
		},
		{
				"Dove si giocheranno i prossimi mondiali del 2022?",
				{
						"Qatar", "Francia", "Argentina", "Giappone"
				},
				1
		},
		{
				"Quale giocatore ha segnato piu gol complessivi, nella storia dei mondiali?",
				{
						"C.Ronaldo", "L.Messi", "M.Klose", "M.Platini"
				},
				3
		},
		{
				"Contro quale squadra Maradona fece il gol soprannominato 'Mano de dios' ?",
				{
						"Italia", "Spagna", "Inghilterra", "USA"
				},
				3
		},
		{
				"Nell'edizione del 2006 chi fu l'allenatore che portò l'Italia alla vittoria?",
				{
						"F.Capello", "M.Lippi", "M.Allegri", "C.Ancelotti"
				},
				2
		},
		{
				"Quale di queste nazionali africane raggiunse per prima nella storia, i quarti di finale?",
				{
						"Camerun", "Nigeria", "Egitto", "Senegal"
				},
				1
		},
		{
				"Quale di queste nazionali non ha mai partecipato alla fase finale di un mondiale?",
				{
						"Panama", "Equador", "Turchia", "India"
				},
				4
		},
		{
				"Quante squadre partecipano alla fase finale del mondiale?",
				{
						"16", "48", "32", "8"
				},
				3
		},
		{
				"Dove si disputo l'edizione del 2014?",
				{
						"Germania", "Argentina", "Russia", "Brasile"
				},
				4
		},
		{
				"Quanto pesa all'incirca la coppa che viene consegnata al paese vincitore?",
				{
						"2kg", " 10kg", "6kg", "1kg"
				},
				6
		},
		{
				"In che anno si disputò la prima edizione della coppa del mondo?",
				{
						"1930", "1945", "1982", "1952"
				},
				1
		},
		{
				"Quale nazionale ha raggiunto più volte il podio nella storia dei mondiali?",
				{
						"Brasile", "Germania", "Russia", "Italia"
				},
				2
		},
		{
				"L'attuale coppa è stata disegnata da un designer: ",
				{
						"Italiano", "Inglese", "Francese", "Spagnolo"
				},
				1
		},
		{
				"La mascotte del mondiale appena conclusosi in russia era: ",
				{
						"Un gatto", "Un orso", "Una tigre", "Un lupo"
				},
				4
		},
		{
				"In che posizione si classificò l'Italia, nel mondiale che ospitò nel 1990?",
				{
						"Prima", "Seconda", "Terza", "Quarta"
				},
				3
		}
};


