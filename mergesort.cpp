#include<iostream>
using namespace std;
void merge_array(int arr[],int si,int ei){
    int size=ei-si;
    int mid=(si+ei)/2;
    int i=si,j=mid+1,k=0;
    int* out=new int[size];
    while((i<=mid)&&(j<=ei))
    {
    if(arr[i]<arr[j])
    {
        out[k]=arr[i];
        i++;
        k++;
    }
    else
    {
        out[k]=arr[j];
        j++;
        k++;
    }
    }
    while(i<=mid)
    {
        out[k]=arr[i];
        i++;
        k++;
    }
    while(j<=ei)
    {
        out[k]=arr[j];
        j++;
        k++;
    }
    int n=0;
    for(int m=si;m<=ei;m++){
        arr[m]=out[n];
        n++;
    }
    delete []out;
}
void merge_sort(int arr[], int si,int ei){
    if(si>=ei){
        return;
    }
    int mid=(si+ei)/2;
    merge_sort(arr,si,mid);
    merge_sort(arr,mid+1,ei);
    merge_array(arr,si,ei);
}
int main(){
    int size;
    cout<<"enter size";
    cin>>size;
    int *arr=new int[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    merge_sort(arr,0,size-1);
    for(int i=0;i<size;i++)
    {
    cout<<arr[i]<<" ";
    }
}