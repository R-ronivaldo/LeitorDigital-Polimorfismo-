#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include "Livro.h"
#include <iostream>
#include <string>

using std::ostream;
using std::string;


class Biblioteca
{
	friend ostream &operator<<(ostream &, const Biblioteca &);
	public:
		Biblioteca(const string &);
		Biblioteca();
		Biblioteca(const Biblioteca &);
		~Biblioteca();
		
		//Get/Set
		string getNomeBiblio();
		void setNomeBiblio(const string &);
		
		int getQuantLivros();
		
		void imprimeBiblio();
		void imprimeLLivros();
		
		bool operator==(const Biblioteca &)const;
		const Biblioteca &operator=(const Biblioteca &);
		Biblioteca &operator+=(const Biblioteca &);
		Livro &operator[](int);
		Livro operator[](int subscript)const;
		bool operator<(const Biblioteca &)const;
		void cadastrarLista(const Livro &);
		void adicionarLivro(const Livro &);
		
	private:
		string nomeBiblio;
		
		Livro *lLivros;
		int quantLivros;
};

#endif
