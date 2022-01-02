#include<iostream>
using namespace std;
int main(){
    char print;
    int num;
    cout<<"Enter what you want to print: ";
    cin>>print;
    cout<<"Pattern Num: ";
    cin>>num;
    int i=0;
    while (i<num)
    {
        int j=0;
        while (j<num)
        {
            cout<<print;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}