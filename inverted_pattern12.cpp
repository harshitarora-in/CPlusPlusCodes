#include<iostream>
using namespace std;
int main(){
    int num;
    char temp;
    cout<<"Enter the value of num:" ;
    cin>>num;
    int i=0;
    while (i<num)
    {
        int stars=0;
        while (stars<num-i)
        {
            cout<<"*";
            stars++;
        }
        int spaces=0;
        while (spaces<=i)
        {
            cout<<" ";
            spaces++;
        }
        cout<<endl;
        i++;
        
    }
    
}