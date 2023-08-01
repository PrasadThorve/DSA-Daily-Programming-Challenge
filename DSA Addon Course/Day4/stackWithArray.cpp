#include <iostream>
using namespace std;

const int maxSize = 100;

class Stack{
    private:
        int arr[maxSize];
        int top; //Index of the top element in the stack

    public:
        Stack(){
            top = -1; // it is Index of top element
        }

        void push(int value){
            if(top==(maxSize-1)){
                cout<<"Stack Full";
            }
            top++;
            arr[top]=value;
            return;
        }

        void pop(){
            if(top==-1){
                cout<<"Stack is empty";
            }
            top--;
            return;
        }

        void display(){
            cout<<"Elements of Stack: ";
            for(int i=0; i<=top; i++){
                cout<<arr[i]<<" ";
            }
        }
    
};
int main(){
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.display();
    stack.pop();
    stack.display();

    return 0;
}