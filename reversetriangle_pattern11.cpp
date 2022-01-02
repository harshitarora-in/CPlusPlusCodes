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
        int j=0;
        while (j<num-i)
        {
            cout<<" ";
            j++;
        }
        int k=0;
        while (k<i)
        {
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
        
    }
    
}