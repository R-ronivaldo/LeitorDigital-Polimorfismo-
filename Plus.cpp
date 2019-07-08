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

bool Plus::getNuvem(){
	return this->nuvem;
}

int Plus::getCapacidade(){
	return this->capacidade;
}

void Plus::ligarServicos(){
	if (nuvem == false){
	this->nuvem = true;
	this->capacidade = 100;
	} else {
		cout << "Nuvem já está ativa!" << endl;
	}
}

void Plus::desligarServicos(){
	if (nuvem == true){
		this->nuvem = false;
		this->capacidade = 0;
	} else {
		cout << "Nuvem já está desabilitada!";
	}
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

bool Plus::operator==(const Plus &plus)const{
	if (user != plus.user || nuvem != plus.nuvem || capacidade != plus.capacidade) {
		return false;
	} else {
		return true;
	}
}

bool Plus::operator!=(const Plus &plus)const{
	return ! (*this == plus);
}
