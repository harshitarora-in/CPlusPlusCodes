#include<iostream>
using namespace std;
int main(){
    int rand = 2 & 4;
    int ror = 2 | 4;
    int rnot = ~2;
    int rxor = 2 ^ 4;
    int rls = 15<<1;
    int rrs = 15>>2;

    cout<<"rand: "<<rand<<endl;
    cout<<"ror: "<<ror<<endl;
    cout<<"rnot: "<<rnot<<endl;
    cout<<"rxor: "<<rxor<<endl;
    cout<<"rls: "<<rls<<endl;
    cout<<"rrs: "<<rrs<<endl;
}