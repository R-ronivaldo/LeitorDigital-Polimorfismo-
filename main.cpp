#include <iostream>
#include "LeitorDigital.h"
#include "Kindle.h"
#include "Lev.h"
#include "Plus.h"
#include "Kobo.h"
#include "Biblioteca.h"
#include "Livro.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	LeitorDigital *kindle = new Kindle("Ronivaldo",true,25);
	LeitorDigital *lev = new Lev("Ronivaldo",true,"Eu estou escrevendo!");
	LeitorDigital *plus = new Plus("Ronivaldo",true,25,true,100);
	LeitorDigital *kobo = new Kobo("Ronivaldo",true,"Claudomiro");
		
	Biblioteca biblio1("Saraiva");
	Livro livro1("HarryPotter","JK","Fantasia",2017);	
	biblio1.adicionarLivro(livro1);
		
	kindle->print();
	lev->print();
	plus->print();
	kobo->print();
}
