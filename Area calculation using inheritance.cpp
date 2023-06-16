//Calculating the area of circle and rectangle then comparing their areas using friend function

#include <iostream>
#include <string>

using namespace std;

class shape{
    protected: 
    string name;
    public:
    void getname(){
        cout<<"Enter the name of the shape: ";
        cin>>name;
        cout<<"The name of the shape: "<<name<<endl;
    }
    friend void compare(const shape& c1,const shape& r1);
};
class circle:public shape{
    int r;
    //double area1;
    public:
    double area1;
    circle(int r){
        this->r=r;
        this->name=name;
        getname();
    }
    void getarea(int r){
        area1=r*r*3.14159;
        cout<<"The area of the circle is: "<<area1<<endl;
    }
    
};

class rect:public shape{
    int l,b;
    //double area2;
    public:
    double area2;
    rect(int l,int b){
        this->l=l;
        this->b=b;
        getname();
    }
    void getarea(int l,int b){
    area2=l*b;
    cout<<"The area of the rectangle: "<<area2<<endl;
    }
};

void compare(const circle& c1,const rect& r1){
    string result= (c1.area1>r1.area2)? "Circle area is bigger":"Rectangle area is bigger";
    cout<<result;
}

int main(){
    circle c1(3);
    c1.getarea(3);
    rect r1(3,4);
    r1.getarea(3,4);
    compare(c1,r1);
    
    return 0;
}
