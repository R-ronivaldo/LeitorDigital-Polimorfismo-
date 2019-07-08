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
		bool getCaneta();
		string getEscrever();
		
		void ligarServicos();
		void desligarServicos();		
		void print();
		
		const Lev &operator= (const Lev &);
		bool operator==(const Lev &lev)const;
		bool operator!=(const Lev &lev)const;
		
	private:
		bool caneta;
		string escrever;
};

#endif
