#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Pattern number";
    cin>>num;
    int i=1;
    int value=0;
    while(i<=num){
        int j=1;
        int k=0;
        while(k<num-i){
            cout<<" ";
            k++;
        }
        while(j<=i){
            cout<<value;
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
}