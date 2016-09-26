#ifndef __PWD__HPP__
#define __PWD__HPP__

#include <string>

using namespace std;

namespace pwd{
    static const int    LENGTH_NVC = 18;
    static const int   not_valid_characters[LENGTH_NVC] = {34, 39, 40, 41, 44, 46, 47, 58, 59, 60, 62, 91, 92, 93, 96, 123, 125, 126};


	class PWD{
	private:
		//static const int LENGTH_PASSWORD    =   21;


		int id;
		string value;
		string description;

		char 	getCharacter(int pos);
        bool    character_valid(char c);
	public:
				PWD(int id, string description=""); //Init without a password
				PWD(string value, int id, string description=""); //Complete init
		int 	getId()     const;
		string	getDsc()    const; // Get description
		string	getPass()   const;
        void    setDsc(string desc);
		void 	setPass(string pass); // Set the password
		void	createPass(int length);
				~PWD();
		
	};

}

#endif