#include<iostream>
using namespace std;
int minimum(int arr[]){
    int min=arr[0];
    for(int i=1;i<5;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int arr[5];
    cout<<"enter elements in array"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Minimun number in the array is "<<minimum(arr);
}