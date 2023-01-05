/*
 * Iscritto.h
 *
 *  Created on: 11 dic 2022
 *      Author: giona
 */

#ifndef ISCRITTO_H_
#define ISCRITTO_H_

#include <iostream>
#include "Abbonato.h"
#include "Abbonato_plus.h"
using namespace std;

//Eredita in maniera privata Abbonato
class Iscritto: private Abbonato{

	public:
		Iscritto(string nome, string cognome, int anno_nascita): Abbonato(nome,cognome,anno_nascita,false){}

		string toString(){
			return "Iscritto: " + to_string(codice) + " " + nome + " "+ cognome + " " + to_string(anno_nascita) + "\n";
		}

		//Metodi per creare abbonati e abbonati plus in seguito alla creazione di un iscritto
		Abbonato abbonati(){
				Abbonato a(nome, cognome, anno_nascita,true);
				return a;
		}

		Abbonato_plus abbonati_plus(){
				Abbonato_plus a(nome, cognome, anno_nascita,true);
				return a;
		}
};



#endif /* ISCRITTO_H_ */
