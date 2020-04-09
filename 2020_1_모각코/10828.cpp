#include <iostream>
#include <string>
using namespace std;

class stack{
public:
    int top;
    int data[10000];
    int empty(){
        if(top==-1) return 1;
        else        return 0;
    }
    void push(stack *s, int item){
        data[++top]=item;
    }
    void pop(){
        if(empty()){
            cout<<-1;   return;
        }
        else top--;
    }
    int size(){
        return top;
    }
    int front(){
        return data[top];
    }
};

int main(){
    int N;  cin>>N;
    stack s;    s.top=-1;
    while(N--){
        string str; cin>>str;
        if(str=="push") 

        if(str=="top")  cout<<s.front();
    }
    return 0;
}