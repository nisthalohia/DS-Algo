#include<iostream>
using namespace std;
int main()
{ 
int n,key;
cin>>n>>key;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
    int i=0,j=n-1,temp;
    while(i<j)
    {
        if(arr[i]== key)
        {
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
           j--;
        }
        else
        {
            i++;
        }
    }
    if(arr[i]==key)
    {
        for(int i=0;i<j;i++)
            cout<<arr[i];
    }
    else{
        for(int i=0;i<=j;i++)
            cout<<arr[i];
    }
}
