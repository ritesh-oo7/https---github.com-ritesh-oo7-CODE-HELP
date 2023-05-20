#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;

    for(int i=1;i<=n;i++){
        char ch='A'+i-1;
        for(int j=1;j<=n;j++){
            cout<<ch<<" ";
            ch+=1;
        }
        cout<<endl;

    }
}