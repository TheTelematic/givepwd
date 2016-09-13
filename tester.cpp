#include "pwd.hpp"
#include <iostream>

using namespace pwd;
using namespace std;


int main(int argc, char const *argv[]){

	cout<<"Empezando"<<endl;

	char p1[]="Esto es la contraseña", p2[]="Pass2";
	
	PWD pass1(p1, 1, "Breve descripcion"), pass2(p2, 2);

	cout<<"Id de la 1 -> "<<pass1.getId()<<endl;
	cout<<"descripcion:"<<pass1.getDsc()<<endl;
	cout<<"Id de la 2 -> "<<pass2.getId()<<endl;
	cout<<"descripcion:"<<pass2.getDsc()<<endl;

	return 0;
}