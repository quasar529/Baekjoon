#include <iostream>
using namespace std;

int main(){
    int C,cnt, N, students[1001];
    cin>>C;

    while(C--){
        cin>>N;
            int sum=0;
        for(int i=0;i<N;i++){
            cin>>students[i];
            sum+=students[i];
        }
        float avg=sum/(float)N;

        for(int i=0;i<N;i++){
            if(students[i]>avg)    cnt++;
        }
        double pro=(double)cnt/N * 100;
        cout.precision(3);
        cout<<pro<<'\n';
    }
    return 0;
}