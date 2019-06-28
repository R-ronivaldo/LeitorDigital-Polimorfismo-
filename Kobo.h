#ifndef KOBO_H
#define KOBO_H

#include "LeitorDigital.h"
#include "Biblioteca.h"

#include <iostream>
#include <string>
using std::ostream;
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Kobo : public LeitorDigital
{
	//friend ostream &operator<<(ostream &,const Kobo &);
	public:
	Kobo(const string &,bool,const string &);
	Kobo();
	Kobo(const Kobo &);
	~Kobo();
	
	void setCompartilhar(bool);
	void setUserShare(const string &);
	
	void ligarServicos();
	void desligarServicos();
	void print();
	
	//const Kobo &operator= (const Kobo &);
	
	private:
	bool compartilhar;
	string userShare;
};

#endif
