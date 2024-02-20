#include "main.h"
#include <vector>


class course{
    private:
    string courseCode;
    string courseName;
    vector<course>courses;

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
