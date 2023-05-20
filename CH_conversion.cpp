#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout<<"Enter number : ";
    int n;
    cin>>n;
    int bit,comp,ans=0;
    int i=0;

    while(n!=0){
        bit=n&1;
        if(bit==1){
            ans=bit*pow(10,i)+ans;
        }
        i++;
        n=n>>1;
    }
    cout<<ans<<" "<<~ans;
    
}
    
