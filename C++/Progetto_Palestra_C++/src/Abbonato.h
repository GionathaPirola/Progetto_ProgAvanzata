/*
 * Abbonato.h
 *
 *  Created on: 10 dic 2022
 *      Author: giona
 */

#ifndef ABBONATO_H_
#define ABBONATO_H_
#include <iostream>
using namespace std;

class Abbonato{

	public:
		string nome;
		string cognome;
		const int anno_nascita;
		int conto;
		int codice;
		bool iscritto;

		//Uso di inizialation list
		Abbonato(string nome, string cognome, int anno_nascita, bool iscritto) : anno_nascita(anno_nascita){

			//Campo statico per le genarazione di id
			static int codice_generico = 0;
			this->iscritto = iscritto;
			//Se l'abbonamento avviene tramite un iscritto il codice non viene aumentato
			if(!iscritto)
				codice_generico = codice_generico + 1;
			this->nome = nome;
			this->cognome = cognome;
			this->conto = 500;
			this->codice = codice_generico;
		}

		virtual string toString(){
			return to_string(codice) + " " + to_string(conto) + "€ " + nome + " " + cognome + " " + to_string(anno_nascita) + "\n";
		}

		void applica_sconto(){
			conto = conto*0.9;
			cout << "Sconto del 10% applicato all'abbonato " + to_string(codice) + "\n"<< endl;
		}

		//Distruttore
		virtual ~Abbonato(){if(!iscritto)	cout<< nome + " " + cognome + " " + to_string(codice) + " ha abbandonato palestra\n";}
};




#endif /* ABBONATO_H_ */
