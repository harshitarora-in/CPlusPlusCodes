#include<iostream>
using namespace std;
int return_factorial(int a){
    int i=1;
    int result=1;
    while(i<=a){
        result*=i;
        i++;
    }
    return result;
}
int main(){
    int n,r;
    cout<<"Enter value of N in NCR: ";
    cin>>n;
    cout<<"Enter value of R in NCR: ";
    cin>>r;
    cout<<return_factorial(n)/((return_factorial(r))*return_factorial(n-r));
    return 0;
}