/*
 * Abbonato_plus.h
 *
 *  Created on: 10 dic 2022
 *      Author: giona
 */

#ifndef ABBONATO_PLUS_H_
#define ABBONATO_PLUS_H_
#include <iostream>
#include <list>
#include "Abbonato.h"
#include "Corso.h"
#include "SequenzaGenerica.h"
/*#include "Corso_Cardio.cpp"
#include "Corso_Yoga.cpp"*/
using namespace std;

class Abbonato_plus: public Abbonato{

	private:
		//Sequenza generica privata di corsi, non viene vista all'infuori del metodo
		SequenzaGenerica<Corso> lc;

	public:
		//Costruttore che richiama il costruttore della classe padre
		Abbonato_plus(string nome, string cognome, int anno_nascita, bool iscritto) : Abbonato(nome,cognome,anno_nascita,iscritto){
			conto = 520;
		}

		string toString(){
			return to_string(codice) + " " + to_string(conto) + "€ " + nome + " " + cognome + " " + to_string(anno_nascita) + " CORSI: " + lc.toString() + "\n" ;
		}

		//Metodo che utilizza initialzaer_list per inserire più corsi contemporaneamente
		void aggiungi_corso(initializer_list<Corso> c){
			lc.inserisci(c);
			for(Corso c1 : c){
				conto = conto + c1.getCosto();
				cout << c1.toString() + " inserito nel piano dell'abbonato numero " + to_string(codice) + " +" + to_string(c1.getCosto()) + "€ \n" << endl;
			}
		}

		//Overriding di applica_sconto di abbonato
		void applica_sconto(){
			conto = conto*0.8;
			cout << "Sconto del 20% applicato all'abbonato plus " + to_string(codice) + "\n"<< endl;
		}

		~Abbonato_plus(){}
};




#endif /* ABBONATO_PLUS_H_ */
