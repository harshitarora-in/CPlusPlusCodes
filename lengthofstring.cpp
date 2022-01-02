#include<iostream>
using namespace std;
int length(char name[]){
    int i=0;
    int count=0;
    while(name[i]!='\0'){
        count++;
        i++;
    }
    return count;
}
int main(){
    char name[100];
    cout<<"Enter name: "<<endl;
    gets(name);
    cout<<"Length: "<<length(name);
}