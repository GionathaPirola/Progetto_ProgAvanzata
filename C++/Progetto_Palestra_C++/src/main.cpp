//============================================================================
// Name        : Progetto_Palestra_C++.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Progetto programmazione avanzata
//============================================================================

#include <iostream>
#include "Abbonato.h"
#include "Abbonato_plus.h"
#include "Corso.h"
#include "Iscritto.h"
#include "list"
using namespace std;

//Metodo Che prende una lista di corsi e li stampa utilizzando iterator
string toString(list<Corso> la){
	string s ="";
	list<Corso>::iterator i;
	for(i = la.begin(); i != la.end(); ++i){
		s = s + i->toString() + "\n";
	}
	return "I corsi esistenti sono: \n" + s + "\n";
}

int main() {

	//Creazione di abbonati e abbonati plus base
	Abbonato a1("Andrew", "Slow", 2000,false);
	Abbonato_plus a2("Gionatha", "Pirola", 2000,false);

	//Creazione di abbonati e abbonati plus tramite iscrizione, iscritto estende in maniera privata Abbonato
	Iscritto i1("Luca", "Pesenti", 2000);
	Abbonato a3 = i1.abbonati();

	Iscritto i2("Alessandro", "Colombo", 2001);
	Abbonato_plus a4 = i2.abbonati_plus();

	//Stampa degli abbonati
	cout << a1.toString();
	cout << a2.toString();
	cout << a3.toString();
	cout << a4.toString() << endl;

	//Creazione di due corsi
	Corso c("Yoga", 50);
	Corso c1("Cardio", 60);

	//Creazione di una lista di corsi
	list<Corso> lc;

	//Inserimento dei corsi nella lista
	lc.push_back(c);
	lc.push_back(c1);

	//Stampa tutti i corsi presenti nella lista di corsi
	cout << toString(lc);

	//Aggiunta dei corsi nell'abbonato plus a2
	a2.aggiungi_corso({c,c1});

	cout << a1.toString();
	cout << a2.toString();
	cout << a3.toString();
	cout << a4.toString() << endl;

	//Utilizzo del metodo non virtual applica_sconto su abbonato e abbonato_plus
	a4.applica_sconto();
	a1.applica_sconto();

	cout << a1.toString();
	cout << a2.toString();
	cout << a3.toString();
	cout << a4.toString() << endl;
}
