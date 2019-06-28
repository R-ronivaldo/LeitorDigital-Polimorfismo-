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
		
		const Plus &operator= (const Plus &);
		
		void ligarServicos();
		void desligarServicos();
		void print();
		
	private:
		bool nuvem;
		int capacidade;
};

#endif
