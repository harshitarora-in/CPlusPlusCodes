#include<iostream>
using namespace std;
void insertionSort(int inputArray[], int arraySize){
    for(int i=1;i<arraySize;i++){
        int current=inputArray[i];
        for(int j=i-1;j>=0;j--){
            if(current<inputArray[j]){
                inputArray[j+1]=inputArray[j];
                inputArray[j]=current;
            }
            else{
                break;
            }
        }
    }
}
int main(){
    int arr[100];
    int n;
    numberofelements:
    cout<<"Enter Number of elements you want in array: "<<endl; 
    cin>>n;
    if(n<0){
        cout<<"Please Enter number greator than 0"<<endl;
        goto numberofelements;
    }
    cout<<"Enter Elements in array: "<<endl; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);
    cout<<"Sorted Elements in array using Selection Sort: "<<endl; 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}