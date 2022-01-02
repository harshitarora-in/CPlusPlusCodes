#include<iostream>
#include<cstring>
using namespace std;
void prefix(char a[]){
    int i=0;
    while(i<strlen(a)){
        int j=0;
        while (j<=i)
        {
            cout<<a[j];
            j++;
        }
        cout<<endl;
        i++;
    }

}
int main(){
    char name[100];
    cout<<"Enter name: "<<endl;
    cin.getline(name,100);
    prefix(name);
}