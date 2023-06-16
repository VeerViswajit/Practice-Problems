//Using classes to calculate area of various shapes
#include <iostream>
using namespace std;

class base{
    public:
    int side;
    int l,b,h;
    int r;
};

class polygon: public base{
    public:
    int area1,area2;
    void area(int side){
        area1=side*side;
        cout<<"The area of sqaure is: "<<area1<<endl;
    }
    void area(int l,int b){
        area2=l*b;
        cout<<"The area is: "<<area2<<endl;
    }
};

class square: public polygon{
    public:
    square(int side){
        this->side=side;
        area(side);
    }

};

class rect: public polygon{
    public:
    rect(int l, int b){
        this->l=l;
        this->b=b;
        area(l,b);
    }
    
};

class parallelogram: public polygon{
    public:
    parallelogram(int b, int h){
        this->h=h;
        this->b=b;
        area(b,h);
    }
    
};

class circle: public base{
    public:
    double area3;
    circle(int r){
        this->r=r;
        area3=3.14*r*r;
        cout<<"The area of circle: "<<area3<<endl;
    }
};

int main(){
    int ch=0;
    cout<<"Enter the choice: \n1. square \n2. parallelogram\n3. rectangle\n4. circle\n5. Exit"<<endl;
    
    while(ch!=5){
        cin>>ch;
        if(ch==1){
            square s1(3);
            
        }
        else if(ch==2){
            parallelogram p1(3,5);
            
        }
        else if(ch==3){
            rect r1(3,4);
            
        }
        else if(ch==4){
            circle c1(3);
            
        }
        else if(ch==5){
            break;
        }
        else{
            cout<<"Enter the correct choice"<<endl;
        }
    }
    
    
    return 0;
}
