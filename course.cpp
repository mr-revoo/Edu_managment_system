#include "main.h"


class course{
    private:
    string courseCode;
    string courseName;

public:
    void printcoursedata(){
        cout<<courseName<<" "<<courseCode<<endl;
    }
    void Createcourse(string courseName,string courseCode){
        this->courseName=courseName;
        this->courseCode=courseCode;
        cout<<"Course : "<<courseName<<" with course code : "<<courseCode<<"Has added Successfully!"<<endl;
    }

    void Listcourses(){

    }

};
