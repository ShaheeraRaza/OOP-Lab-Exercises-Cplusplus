#include<iostream>
#include<string>
using namespace std;
class Teacher{
    private:
    string name;
    int age;
    string institutes;
    public:
    void setname(string x){
	name=x;}
    void setage(int y){age=y;}
    void setinstitute(string z){institutes=z;}
    string getname(){return name;}
    int getage(){return age;}
    string getinstitute(){return institutes;}
};
class HumanitiesTeacher: public Teacher{
    public:
    string depart;
    string coursename;
    string designation;
    void setdepart(string x){
        depart=x;
    }
    void setcourse(string y){
        coursename=y;
    }
    void setdesignation(string z){
        designation=z;
    }
    string getdepart(){
        return depart;
    }
    string getcourse(){
        return coursename;
    }
    string getdesig(){
        return designation;
    }
    void display(){
    	cout<<"...Info..."<<endl;
        cout<<"Name: "<<getname()<<endl;
        cout<<"age: "<<getage()<<endl;
        cout<<"Institution: "<<getinstitute()<<endl;
        cout<<"Department: "<<depart<<endl;
        cout<<"Course name: "<<coursename<<endl;
        cout<<"Designation: "<<designation<<endl; 
    }
};
class ScienceTeacher: public Teacher{
    public:
    string depart="Science";
    string coursename;
    string designation;
    void setdepart(string x){
        depart=x;
    }
    void setcourse(string y){
        coursename=y;
    }
    void setdesignation(string z){
        designation=z;
    }
    void display(){
    	cout<<"...Info..."<<endl;
        cout<<"Name: "<<getname()<<endl;
        cout<<"age: "<<getage()<<endl;
        cout<<"Institution: "<<getinstitute()<<endl;
        cout<<"Department: "<<depart<<endl;
        cout<<"Course name: "<<coursename<<endl;
        cout<<"Designation: "<<designation<<endl; 
    }

};
class MathTeacher: public Teacher{
    public:
    string depart;
    string coursename;
    string designation;
    void setdepart(string x){
        depart=x;
    }
    void setcourse(string y){
        coursename=y;
    }
    void setdesignation(string z){
        designation=z;
    }
    void display(){
    	cout<<"...Info..."<<endl;
        cout<<"Name: "<<getname()<<endl;
        cout<<"age: "<<getage()<<endl;
        cout<<"Institution: "<<getinstitute()<<endl;
        cout<<"Department: "<<depart<<endl;
        cout<<"Course name: "<<coursename<<endl;
        cout<<"Designation: "<<designation<<endl; 
    }

};
int main(){
    int choice,age;
    string name,institutes,department,coursename,designation;
    cout<<"Select Teacher type:"<<endl;
    cout<<"1.Humanities"<<endl;
    cout<<"2.Science"<<endl;
    cout<<"3.Mathematics"<<endl;
    cout<<"Enter your type:"<<endl;
    cin>>choice;
    cin.ignore();
    switch (choice)
    {
    case 1 : {
    HumanitiesTeacher h1;
    cout<<"Details of Humanities Teacher"<<endl;
    cout<<"Enter your name: "<<endl;
    getline(cin,name);
    h1.setname(name);
    cout<<"Enter age: "<<endl;
    cin>>age;
    h1.setage(age);
    cin.ignore();
    cout<<"Enter Insititute: "<<endl;
    getline(cin,institutes);
    h1.setinstitute(institutes); 
    cout<<"Enter Course name: "<<endl;
    getline(cin,coursename);
    h1.setcourse(coursename);
    cout<<"Enter designation"<<endl;
    getline(cin,designation);
    h1.setdesignation(designation);  
    h1.display();
        break;
    }
    case 2:{
    ScienceTeacher s1;
    cout<<"Details of Science Teacher"<<endl;
    cout<<"Enter your name: "<<endl;
    getline(cin,name);
    s1.setname(name);
    cout<<"Enter age: "<<endl;
     cin>>age;
    s1.setage(age);
    cin.ignore();
    cout<<"Enter Insititute: "<<endl;
    getline(cin,institutes);
    s1.setinstitute(institutes);
    cout<<"Enter Course name: "<<endl;
    getline(cin,coursename);
    s1.setcourse(coursename);
    cout<<"Enter designation"<<endl;
    getline(cin,designation);
    s1.setdesignation(designation);
    s1.display();
    break;  
    }
    case 3:{
    MathTeacher m1;
    cout<<"Details of Math Teacher"<<endl;
    cout<<"Enter your name: "<<endl;
    getline(cin,name);
    m1.setname(name);
    cout<<"Enter age: "<<endl;
    cin>>age;
    m1.setage(age);
    cin.ignore();
    cout<<"Enter Insititute: "<<endl;
    getline(cin,institutes);
    m1.setinstitute(institutes);
    cout<<"Enter Course name: "<<endl;
    getline(cin,coursename);
    m1.setcourse(coursename);
    cout<<"Enter designation"<<endl;
    getline(cin,designation);
    m1.setdesignation(designation);
    m1.display();
    break;
    }
    default:
    cout<<"Invalid choice!";
        break;
    }
    return 0;
}

