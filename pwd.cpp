#include "pwd.hpp"
#include "string.h"

#include <iostream>
#include <cstdlib>

using namespace std;

namespace pwd{
	/*
		Private Methods
	*/
	bool PWD::character_valid(char c){
		if (this->value.find(c) > 0){

            return false;
        } else{
            return true;
        }
	}


	/*
		Public Methods

	*/

	//-----------------CONSTRUCTORS--------------------------------------
	PWD::PWD(int id, string description){
		this->id = id;
		this->description = description;
	}
	PWD::PWD(string value, int id, string description){
		this->value = value;
		this->id = id;
		this->description = description;
	}
	//--------------------------------------------------------------------

	void PWD::setPass(string pass){
		this->value = pass;
	}

    string PWD::getPass(){
        return this->value;
    }

	void PWD::createPass(int length){
		srandom(time(NULL));

		for(int k=0;k<length;k++){
            char tmp;
			do{
                tmp = (rand()%94) + 33;

			}while(	!character_valid(tmp));
			
			this->value += tmp;
		}
	}

	int PWD::getId(){
		return id;
	}
	string PWD::getDsc(){
		return description;
	}
	PWD::~PWD(){}
}
