#include <iostream>
#include <cstring>
using namespace std;

long long dp[91];

long long fibo(int n){
    if(dp[n]!= -1)  return dp[n];
    if(n<=1)    return n;

    dp[0]=0;    dp[1]=1;
    for(int i=2;i<=n; i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));

    cout<<fibo(n)<<'\n';
    return 0;
}