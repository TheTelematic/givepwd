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
		if (this->value.find(c) == -1){

            return true;
        } else{
            return false;
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
	//====================================================================


    //-----------------SETTERS--------------------------------------------
	void PWD::setPass(string pass){
		this->value = pass;
	}

    void PWD::setDsc(string desc){
        this->description = desc;
    }
    //====================================================================

    //-----------------GETTERS--------------------------------------------
    int PWD::getId() const{
        return id;
    }

    string PWD::getDsc() const{
        return description;
    }

    string PWD::getPass() const{
        return this->value;
    }
    //====================================================================
    //--------------------------------------------------------------------
	void PWD::createPass(int length){
		srandom(time(NULL));

        //cout << "Starting..."<<endl;
		for(int k=0;k<length;k++){
            char tmp;
            //cout << "Password:" << this->value << endl;
			do{
                tmp = (rand()%94) + 33;

                //cout << "Generated random character -> " << tmp <<endl;

			}while(	!character_valid(tmp));
			
			this->value += tmp;
		}
	}
    //====================================================================
    //----------------------DESCTRUCTOR-----------------------------------
    PWD::~PWD(){}
    //====================================================================
}
