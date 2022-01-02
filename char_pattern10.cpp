#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the value of num:" ;
    cin>>num;
    int i=0;
    while (i<num)
    {
        int j=0;
        while (j<num)
        {
            char temp=65+j+i;
            cout<<temp;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
}