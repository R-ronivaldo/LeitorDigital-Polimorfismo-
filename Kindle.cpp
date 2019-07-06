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

const Kindle &Kindle::operator= (const Kindle &kindle){
	//*static_cast< LeitorDigital * >( this ) = static_cast< LeitorDigital >( kindle );	
	
	this->user = kindle.user;
	this->serv = kindle.serv;
	this->valor = kindle.valor;
	
	return *this;
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
