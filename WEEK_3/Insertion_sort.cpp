#include<iostream>
using namespace std;
int Insr_sort(int arr[],int n)
{
    int c=0;
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
            c++;
        }
        arr[j+1]=temp;
    }
    return c;
}
int main()
{
    int arr[100];
    int n;
    int count=0;
    cout<<"Enter total number of elements: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   count=Insr_sort(arr,n);
    cout<<"Printing elements after applying Insertion sort: "<<endl;;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Total comparisons are: "<<count;
    return 0;
}
