/*
 * Corso.h
 *
 *  Created on: 10 dic 2022
 *      Author: giona
 */

#ifndef CORSO_H_
#define CORSO_H_

#include <iostream>
using namespace std;

//Semplice classe con nome e costo di corsi
class Corso{

	private:
		int costo = 0;

	public:

		string nome;

		Corso(string nome,int costo){
			this->costo = costo;
			this->nome = nome;
		}

		int getCosto(){
			return costo;
		}

		string toString(){
			return nome;
		}

};


#endif /* CORSO_H_ */
