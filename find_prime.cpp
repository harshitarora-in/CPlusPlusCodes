#include<iostream>
using namespace std;
int main(){
    int num;
    
    cout<<"Enter Number to check"<<endl;
cin>>num;
int temp=2;
if(num<2){
    cout<<"Enter Number greator than or equal to 2"
}
else
    while(temp<num){
        if(num%temp==0){
            cout<<num<<" is prime number";
            break;
        }
        temp++;
    }
    cout<<"Not Prime";
}