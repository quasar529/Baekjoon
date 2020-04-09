#include <iostream>
using namespace std;

int main(){
    int x,y;
    int sum=0;
    for(int i=0;i<4;i++){
        int tmp;    cin>>tmp;
        sum+=tmp;
    }
    y=sum%60;
    x=(sum-y)/60;

    cout<<x<<'\n'<<y<<'\n';
    return 0;
    
}