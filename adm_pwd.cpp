#include "adm_pwd.hpp"


namespace pwd{
    //          CONSTRUCTOR & DESTRUCTOR
    AdmPwd::AdmPwd(){
        this->num_pwds = 0;
    }
    AdmPwd::~AdmPwd(){}

    //--------------------------------------------------------------------

    //          ADD & REMOVE A PWD FROM THE LIST
    void    AdmPwd::addPwd(string pass, string description=""){//           FIX THIS!!!!!!!!!!!!
        int id;
        if (num_pwds > 0){
            //Look for the next id
            if (num_pwds > 1){
                id = 1;
            }else{
                for (int k = 1; k < pwds.size(); k++) {
                    if (pwds[k].getId() != (tmp + 1)) {
                        id = tmp + 1;
                    }
                }
            }

        } else{
            id = 0;
        }

        pwds.insert(id, PWD(pass, id, description));
        num_pwds++;
    }
    void    AdmPwd::removePwd(int id){

    }

    //--------------------------------------------------------------------

    //          MODIFY THE PWDs
    string  AdmPwd::getPassword(int id) const{

    }
    string  AdmPwd::getDescription(int id) const{

    }
    //--------------------------------------------------------------------

    //          MODIFY THE PWDs
    void    AdmPwd::setPassword(int id, int length=0, string pass=""){

    }
    void    AdmPwd::setDescription(int id, string des){

    }

    //--------------------------------------------------------------------

    //          SHOW PWDs
    void    AdmPwd::show() const{

    }
    //--------------------------------------------------------------------
}
