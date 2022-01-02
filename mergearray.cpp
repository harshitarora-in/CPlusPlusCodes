#include<iostream>
using namespace std;
void mergeArray(int arr1[], int size1, int arr2[], int size2){
    int ans[100];
    int i=0,j=0,k=0;
    while(i<size1&&j<size2)
    {
        if(arr1[i]<arr2[j])
        {
            cout<<"Main While condition"<<endl;
            ans[k]=arr1[i];
            i++;
            k++;
        }
        else
        {
            cout<<"Main While else condition "<<endl;
            ans[k]=arr2[j];
            j++;
            k++;
        }
    }
   while(i<size1){
       cout<<"While 2"<<endl;
       ans[k]=arr1[i];
       i++;
       k++;
   }
     while(j<size2){
       cout<<"While 3"<<endl;
       ans[k]=arr2[j];
       j++;
       k++;
   }
    for(int m=0;m<size1+size2;m++)
    {
        cout<<ans[m];
    }
}
int main()
{
    int arr1[100],arr2[100];
    int n1,n2;
    numberofelements1:
    cout<<"Enter Number of elements you want in array 1: "<<endl; 
    cin>>n1;
    if(n1<0)
    {
        cout<<"Please Enter number greator than 0"<<endl;
        goto numberofelements1;
    }
    cout<<"Enter Elements in array 1: "<<endl; 
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    numberofelements2:
    cout<<"Enter Number of elements you want in array 2: "<<endl; 
    cin>>n2;
    if(n2<0)
    {
        cout<<"Please Enter number greator than 0"<<endl;
        goto numberofelements2;
    }
    cout<<"Enter Elements in array 2: "<<endl; 
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    mergeArray(arr1,n1,arr2,n2);
}