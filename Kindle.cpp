#include "Kindle.h"


Kindle::Kindle(const string &user,bool serv, int valor)
:LeitorDigital(user)
{
	setServ(serv);
	setValor(valor);
	this->quantBiblio = 0;
}

Kindle::Kindle()
: LeitorDigital()
{
	this->serv = false;
	this->valor = 0;
}

Kindle::Kindle(const Kindle &link666)
: LeitorDigital(link666)
{
	this->serv = link666.serv;
	this->valor = link666.valor;
}

Kindle::~Kindle(){
	
}

void Kindle::setServ(bool serv){
	this->serv = serv;
}

void Kindle::setValor(int valor){
	this->valor = valor;
}

bool Kindle::getServ(){
	return this->serv;
}

int Kindle::getValor(){
	return this->valor;
}

void Kindle::ligarServicos(){
	if (this->serv == false){
		this->serv = true;
		cout << "Serviços ligados!" << endl;
	} else {
		cout << "Os serviços já estão ligados" << endl;
	}
}

void Kindle::desligarServicos(){
	if (this->serv == true){
		this->serv = false;
		cout << "Serviços desligados!" << endl;
	} else {
		cout << "Os serviços já estão desligados!" << endl;
	}
}

const Kindle &Kindle::operator= (const Kindle &kindle){
	//*static_cast< LeitorDigital * >( this ) = static_cast< LeitorDigital >( kindle );	
	
	this->user = kindle.user;
	this->serv = kindle.serv;
	this->valor = kindle.valor;
	
	return *this;
}

bool Kindle::operator==(const Kindle &kindle)const{
	if (user != kindle.user || valor != kindle.valor || serv != kindle.serv) {
		return false;
	} else {
		return true;
	}
}

bool Kindle::operator!=(const Kindle &kindle)const{
	return ! (*this == kindle);
}

ostream &operator<<( ostream &out, const Kindle &kindle){
	//out << static_cast< LeitorDigital >( kindle ) << endl;
	out << "Usuario:" << kindle.user << endl;
	out << 	"Serviços Ligados: " << kindle.serv << endl;
	out << "Valor: " << kindle.valor << endl;
	return out;
}

void Kindle::print(){
	cout << "*****************************" << endl;
	cout << "Kindle" << endl;
	cout << "Usuario: " << user << endl;
	cout << "Servico ativo: " << serv << endl;
	cout << "Valor: " << valor << endl;
	cout << "*****************************" << endl;
}
