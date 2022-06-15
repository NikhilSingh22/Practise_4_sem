#include<bits/stdc++.h>
using namespace std;

void count_sort(char ch[],int n)
{
    int temp[200];
    for(int i=0;i<200;i++)
    {
        temp[i]=0;
    }
    
    for(int i=0;i<n;i++)
    {
        temp[(int)ch[i]]++;
    }
    int i=0,j=0;
    int max=0;
    char ans;
    for(int i=0;i<200;i++)
    {
        if(temp[i]>max)
        {
            max=temp[i];
            ans=(char)i;
        }
    }
   if(max==1)
   {
       cout<<"no duplicate present\n";
   }
   else 
    cout<<ans<<"--"<<max<<endl;
    // while(i<200)
    // {
    //     if(temp[i]>0)
    //     {
    //         ch[j++]=(char)i;
    //         temp[i]--;
    //     }
    //     else 
    //     i++;
    // }

}
int main()
{
    int n;
    cin>>n;
    char ch[n];
    for(int i=0;i<n;i++)
    {
        cin>>ch[i];
    }
    
    
    count_sort(ch,n);
    
    // for(int i=0;i<n;i++)
    // {
    //     cout<<ch[i]<<" ";
    // }
}
