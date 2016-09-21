#ifndef __ADM__PWD__HPP__
#define __ADM__PWD__HPP__

#include "pwd.hpp"

namespace pwd{
    class AdmPwd{
    private:
        int num_pwds;
        List<PWD> pwds;

    public:
                AdmPwd();
                ~AdmPwd();
        void    addPwd(string pass, string description="");
        void    removePwd(int id);
        string  getPassword(int id) const; // Return the value of the password
        string  getDescription(int id) const;
        void    setPassword(int id);
        void    setDescription(string des);
        void    show() const;
    };


}


#endif
