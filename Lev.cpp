#include "Lev.h"

Lev::Lev(const string &user, bool can, const string &esc)
: LeitorDigital(user)
{
	setCaneta(can);
	setEscrever(esc);
}

Lev::Lev()
:LeitorDigital()
{
	this->caneta = false;
	this->escrever = "Vazio";
}

Lev::Lev(const Lev &link333)
:LeitorDigital(link333)
{
	this->caneta = link333.caneta;
	this->escrever = link333.escrever;
}

Lev::~Lev() {}


void Lev::setCaneta(bool can){
	this->caneta = can;
}

void Lev::setEscrever(const string &esc){
	if (this->caneta == true){
	this->escrever = esc;
	} else {
		cout << "Caneta Desligada!" << endl;
	}
}

const Lev &Lev::operator= (const Lev &lev){
	this->user = lev.user;
	this->caneta = lev.caneta;
	this->escrever = lev.escrever;
	
	return *this;
}

ostream &operator<<( ostream &out, const Lev &lev){
	//out << static_cast< LeitorDigital >( lev ) << endl;
	out << "Usuario: " << lev.user;
	out << 	"Caneta Ligada: " << lev.caneta << endl;
	out << "Esvrever: " << lev.escrever << endl;
	return out;
}

void Lev::ligarServicos() {
	this->caneta = true;
	this->escrever = "Pronto para escrever!";
}

void Lev::desligarServicos(){
	this->caneta = false;
	this->escrever = "Servico desligado!";
}
		
		
void Lev::print() {
	cout << "*****************************" << endl;
	cout << "Lev" << endl;
	cout << "Usuario: " << user << endl;
	cout << "Caneta ativo: " << caneta << endl;
	cout << "Escrever: " << escrever << endl;
	cout << "*****************************" << endl;
	
}
