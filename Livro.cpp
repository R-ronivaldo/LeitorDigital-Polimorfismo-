#include "Livro.h"
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::cout;
using std::cin;
using std::endl;

static int restricao = true;

Livro::Livro(const string &no, const string &au, const string &ge,int ano){
	setNomeLivro(no);
	setAutorLivro(au);
	setGeneroLivro(ge);
	setAnoLan(ano);
}
Livro::Livro(){
	const string no = "Desconhecidooo";
	const string au = "Desconhecidooo";
	const string ge = "Desconhecidooo";
	int ano = 0;
	
	setNomeLivro(no);
	setAutorLivro(au);
	setGeneroLivro(ge);
	setAnoLan(ano);
	
}

Livro::Livro(const Livro &link){
	
	nomeLivro = link.nomeLivro;
	autorLivro = link.autorLivro;
	generoLivro = link.generoLivro;
	anoLan = link.anoLan;
}

Livro::~Livro(){

}
		
//Get/Set

string Livro::getNomeLivro(){
	return nomeLivro;
}
void Livro::setNomeLivro(const string &no){	
	this->nomeLivro = no;
}
		
string Livro::getAutorLivro(){
	return autorLivro;
}
void Livro::setAutorLivro(const string &au){
	this->autorLivro = au;
}
		
string Livro::getGeneroLivro(){
	return generoLivro;
}
void Livro::setGeneroLivro(const string &ge){
	this->generoLivro = ge;
}

int Livro::getAnoLan(){
	return anoLan;
}

void Livro::setAnoLan(int ano){
	this->anoLan = ano;
}

//Fim Get/Set

void Livro::status() const {
	cout << "Livro " << this->nomeLivro << " adicionado com sucesso!" << endl; 
}

ostream &operator<<(ostream	 &output, const Livro &livro){
	output << "Nome Livro: " << livro.nomeLivro << "."
	<< endl << "Autor do Livro: "<< livro.autorLivro << "."
	<< endl << "Genero do Livro: " << livro.generoLivro << "."
	<< endl << "Ano de Lancamento: " << livro.anoLan << "." << endl;
	
	return output; 
}

void Livro::imprimirLivro() const{
	
	cout << "###########################" << endl;
	cout<< "Livro :" << nomeLivro << endl;
	cout<< "Autor :" << autorLivro << endl;
	cout<< "Genero :" << generoLivro << endl;
	cout<< "Ano Lancamento :" << anoLan << endl;
	cout << "###########################" << endl;
	
}

bool Livro::operator==(const Livro &livro)const{
	if (nomeLivro != livro.nomeLivro || autorLivro != livro.autorLivro || generoLivro != livro.generoLivro || anoLan != livro.anoLan) {
		return false;
	} else {
		return true;
	}
}

bool Livro::operator!=(const Livro &livro)const{
	return ! (*this == livro);
}

const Livro &Livro::operator+= (const Livro &llivro){
	string no,ge;
	int ano;
	
	autorLivro = llivro.autorLivro;
	
	cout << "Informe o nome do Livro do autor: " << this->autorLivro;
	cin >> no;
	nomeLivro = no;
	
	cout << "Informe o genero do livro do autor: " << this->autorLivro;
	cin >> ge;
	generoLivro = ge;
	
	cout << "Informe o ano de lancamento do livro do autor: " << this->autorLivro;
	cin >> ano;
	anoLan = ano;
		
}

bool Livro::operator<(const Livro &livro){
	if (anoLan < livro.anoLan){
		return true;
	} else {
		return false;
	}
}


