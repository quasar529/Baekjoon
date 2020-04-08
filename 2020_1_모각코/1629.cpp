#include <iostream>
using namespace std;
using ll=long long;

ll pow(ll a, ll b, ll c){
    int res=1;
    while(b){
        if(b%2){
            res=(res*a) %c;
        }        
        a=(a*a) % c;
        b >>= 1;
    }
    return res;
}


int main(){
    ll A,B,C;
    int result;
    cin >>A>>B>>C;

    cout<<pow(A,B,C)<<'\n';
    return 0;
}