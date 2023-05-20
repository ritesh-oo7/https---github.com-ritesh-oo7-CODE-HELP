#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter num :";
    cin>>n;
    int found=1;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0){
            found=0;
        }
    }
    if(found==1){
        cout<<"Prime number."<<endl;
    }
    else{
        cout<<"Non-Prime number."<<endl;
    }
}