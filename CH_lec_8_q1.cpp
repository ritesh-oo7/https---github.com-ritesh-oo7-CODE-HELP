#include <iostream>
using namespace std;

int Ap(int num){
    int ans = (3*num) + 7;
    return ans;
}

int main(){
    //A.P=3*n+7
    int n;
    cin>>n;

    int ans=Ap(n);
    cout<<"Answer is : "<<ans<<endl;

}