#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
//in this code , you can't give another input except 4.
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
             char ch='D'-i+j;
             cout<<ch<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    //OR YOU CAN USE THIS ALSO

    //this code is more future proof as compared to former one.
    for(int i=1;i<=n;i++){
        char ch='A'+n-i;
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch+=1;
        }
        cout<<endl;

    }
}