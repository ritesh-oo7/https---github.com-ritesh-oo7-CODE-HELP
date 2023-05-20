#include <iostream>
using namespace std;
int S_Bit(int a){
    int count=0;
    while(a!=0){
        if ((a&1)==1){
            count+=1;
        }
        a=a>>1;
    }
    return count;

}
int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;

    int ans=S_Bit(a)+S_Bit(b);
    cout<<"Number of set bits are : "<<ans<<endl;

}