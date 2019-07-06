#ifndef LEITORDIGITAL_H
#define LEITORDIGITAL_H
#include "Biblioteca.h"
#include <iostream>
#include <string>
using std::ostream;
using std::string;
using std::cout;
using std::cin;
using std::endl;

class LeitorDigital
{
	friend ostream &operator<<( ostream &, const LeitorDigital & );
	public:
		LeitorDigital(const string &);
		LeitorDigital();
		LeitorDigital(const LeitorDigital & );
		
		// Metodos Puros
		virtual ~LeitorDigital(){}
		
		void setUser(const string &);
		
		const LeitorDigital &operator= (const LeitorDigital &);
		
		virtual void ligarServicos() = 0;
		virtual void desligarServicos() = 0;
		//virtual void resertarLD() = 0;
		virtual void print() = 0;
	protected:
		string user;
		
		Biblioteca *lBiblio;
		int quantBiblio;

};

#endif
