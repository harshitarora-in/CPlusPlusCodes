#include<iostream>
using namespace std;
void reverse(char name[]){
    int i=0;
    int count=0;
    while(name[i]!='\0'){
        count++;
        i++;
    }
    cout<<count<<endl;
    int k=0,j=count-1;
    while(k<j)
    {
        char temp=name[j];
        name[j]=name[k];
        name[k]=temp;
        k++;
        j--;
    }
}
int main(){
    char name[100];
    cout<<"Enter name: "<<endl;
    cin.getline(name,100);
    reverse(name);
    cout<<name;
}