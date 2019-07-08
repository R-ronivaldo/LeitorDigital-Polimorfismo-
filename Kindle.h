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
		bool getServ();
		int getValor();
		
		
		const Kindle &operator= (const Kindle &);
		bool operator==(const Kindle &)const;
		bool operator!=(const Kindle &kindle)const;
		
		void ligarServicos();
		void desligarServicos();
		void print();

	private:
		bool serv;
		int valor;
		
		Biblioteca *lBiblio;
		int quantBiblio;

};

#endif
