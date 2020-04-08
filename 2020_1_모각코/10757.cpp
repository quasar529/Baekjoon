#include <iostream>
#include <string>
using namespace std;

int main(){
    string A,B;
    string res;
    cin >> A >> B;
    
    int len;
    if(A.length()<B.length())   len=A.length();
    else                        len=B.length();

    int first=stoi(A.at[0])+stoi(B.at[0]);

    int i=0;
    do{
        int tmp;
        int a,b;
        a=stoi(A.at[i]);    b=stoi(B.at[i]);
        if(a+b>10){
            res[i]=res[i-1]+(a+b-10);
            res[i+1]=1;
        }
        else
        {
            res[i]=res[i-1]+a+b;
        }
    }while(i<len);


    cout<<res<<endl;
}