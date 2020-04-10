#include <iostream>
//#include <string.h>
using namespace std;
int x[50];  int y[50];  int xyrank[50]={0,};
int main(){
//memset(xyrank,1,sizeof(xyrank));//memset으로 배열을 1로 초기화 원하면 char 배열만 가능.
    int N;  cin>>N;
    for(int i=0;i<N;i++){
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<N;i++){
        xyrank[i]++;
        for(int j=0;j<N;j++){
            if(i==j)    continue;
            if(x[i]<x[j] && y[i]<y[j])  xyrank[i]++;
        }
        cout<<xyrank[i]<<" ";
    }
    return 0;
}