#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter num : ";
    cin>>n;
    int ans=1;
    for(int i=1;i<31;i++){
        ans=ans*2;
        if(ans<(INT_MAX/2)){
             if(ans==n){
                cout<<"Yes";
                return 0;
            }
        }
        else{
            cout<<"Limit exceed";
            return 0;
        }
        

    }

    cout<<"No";
}