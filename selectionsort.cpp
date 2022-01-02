#include<iostream>
using namespace std;
void selectionSort(int inputArray[], int arraySize){
    for(int j=0;j<arraySize-1;j++){
    //finding minimun element in the array
    int minIndex=j;
    int min=inputArray[minIndex]; 
    for(int i=j;i<arraySize;i++){
        if(inputArray[i]<min){
            min=inputArray[i];
            minIndex=i;
        }
    }
    //swapping minimum element
    int temp=inputArray[j];
    inputArray[j]=min;
    inputArray[minIndex]=temp;
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
    selectionSort(arr,n);
    cout<<"Sorted Elements in array using Selection Sort: "<<endl; 
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    }