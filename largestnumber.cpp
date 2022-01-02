#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[5];
    cout<<"Enter Numbers in array"<<endl;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    int largest=INT_MIN; //to get the maximum negative value possible
    for(int j=0;j<5;j++){
        if(largest<a[j]){
            largest=a[j];
        }

    }
    cout<<"Largest Number in the array is: "<<largest;
}