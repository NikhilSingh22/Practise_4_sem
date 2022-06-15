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
   
   int i,j,midx,swaps=0,comp=0;
   for(i=0;i<n-1;i++)
   {
       midx=i;
       for(j=i+1;j<n;j++)
       {
           comp++;
           if(arr[j]<arr[midx])
           {
               midx=j;
           }
       }
       swaps++;
       if(i!=midx){
        int temp=arr[midx];
       arr[midx]=arr[i];
       arr[i]=temp;}
   }
   cout<<swaps<<" "<<comp<<endl;
   
   for(int k=0;k<n;k++)
   {
       cout<<arr[k]<<" ";
   }
}
