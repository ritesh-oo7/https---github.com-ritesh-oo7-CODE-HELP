#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j+i-1<<" ";
        }
        cout<<endl;
    }
}