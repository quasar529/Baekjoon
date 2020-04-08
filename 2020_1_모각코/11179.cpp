#include <iostream>
#include <vector>
using namespace std;
long long N;

long long Big2(long long x){
    long long po=1;
    while(x>=po*2){
        po*=2;
    }
    return po;
}

int main(){
    cin>>N;
    vector<int> vec;
    int cnt=0;
    long long res=0;

    while(N>0){
        N-=Big2(N);
        if(N%2==0)  vec.push_back(1);
        else        vec.push_back(0);
    }

    vector<int>::iterator it=vec.end();
    
    while(it!=(vec.begin()-1)){
        if(vec.back()==1){
            res+=cnt*2;
            cnt++;
            it--;
        }
        else    {
            it--;
            continue;
        }
    }
    
    cout<<res<<'\n';

    return 0;
}