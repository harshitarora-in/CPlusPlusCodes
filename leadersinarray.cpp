#include<iostream>
using namespace std;
void Leaders(int* arr,int size)
{
    bool print =false;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>=arr[j])
            {
                print=true;
            }   
            else{
                print=false;
                break;
            }
        }
            if(print==true)
            {
                cout<<arr[i]<<" ";
                print=false;
            }
        if(i==size-1){
            cout<<arr[i];
        }
    }
}

int main()
{
    int len;
    cin>>len;
	int *arr = new int[len + 1];
	
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	Leaders(arr,len);
}
