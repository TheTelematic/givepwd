#include "pwd.hpp"
#include <iostream>

using namespace pwd;
using namespace std;


int main(int argc, char const *argv[]){
    PWD pass1(1,"This is the pass1"), pass2("pass2", 2, "This is the pass2");
	PWD pass3("pass3", 3);
	

	cout << "Password 1:"						<<endl;
	cout << "\tId\t->\t"		<<pass1.getId()	<<endl;
	cout << "\tValue\t->\t"		<<pass1.getPass()<<endl;
	cout << "\tDescription\t->\t"<<pass1.getDsc() <<endl;

    cout << "Creating a password" << endl;
    pass1.createPass(20);

    cout << "The result: " << pass1.getPass() << endl;


	cout << "Password 2:"						<<endl;
	cout << "\tId\t->\t"		<<pass2.getId()	<<endl;
	cout << "\tValue\t->\t"		<<pass2.getPass()<<endl;
	cout << "\tDescription\t->\t"<<pass2.getDsc() <<endl;

    cout << "Setting a new password and description" << endl;
    pass2.setPass("New password");
    pass2.setDsc("New description");

    cout << "Password 2:"						<<endl;
    cout << "\tId\t->\t"		<<pass2.getId()	<<endl;
    cout << "\tValue\t->\t"		<<pass2.getPass()<<endl;
    cout << "\tDescription\t->\t"<<pass2.getDsc() <<endl;

	cout << "Password 3:"						<<endl;
	cout << "\tId\t->\t"		<<pass3.getId()	<<endl;
	cout << "\tValue\t->\t"		<<pass3.getPass()<<endl;
	cout << "\tDescription\t->\t"<<pass3.getDsc() <<endl;

	
/*

	cout<<"Empezando"<<endl;

	char p1[]="Esto es la contraseña", p2[]="Pass2";
	
	PWD pass1(p1, 1, "Breve descripcion"), pass2(p2, 2);

	cout<<"Id de la 1 -> "<<pass1.getId()<<endl;
	cout<<"descripcion:"<<pass1.getDsc()<<endl;
	cout<<"Id de la 2 -> "<<pass2.getId()<<endl;
	cout<<"descripcion:"<<pass2.getDsc()<<endl;
*/
	return 0;
}