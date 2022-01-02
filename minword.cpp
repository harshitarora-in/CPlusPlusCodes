#include<iostream>
#include<cstring>
#include<climits>

using namespace std;

void minLengthWord(char input[], char output[]){
    int start=0,end=0,length=0,i=0,current_length=0,min_start=0,min_end=0, previouslength=0;
    int minimumlength=INT_MAX;
    int strlength=strlen(input);
    cout<<"strlength"<<strlength<<endl; //25
    while(i<strlength)
    {
        if((i+1==strlength-1)) //FALSE FALSE
        {   cout<<"If 2.0 Executed"<<endl;
            current_length=strlength-end-2;
            cout<<"currentlength"<<current_length;
            if(current_length<minimumlength)
            { // 
                cout<<"If 2.1 Executed"<<endl;
                min_start=end+1;//
                min_end=strlength-1;//
            }
        }
        else if(input[i]==' ') //TRUE
        {
            cout<<"If 1 Executed"<<endl;
            end=i-1;// 2
            current_length=end+1-start;//3
            if(current_length<minimumlength)
            { // TRUE
                cout<<"If 1.1 Executed"<<endl;
                min_start=start;//0
                min_end=end;//2
                minimumlength=current_length; //3
                start=i+1; //4
            }
            else
            {
                start=i+1; //
            }
        }   

        i++; //0 1 2 ->3 4 5 6 7 ->8
    }
    cout<<"MIN_START"<<min_start<<endl;
    cout<<"MIN_END"<<min_end<<endl;
    int n=0;
    for(int m=min_start;m<=min_end;m++){
        output[n]=input[m];
        n++;
    }
}

int main(){
  char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
  cout <<"Output: "<< output << endl;
}

