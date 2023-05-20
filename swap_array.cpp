#include <iostream>
using namespace std;

int swap(int arr[],int size){
    int temp,i=0;
    while (i+1<size){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        i+=2;
    }
    return arr[size];
}


int main(){
    int arr[7]={2,1,5,6,3,1,7};
    int array=swap(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}