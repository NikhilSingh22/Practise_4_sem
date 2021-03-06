#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l , int m ,int r)
{
    int n1= m-l+1;
    int n2= r-m;
    int L[n1],R[n2];
    
    for(int i=0;i<n1;i++)
    {
        L[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        R[j]=arr[m+1+j];
    }
    
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k++]=L[i++];
        }
        else
        {
            arr[k++]=R[j++];
        }
    }
    
    while(i<n1)
    {
        arr[k++]=L[i++];
    }
    
    while(j<n2)
    {
        arr[k++]=R[j++];
    }
}
void merge_sort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m = l+(r-l)/2;
        merge_sort(arr,l,m);
        merge_sort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
      
   }
   merge_sort(arr,0,n-1);
   
   for(int i=0;i<n;i++)
   {
       if(arr[i]==arr[i+1])
       {
           cout<<"Yes"<<endl;
           return 0;
       }
   }
   cout<<"No"<<endl;
   return 0;
}
