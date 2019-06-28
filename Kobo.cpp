#include "Kobo.h"

Kobo::Kobo(const string &user,bool compartilhar,const string &userShare)
: LeitorDigital(user)
{
	setCompartilhar(compartilhar);
	setUserShare(userShare);
}

Kobo::Kobo()
: LeitorDigital()
{
	setCompartilhar(false);
	setUserShare("Servico Desligado!");
}

Kobo::Kobo(const Kobo &link123)
: LeitorDigital(link123)
{
	this->compartilhar = link123.compartilhar;
	this->userShare = link123.userShare;
}

Kobo::~Kobo(){}

void Kobo::setCompartilhar(bool compartilhar){
	this->compartilhar = compartilhar;
}

void Kobo::setUserShare(const string &userShare){
	if (this->compartilhar == true)
	this->userShare = userShare;
}

void Kobo::ligarServicos(){
	this->compartilhar = true;
	this->userShare = "Pronto para compartilhar";
}

void Kobo::desligarServicos(){
	this->compartilhar = false;
	this->userShare = "Serviço desligado!";
}

void Kobo::print(){
	cout << "*****************************" << endl;
	cout << "Kobo" << endl;
	cout << "Usuario: " << user << endl;
	cout << "Compartilhamento ativo: " << compartilhar << endl;
	cout << "Perfil Share: " << userShare << endl;
	cout << "*****************************" << endl;
}
