#include<iostream>
using namespace std;
int binarySearch(int inputArray[], int arraySize, int value){
    int start=0;
    int end=arraySize-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(inputArray[mid]==value){
            return mid;
        }
        else if(inputArray[mid]>value){
            start=0;
            end=mid-1;
        }
        else if(inputArray[mid]<value){
            start=mid+1;
            end=arraySize-1;
        }
    }
    return -1;
}

int main(){
    int arr[100];
    int n, val;
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
    cout<<"Enter value you want to search in array: "<<endl; 
    cin>>val;
    if(binarySearch(arr, n, val)==-1){
        cout<<"Element not found in the array";
    }
    else
    cout<<"Value found at index: "<<binarySearch(arr, n, val);
}