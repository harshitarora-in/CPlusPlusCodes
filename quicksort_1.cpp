#include<iostream>
using namespace std;

int partition(int arr[],int si,int ei)
{
    int count=0;
    int indexvalue=arr[si];
    int i=si,j=ei;
    for(int k=si;k<=ei;k++)
    {
        if(indexvalue>arr[k])
        {
            count++;
        }
    }
    int temp=arr[count];
    arr[count]=arr[0];
    arr[0]=temp;
    while(i<count && j>count)
    {
        if(arr[i]<arr[count])
        {
            i++;
        }
        else if(arr[j]>arr[count])
        {
            j--;
        }
        else
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j--;
            i++;
        }
    }
return count;
}

void quickSort(int arr[], int si, int ei)
{
    if(si>=ei)
    {
        return ;
    }
    int partition_index=partition(arr,si,ei);
    quickSort(arr,si,partition_index-1);
    quickSort(arr,partition_index+1,ei);
}


int main()
{
    int arr[100];
    int n;
    numberofelements:
    cout<<"Enter Number of elements you want in array: "<<endl; 
    cin>>n;
    if(n<=0)
    {
        cout<<"Please Enter number greator than 0"<<endl;
        goto numberofelements;
    }
    cout<<"Enter Elements in array: "<<endl; 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    cout<<"Sorted Elements in array using Selection Sort: "<<endl; 
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}