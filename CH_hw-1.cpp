#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter num : ";
    cin>>n;
    int i=1; 
    while( i<=n){
            cout<<i<<" ";
            i+=2;
        }
        cout<<endl;
        int fact=1;

    for(int j=1;j<=n;j++){
        fact=fact*j;
    }
    cout<<n<<"! = "<<fact<<endl;
}