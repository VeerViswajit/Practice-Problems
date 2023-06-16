//To calculate average salary of a company using class and friend function
#include <iostream>
#include <string.h>

using namespace std;

class employee{
    int id;
    string name;
    public:
    employee(int id,string name,double salary){
        this->id=id;
        this->name=name;
        this->salary=salary;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"id: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
class company:public employee{
    int n=0;
    employee emplist[100];
    public:
    company(int n){
        this->n=n;
    }
    void addemp(employee emp){
        if(n<=100){
            emplist[n]=emp;
            n++;
        }
        else{
            cout<<"Maximum nuber of employees is reached"<<endl;
        }
    }
    void displayemp(){
        for(int i=0;i<=n;i++){
            cout<<"THE EMPLOYEE DETAILS ARE: "<<endl;
            emplist[i].display();
            cout<<endl;
        }
    }
    friend double avgsalary(company& obj);
    
};


double avgsalary(company& obj){
    int number;
    number=obj.n;
    double totalsalary=0.0;
    for(int i=0;i<number;i++){
        totalsalary+=obj.emplist[i].salary;
    }
    return totalsalary/number;
}

int main(){

    company comp(3);
    employee emp1(1, "John Doe", 5000);
    employee emp2(2, "Jane Smith", 6000);
    employee emp3(3, "Mike Johnson", 5500);
    
    comp.addemp(emp1);
    comp.addemp(emp2);
    comp.addemp(emp3);
    
    comp.displayemp();
    
    double avg= avgsalary(company comp);
    cout<<"Avg salary: "<<avg;
    
    return 0;
    
}
