#include<iostream>
using namespace std;
int main(){
int r,c;
cout<<"enter r: ";
cin>>r;
cout<<"enter c: ";
cin>>c;

int** p=new int* [r];
for(int i=0;i<r;i++){
    p[i]=new int[c];
    for(int j=0;j<c;j++){
        cin>>p[i][j];
    }
}
for(int k=0;k<r;k++){
    delete [] p[k];
}
delete p;
}