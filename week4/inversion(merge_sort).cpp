#include<bits/stdc++.h>
using namespace std;
int inv=0, cmp=0;

void merge(int arr[],int l , int m ,int r)
{
    int n1=m-l+1;
    int n2 = r-m;
    int a[n1],b[n2];
    
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[i+l];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=arr[i+m+1];
    }
    
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        cmp++;
        if(a[i]<=b[j])
        {
            arr[k++]=a[i++];
        }
        else
        {
            arr[k++]=b[j++];
            inv += n1-i;
        }
    }
    
    while(i<n1)
    {
       
        arr[k++]=a[i++];
    }
    while(j<n2)
    {
        
         arr[k++]=b[j++];
    }
}
void merge_sort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m= l+(r-l)/2;
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
    for(int i =0 ;i<n;i++)
    {
        cin>>arr[i];
    }
    
   merge_sort(arr,0,n-1);
   
   cout<<inv<<endl;
   cout<<cmp<<endl;
   
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
}
