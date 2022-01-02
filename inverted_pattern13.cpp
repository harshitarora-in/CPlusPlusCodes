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
        int j=1;
        while (j<=num-i)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
}