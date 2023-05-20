#include <iostream>
using namespace std;

int Fibo(int n){
    int a=0,b=1,ans;
    for(int i=3;i<=n;i++){
        ans=a+b;
        a=b;
        b=ans;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<"Element is "<<Fibo(n)<<endl;
}