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

bool Kobo::setCompartilhar(){
	return this->compartilhar;
}

string Kobo::getUserShare(){
	return this->userShare;
}

const Kobo &Kobo::operator= (const Kobo &kobo){
	this->user = kobo.user;
	this->compartilhar = kobo.compartilhar;
	this->userShare = kobo.userShare;
	
	return *this;
}

bool Kobo::operator==(const Kobo &kobo)const{
	if (user != kobo.user || compartilhar != 						kobo.compartilhar || userShare != kobo.userShare) {
		return false;
	} else {
		return true;
	}
}

bool Kobo::operator!=(const Kobo &kobo)const{
	return ! (*this == kobo);
}

void Kobo::ligarServicos(){
	if (this->compartilhar == false){
		this->compartilhar = true;
		this->userShare = "Pronto para compartilhar";
	} else {
		cout << "Compartilhamenta já está ligado!" << endl;
	}
}

void Kobo::desligarServicos(){
	if (this->compartilhar == true){
		this->compartilhar = false;
		this->userShare = "Serviço desligado!";
	} else {
		cout << "Compartilhamento já está desligado!" << endl;
	}
}

void Kobo::print(){
	cout << "*****************************" << endl;
	cout << "Kobo" << endl;
	cout << "Usuario: " << user << endl;
	cout << "Compartilhamento ativo: " << compartilhar << endl;
	cout << "Perfil Share: " << userShare << endl;
	cout << "*****************************" << endl;
}
