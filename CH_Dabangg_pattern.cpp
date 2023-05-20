#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int row=1;row<=n;row++){
        //first triangle 
        for(int first=1;first<=n-row+1;first++){
            cout<<first<<" ";
        }

        //second triangle
        for(int star=1;star<=(row-1)*2;star++){
            cout<<"*"<<" ";
        }
        
        //third triangle
        for(int third=n-row+1;third>=1;third-- ){
            cout<<third<<" ";
        }   
        cout<<endl; 
    }
}
