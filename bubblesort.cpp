#include<iostream>
using namespace std;
void bubbleSort(int inputArray[], int arraySize){
    for(int j=0;j<arraySize-1;j++){
    for(int i=0;i<arraySize-1-j;i++){
        //swapping if greator
        if(inputArray[i]>inputArray[i+1]){
            int temp=inputArray[i];
            inputArray[i]=inputArray[i+1];
            inputArray[i+1]=temp;
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
    bubbleSort(arr,n);
    cout<<"Sorted Elements in array using Selection Sort: "<<endl; 
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    }