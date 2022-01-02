#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the value of num:" ;
    cin>>num;
    int i=1;
    while (i<=num)
    {
        int j=1;
        while (j<=i)
        {
            cout<<j;
            j++;
        }
        i++;
        cout<<endl;
    }
    
}