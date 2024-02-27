#ifndef MAIN_H
#define MAIN_H
#include <bits/stdc++.h>

using namespace std;
class User{
    private:
    string Name;
    string password;
    public:
    User()=default;
    User(string Name,string password){
        this->Name=Name;
        this->password=password;
    }
    bool login(const User& other)const{
        if(Name==other.Name&&password==other.password){
            return 1;
        }else{
            return 0;
        }
    }

    void logout(){
        //returning to the main menu of the user
        cout<<"Logging out ..."<<endl;
    }



};



#endif
