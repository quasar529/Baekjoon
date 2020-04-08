#include <iostream>
using namespace std;

int pow(int x){
    int po=1;
    while(x>=po*2){
        po*=2;
    }
    return po;
}

int main(){
    int X; cin>>X;
    int cnt=0;
    while(X>0){
        X-=pow(X);
        cnt++;
    }
    cout<<cnt<<'\n';
    return 0;
}