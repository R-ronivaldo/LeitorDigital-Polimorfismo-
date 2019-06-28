#include "Plus.h"

Plus::Plus(const string &user, bool serv, int valor, bool nuvem, int capacidade)
:Kindle(user, serv, valor)
{
	setNuvem(nuvem);
	setCapacidade(capacidade);
}

Plus::Plus()
:Kindle()
{
	this->nuvem = false;
	this->capacidade = 0;
}

Plus::Plus(const Plus &link999)
:Kindle( static_cast< Kindle >( link999 ) )
{
	this->nuvem = link999.nuvem;
	this->capacidade = link999.capacidade;
}

Plus::~Plus(){}

void Plus::setNuvem(bool nuvem){
	this->nuvem = nuvem;
}

void Plus::setCapacidade(int capacidade){
	this->capacidade = capacidade;
}

void Plus::ligarServicos(){
	this->nuvem = true;
}

void Plus::desligarServicos(){
	this->nuvem = false;
}

void Plus::print(){
	cout << "*****************************" << endl;
	cout << "Plus" << endl;
	cout << "Usuario: " << user << endl;
	cout << "Nuvem ativo: " << nuvem << endl;
	cout << "Capacidade: " << capacidade << endl;
	cout << "*****************************" << endl;
}

ostream &operator<<(ostream &out,const Plus &pluss){
	out << static_cast< Kindle >( pluss ) << endl;
	out << "Usuario:" << pluss.user << endl;
	out << 	"Nuvem Ligada: " << pluss.nuvem << endl;
	out << "Capacidade: " << pluss.capacidade << endl;
	return out;
}

const Plus &Plus::operator= (const Plus &pluss){
	*static_cast< Kindle * >( this ) = static_cast< Kindle >( pluss );
	this->nuvem = pluss.nuvem;
	this->capacidade = pluss.capacidade;
	
	return *this;
}
