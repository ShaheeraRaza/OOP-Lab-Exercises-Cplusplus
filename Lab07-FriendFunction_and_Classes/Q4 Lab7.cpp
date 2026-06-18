#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
//class Payroll;
class Employee{
    private:
    string name; 
    int id;
    string designation; 
    float salary;
    public:
    Employee(){
        name="Employee";
        id=0;
        designation="None";
        salary=0;
    }
        Employee(string n,int i,string desig,float s){
            name=n;
            id=i;
            designation=desig;
            salary=s;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"ID is: "<<id<<endl;
            cout<<"Designation: "<<designation<<endl;
            cout << fixed << setprecision(0);
            cout<<"Salary is: "<<salary<<endl;
        }
        float getsalary(){
            return salary;
        }
        friend void updatesalary(Employee &e);
};
 void updatesalary(Employee &e){
        float newsalary;
        cout<<"Enter new salary you want to update: "<<endl;
        cin>>newsalary;
        if(newsalary<0){
            cout<<"Salary cannot be negative"<<endl;
        }
        else{
            e.salary=newsalary;
            cout<<"The updated salary is: "<<e.getsalary()<<endl;
        }
    }
//class Payroll{
  //  public:
    //void updatesalary(Employee e){
      //  float newsalary;
        //cout<<"Enter new salary you want to update: "<<endl;
        //cin>>newsalary;
        //if(newsalary<0){
          //  cout<<"Salary cannot be negative"<<endl;
        //}
        //else{
          //  e.salary=newsalary;
        //}
    //}
    
//};
int main() {
    Employee e1("Shaheera",2,"AssistantOfficer",1000000);
    e1.display();
    updatesalary(e1);
    e1.display();

    return 0;
}



