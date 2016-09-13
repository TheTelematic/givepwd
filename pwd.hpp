#ifndef __PWD__HPP__
#define __PWD__HPP__
#include <string>

using namespace std;

namespace pwd{
	class PWD{
	private:
		int id;
		char value[21];//Max length, 20 character + \0
		string description;
	public:
				PWD(int id, string description="");
				PWD(char *value, int id, string description="");
		int 	getId();
		string	getDsc();
				~PWD();
		
	};
}


#endif