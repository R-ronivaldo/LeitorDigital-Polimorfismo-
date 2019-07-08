#ifndef PLUS_H
#define PLUS_H

#include "Kindle.h"

#include <iostream>
#include <string>
using std::ostream;
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Plus : public Kindle
{
	friend ostream &operator<<(ostream &,const Plus &);
	public:
		Plus(const string &, bool, int, bool, int);
		Plus();
		Plus(const Plus &);
		~Plus();
		
		void setNuvem(bool);
		void setCapacidade(int);
		bool getNuvem();
		int getCapacidade();
		
		const Plus &operator= (const Plus &);
		bool operator==(const Plus &plus)const;
		bool operator!=(const Plus &plus)const;
		
		void ligarServicos();
		void desligarServicos();
		void print();
		
	private:
		bool nuvem;
		int capacidade;
};

#endif
