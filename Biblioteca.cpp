#include "Biblioteca.h"
#include "Livro.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <cstdlib>

using std::string;
using std::cout;
using std::cin;
using std::endl;

Biblioteca::Biblioteca(const string &no){
		setNomeBiblio(no);
		this->quantLivros = 0;
}

Biblioteca::Biblioteca(){
	string no = "Vazio";
	
	setNomeBiblio(no);
	this->quantLivros = 0;

}

Biblioteca::Biblioteca(const Biblioteca &link2)
 : quantLivros (link2.quantLivros)
{
	lLivros = new Livro[ quantLivros ];
	
	for (int i=0;i<quantLivros;i++)
		this->lLivros[i] = link2.lLivros[i];
		
		
	this->nomeBiblio = link2.nomeBiblio;
}

Biblioteca::~Biblioteca(){
}



string Biblioteca::getNomeBiblio(){
	return this->nomeBiblio;
}

void Biblioteca::setNomeBiblio(const string &no){
	this->nomeBiblio = no;
}

int Biblioteca::getQuantLivros(){
	this->quantLivros;
}

void Biblioteca::imprimeBiblio(){
	
	cout << "+++++ Informações sobre a Biblioteca +++++" << endl;
	cout << "Nome da biblioteca : " << this->nomeBiblio << endl;
	imprimeLLivros();
}

void Biblioteca::imprimeLLivros()
{	
	cout << "Quantidade de livros adicionados: " << quantLivros << endl;
	for (int i=0;i<quantLivros;i++)
	{
		cout << "Nome do "<< i+1 << " Livro : " << this->lLivros[i].getNomeLivro() << endl;	
	}
}

////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////

void Biblioteca::cadastrarLista(const Livro &livro){
		quantLivros++;
		lLivros = new Livro[quantLivros];
		lLivros[0] = livro;
		cout << "Livro " << lLivros[0].getNomeLivro() << " adicionado! com sucesso!" << endl;
}

void Biblioteca::adicionarLivro(const Livro &livro){
		
	if (quantLivros == 0){
		cadastrarLista(livro);
	} else {
		
		Livro *aux2 = new Livro[quantLivros];
		
		for(int i = 0; i < quantLivros; i++){
			aux2[i] = lLivros[i];
			}
			
		delete [] lLivros;
		
		lLivros = new Livro[quantLivros+1];
		
		for(int i = 0; i < quantLivros; i++){
			lLivros[i] = aux2[i];
		}
			
		lLivros[quantLivros] = livro;
		cout << "Livro " << lLivros[quantLivros].getNomeLivro() << " adicionado com sucesso!" << endl;
		
		delete [] aux2;

			quantLivros++;
	}
}

ostream &operator<<(ostream &output, const Biblioteca &biblioteca){
	output << "Biblioteca :" << biblioteca.nomeBiblio << endl;
	output << "Quantidade de livros: " << biblioteca.quantLivros << endl;
	
		for (int i =0; i < biblioteca.quantLivros; i++){
			output << i+1 << "o Livro: "<< biblioteca.lLivros[i].getNomeLivro() << endl;
		}
	
	return output;
}

bool Biblioteca::operator==(const Biblioteca &biblioteca)const{
	if (quantLivros != biblioteca.quantLivros)
		return false;
	
	for (int i=0;i<quantLivros;i++)
		if (lLivros[i] != biblioteca.lLivros[i])
			return false;
		
	return true;
}

const Biblioteca &Biblioteca::operator= (const Biblioteca &linkBiblio)
{
	if (&linkBiblio != this)
		nomeBiblio = linkBiblio.nomeBiblio;
	{
		if (quantLivros != linkBiblio.quantLivros)
		{
			delete [] lLivros;
			quantLivros = linkBiblio.quantLivros;
			lLivros = new Livro[ quantLivros ];
		}
		
		for (int i=0; i < quantLivros; i++)
			lLivros[i] = linkBiblio.lLivros[i];
	}
	return *this;
}

Livro &Biblioteca::operator[](int subscript){
	if (subscript < 0 || subscript >= quantLivros)
	{
		cout << "\nErro: Subscript " << subscript
		<< " fora de alcance" << endl;
		exit(1);
	}
	
	return lLivros[subscript];
}

Livro Biblioteca::operator[](int subscript)const
{
	if (subscript < 0 || subscript >= quantLivros)
	{
		cout << "\nErro: Subscript " << subscript
		<< " fora de alcance" << endl;
		exit(1);
	}
	
	return lLivros[subscript];
}

bool Biblioteca::operator<(const Biblioteca &biblioteca)const{
	if (quantLivros < biblioteca.quantLivros)
	{
		return true;
	} else
	{
		return false;
	}
}

Biblioteca &Biblioteca::operator+=(const Biblioteca &bi)
{
	string no;
	cout << "Insira o nome da biblioteca: ";
	cin >> no;
	nomeBiblio = no;
	quantLivros = bi.quantLivros;
	lLivros = bi.lLivros;
}
