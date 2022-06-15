#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    sort(arr,arr+n);
    int key;
    bool found = false;
    cin>>key;
    int i=0,j=n-1;
    while(i<=j)
    {
        if(arr[i]+arr[j]==key)
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
            found = true;
        }
        if(arr[i]+arr[j]>key)
        j--;
        else
        i++;
    }
    
    if(found == false)
    cout<<"No such element exist";
    return 0;
}
