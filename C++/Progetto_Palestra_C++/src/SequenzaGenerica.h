/*
 * SequenzaOrdinabile.h
 *
 *  Created on: 10 dic 2022
 *      Author: giona
 */

#ifndef SEQUENZAGENERICA_H_
#define SEQUENZAGENERICA_H_
#include <iostream>
#include <vector>
using namespace std;

//Definizione di un generico tipo K
template <typename K>

class SequenzaGenerica{
	public:
		//Vettore di elementi K
		vector <K> ls;

		//Inserimento della lista inizializer_list generica nel vettore generico
		void inserisci(initializer_list<K> x){
			ls.insert(ls.end(), x.begin(), x.end());
		}

		//Stampa gli elementi del vettore generico
		string toString(){
			string s="";
				for(unsigned i =0; i < ls.size(); i++){
					s = s + ls.at(i).toString() + "; ";
				}
			return s;
		}
};

#endif /* SEQUENZAGENERICA_H_ */
