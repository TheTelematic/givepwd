#ifndef __PWD__HPP__
#define __PWD__HPP__

#include <string>

using namespace std;

namespace pwd{
	class PWD{
	private:
		//static const int LENGTH_PASSWORD    =   21;
        //static const int LENGTH_DESCRIPTION =   50;

		int id;
		string value;
		string description;

		bool 	character_valid(char c);
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