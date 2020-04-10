#include <iostream>
using namespace std;

int main(){
    int in[4], out[4];
    for(int i=0;i<4;i++){
        cin>>out[i]>>in[i];
    }
    int res[4]; int max_res=0;
    res[0]=in[0];
    res[1]=res[0]+in[1]-out[1];
    res[2]=res[1]+in[2]-out[2];
    res[3]=res[2]+in[3]-out[3];

    max_res=res[0];
    for(int i=1;i<4;i++){
        if(max_res<res[i])  max_res=res[i];
    }

    cout<<max_res<<'\n';

    return 0;
}