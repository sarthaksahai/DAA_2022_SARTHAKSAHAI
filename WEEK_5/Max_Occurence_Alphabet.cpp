#include<iostream>
using namespace std;
int main()
{
    char arr[100];
    int n;
    cout<<"Enter number of characters: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    char major='a';
    int votes=0;
    for(int i=0;i<n;i++)
    {
        if(votes==0)
        {
            major=arr[i];
            votes=1;
        }
        else
        {
         if(arr[i]==major)
            votes++;
          else
          votes--;
        }
    }
    int freq=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==major)
            freq++;
    }
    if(n%2==0)
    {
    if(freq>=n/2)
    cout<<"Element having maximum occurrence is: "<<major<<endl;
    else
    cout<<"No element is found"<<endl;
    }
    else if(n%2!=0)
    {
            if(freq>=(n-1)/2)
    cout<<"Element having maximum occurrence is: "<<major<<endl;
    else
    cout<<"No element is found"<<endl;
    }
    return 0;
}
