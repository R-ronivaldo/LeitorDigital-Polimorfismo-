#ifndef LEV_H
#define LEV_H
#include "LeitorDigital.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Lev : public LeitorDigital
{
	friend ostream &operator<<( ostream &, const Lev & );
	public:
		Lev(const string &,bool,const string &);
		Lev();
		Lev(const Lev &);
		~Lev();
		
		void setCaneta(bool);
		void setEscrever(const string &);
		
		void ligarServicos();
		void desligarServicos();
		const Lev &operator= (const Lev &);
		
		void print();
		
	private:
		bool caneta;
		string escrever;
};

#endif
