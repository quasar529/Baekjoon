#include <iostream>
#include <algorithm>
using namespace std;
long long A[5'000'000];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    int N,K;  cin>>N>>K;
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    sort(A,A+N);
    cout<<A[K-1]<<'\n';
    return 0;
}