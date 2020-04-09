#include <iostream>
using namespace std;

int comb(int n, int r){
    if(n==r)    return 1;
    if(r==1)    return n;
    if(n==0 || r==0)    return 1;
    return ( comb(n-1,r-1)+comb(n-1,r) );
}

int main(){
    int N,K;    cin>>N>>K;

    cout<<comb(N,K)<<'\n';

    return 0;
}