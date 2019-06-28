#include "LeitorDigital.h"


LeitorDigital::LeitorDigital(const string &user)
: user(user) {
	setUser(user);
}

LeitorDigital::LeitorDigital()
: user("Desconhecido")
{
	
}

LeitorDigital::LeitorDigital(const LeitorDigital &link3232){
	this->user = link3232.user;
}

void LeitorDigital::setUser(const string &user){
	this->user = user;
}

const LeitorDigital &LeitorDigital::operator= (const LeitorDigital &leitor){
	
	this->user = leitor.user;
	
	return *this;
}

ostream &operator<<( ostream &out, const LeitorDigital &leitor )
{
	out << "Usuario: " << leitor.user << endl ;	
	
	return out;
}
