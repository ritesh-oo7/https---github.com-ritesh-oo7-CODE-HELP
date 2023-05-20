#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int col=0;

        while (col<row){
            
            cout<<row+col;
            col++;

        }
        cout<<endl;
        row++;
    }
}