#ifndef __ADM__PWD__HPP__
#define __ADM__PWD__HPP__

#include "pwd.hpp"
#include <vector>

namespace pwd{
    class AdmPwd{
    private:
        int num_pwds;
        std::vector<pwd::PWD> pwds;

    public:
                AdmPwd();
                ~AdmPwd();
        void    addPwd(string pass, string description="");
        void    removePwd(int id);
        string  getPassword(int id) const; // Return the value of the password
        string  getDescription(int id) const;
        void    setPassword(int id, int length=0, string pass="");
        void    setDescription(int id, string des);
        void    show() const;
    };


}


#endif
