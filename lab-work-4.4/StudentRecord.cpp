#include <iostream> 
#include <string>
#include <vector>

using namespace std;


class Student{

    private:
    int Roll;
    float Gpa;
    string Name;

public:

// default constructor

Student(){

    Roll =0;
    Gpa =0.0;
    Name = "not set";

    cout<<"default Constructor Called "<<endl;

}

// parameterized constructor

Student (int r, float g,string n){


    Roll =r;
    Gpa = g;
    Name= n;

    cout<<"parameterized constructor Callrd "<<endl;

}

// copy constructor

Student(const Student &s){

    Roll = s.Roll;
    Gpa = s.Gpa;
    Name = s.Name;

    cout<< "copy constructor called "<< endl; 
}

// getter methods

int GetRoll() const{

    return Roll;
}

float GetGpa() const{

    return Gpa;
}

string GetName()const{

    return Name;
}

void dispaly()const{

    cout <<"Name: "<<Name<<"Roll no: "<<Roll<<"Gpa: "<<Gpa<<endl;

}

~Student(){

 cout<<"destructor called object destroyed "<<endl;

}

};


class StudentRecordManagement{

    private:

    vector<Student> Students;


    public:

    void addStudent(const Student &s){

        Students.push_back(s);
        cout<<"student Data added ";

    }

    void displayAllData(){

        cout<<"all student detail are"<<endl;

        if (Students.empty())
        {
            cout<<"no student records available"<<endl;
        }

        else{

            for(int i=0;i<Students.size(); i++){


                Students[i].dispaly();

            }
        }
        
    }

};


int main(){

    Student  s1(1,8.2,"Alice");
    Student  s2(2,5.6,"bob");
    Student  s3(1,9.6,"Charlie");

    StudentRecordManagement manager;


    manager.addStudent(s1);
    manager.addStudent(s2);
    manager.addStudent(s3);

    manager.displayAllData();

    return 0; 
}