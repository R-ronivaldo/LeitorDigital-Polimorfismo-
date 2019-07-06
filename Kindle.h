#ifndef KINDLE_H
#define KINDLE_H
#include "LeitorDigital.h"
#include "Biblioteca.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Kindle : public LeitorDigital
{
	friend ostream &operator<<( ostream &, const Kindle & );
	
	public:
		Kindle(const string &, bool, int);
		Kindle();
		Kindle(const Kindle &);
		~Kindle();
		
		void setServ(bool);
		void setValor(int);
		
		const Kindle &operator= (const Kindle &);
		
		void ligarServicos() { this->serv = true; }
		void desligarServicos() { this->serv = false; }
		void print();

	private:
		bool serv;
		int valor;
		
		Biblioteca *lBiblio;
		int quantBiblio;

};

#endif
