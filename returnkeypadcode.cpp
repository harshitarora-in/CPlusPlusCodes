#include<iostream>
using namespace std;
string options(int input)
{
    string values[]={"", "","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
    if(input>9||input<0){
        return "";
    }
    else{
        return values[input];
        cout<<"executed options";
    }
}
int keypad(int num, string output[]){
    if(num<=1){
        output[0]=" ";
        return 1;
    }
    int recurssion_num=num/10;
    int last_digit=num%10;
    string smalloutputstring[1000];
    int count=keypad(recurssion_num,smalloutputstring);
    string op=options(last_digit);
    int k=0;
    for(int i=0;i<op.length();i++){
        for(int j=0;j<count;j++){
            output[k]=smalloutputstring[j]+op[i];
            k++;
        }
    }
    return k;
}
int main()
{
    int input;
    string s[1000];
    cout<<"Enter Input"<<endl;
    cin>>input;
    int count=keypad(input, s);
    cout<<count<<endl;
    for(int i=0;i<=count;i++){
        cout<<s[i]<<endl;
    }
}