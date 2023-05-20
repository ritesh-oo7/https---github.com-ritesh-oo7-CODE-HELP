#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter num"<<endl;
    cin>>n;

    switch(n){
        case 1:cout<<"MON";

        case 2:cout<<"Tue";
        break;
        case 3:cout<<"Wed";
        break;
        default:cout<<"funday";
    }

}