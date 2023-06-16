//Implenting a stack using class and member functions
#include <iostream>

using namespace std;

class stack{
    int arr[100],top=-1;
    
    public:
    
    void push(){
        int a;
        cout<<"Enter the element to be pushed: ";
        cin>>a;
        top++;
        cout<<"The element pushed: "<<a<<endl;
        arr[top]=a;
    }
    void pop(){
        if(top>-1){
            int b=arr[top];
            cout<<"The element deleted: "<<b<<endl;
            top--;
            }
        else{
            cout<<"Stack is empty.Cannot pop element"<<endl;
        }
        
    }
};

int main(){
    stack st;
    int choice;
    
    while(choice!=4){
        cout<<"Options:\n 1.Push \n 2.Pop \n 3.Exit"<<endl;
        cin>>choice;
        if(choice==1){
            st.push();
        }
        else if(choice==2){
            st.pop();
        }
        else if(choice==3){
            break;
        }
        else{
            cout<<"Enter the correct option"<<endl;
        }
    }
    return 0;

}
