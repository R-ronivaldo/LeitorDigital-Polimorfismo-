#include <iostream>
#include <vector>
#include <typeinfo>
#include "LeitorDigital.h"
#include "Kindle.h"
#include "Lev.h"
#include "Plus.h"
#include "Kobo.h"
#include "Biblioteca.h"
#include "Livro.h"
using std::vector;
using std::type_info;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i;
	int mes = 2;
	vector < LeitorDigital * > leitor(4);
	leitor[0] = new Kindle("Ronivaldo",true,25);
	leitor[1] = new Lev("Ronivaldo",true,"Eu estou escrevendo!");
	leitor[2] = new Kobo("Ronivaldo",true,"Claudomiro");
	leitor[3] = new Plus("Ronivaldo",true,25,true,100);

	for(size_t i=0; i<leitor.size();i++)
	{
	leitor[i]->print();
	}
	
	
	for(size_t i=0; i<leitor.size();i++)
	{
	leitor[i]->desligarServicos();
	}
	
	for(size_t i=0; i<leitor.size();i++)
	{
	leitor[i]->print();
	}
	
	for(size_t i=0; i<leitor.size();i++)
	{
	leitor[i]->ligarServicos();
	}
	
	for(size_t i=0; i<leitor.size();i++)
	{
	leitor[i]->print();
	}
	
	for(size_t i=0; i<leitor.size();i++)
	{
	Kindle *derivados = dynamic_cast < Kindle * > ( leitor[i] );
	if ( derivados != 0 && mes < 4){
		double ValorAntigo = derivados->getValor();
		cout << "Valor Antigo dos Serviços Kindle: $" << ValorAntigo << endl;
		derivados->setValor(ValorAntigo/2);
		cout << "Novo valor com desconto de 50%: $" << derivados->getValor() << endl;
		derivados->print();
	}
	}
	
	for ( size_t i = 0; i < leitor.size(); i++ ){
	cout << "deleting object of "
	<< typeid( *leitor[i] ).name() << endl;
	delete leitor[ i ];
	}
	
	
	/*LeitorDigital *kindle = new Kindle("Ronivaldo",true,25);
	LeitorDigital *lev = new Lev("Ronivaldo",true,"Eu estou escrevendo!");
	LeitorDigital *plus = new Plus("Ronivaldo",true,25,true,100);
	LeitorDigital *kobo = new Kobo("Ronivaldo",true,"Claudomiro"+);
		
	Biblioteca biblio1("Saraiva");
	Livro livro1("HarryPotter","JK","Fantasia",2017);	
	biblio1.adicionarLivro(livro1);
	
	kindle->print();
	lev->print();
	plus->print();
	kobo->print();*/
}
