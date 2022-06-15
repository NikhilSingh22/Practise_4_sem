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
    
    //insertion sort
   int i, temp, j,shift=0,comp=0;
   for(i=1;i<n;i++)
   {
       temp=arr[i];
       j=i-1;
       while(j>=0 && arr[j]>temp)
       {
           
           arr[j+1]=arr[j];
           j--;
           comp++;
           shift++;
       }
       shift++;
       arr[j+1]=temp;
   }
   
   for(int k=0;k<n;k++)
   {
       cout<<arr[k]<<" ";
   }
   cout<<"\n"<<comp<<" "<<shift<<endl;
}
