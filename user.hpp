#ifndef __USER__HPP__
#define __USER__HPP__

namespace user{

	class User{
	private:
		int id;


	public:
		User();
		~User();

		void 		startSession();
		const int 	getId();
			

		
	};
}






#endif