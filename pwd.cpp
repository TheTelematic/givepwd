#include "pwd.hpp"
#include <iostream>
#include "string.h"
using namespace std;

namespace pwd{
	PWD::PWD(int id, string description){
		this->id = id;
		this->description = description;
	}
	PWD::PWD(char *value, int id, string description){
		strcpy(this->value, value);
		this->id = id;
		this->description = description;
	}

	void PWD::setPass(char *pass){
		strcpy(this->value, pass)
	}

	int PWD::getId(){
		return id;
	}
	string PWD::getDsc(){
		return description;
	}
	PWD::~PWD(){}
}
