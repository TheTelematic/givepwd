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
        for(int k=0;k<LENGTH_NVC;k++){
            if (c == not_valid_characters[k]){
                //cout << "Character not valid" << endl;
                return false;
            }
        }

        return true;
    }

	char PWD::getCharacter(int pos){

        if ((pos != 0) && (rand()%10 == 0)){
            //cout << "Repeat value " << endl;
            return this->value[rand()%pos];
        }

        char tmp;

        do{
            tmp = (rand()%93) + 32;

        }while(!character_valid(tmp));

        return tmp;
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

        this->value = "";
		for(int k=0;k<length;k++){
            //cout << "Password:" << this->value << endl;
            this->value += getCharacter(k);
		}
	}
    //====================================================================
    //----------------------COPIER-----------------------------------
    PWD::PWD(const PWD &p){
        this    ->id        = p.getId();
        this    ->value     = p.getPass();
        this    ->description = p.getDsc();
    }

    //====================================================================
    //====================================================================
    //----------------------DESCTRUCTOR-----------------------------------
    PWD::~PWD(){}
    //====================================================================
}
