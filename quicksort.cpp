#include<iostream>
using namespace std;


int partition(int input[], int si, int ei){
    int count=0;
    int pivot=input[si];
    for(int i=si+1;i<=ei;i++)
    {
        if(pivot>=input[i])
        {
            count++;
        }
    }
    int index=count+si;
    int temp=input[si];
    input[si]=input[index];
    input[index]=temp;
    int i=si,j=ei;
    while(i<index && j>index)
    {
        if(input[i]<=pivot)
        {
            i++;
        }
        else if(input[j]>pivot)
        {
            j--;
        }
        else
        {
            int temp=input[i];
            input[i]=input[j];
            input[j]=temp;
            i++;
            j--;
        }
    }
    return index;
}
void quickSort(int input[], int si,int ei){
    if(si>=ei)
    {
        return;
    }
    int index=partition(input,si,ei);
    quickSort(input,si, index-1);
    quickSort(input,index+1,ei);
}

int main()
{
    int arr[100];
    int n;
    numberofelements:
    cout<<"Enter Number of elements you want in array: "<<endl; 
    cin>>n;
    cout<<"Enter Elements in array: "<<endl; 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
quickSort(arr,0,n-1);
    cout<<"Sorted Elements in array using Selection Sort: "<<endl; 
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}