#include<iostream>
using namespace std;
int main(){
    int num;
    char temp;
    cout<<"Enter the value of num:" ;
    cin>>num;
    int i=1;
    while (i<=num)
    {
        int spaces=0;
        while (spaces<num-i)
        {
            cout<<" ";
            spaces++;
        }
        int number=1;
        while (number<=i)
        {
            cout<<number;
            number++;
        }
        int number2=i-1;
        while (number2>0)
        {
            cout<<number2;
            number2--;
        }
        cout<<endl;
        i++;
        
    }
    
}