#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={31,24,18,14,16,31};
    int n=6;
    int max=a[0];
    for(int i=0;i<n;i++)//max element
    {
        if(a[i] > max)
        {
            max=a[i];
        }
    }
    int count[max+1]={0};
   for(int i=0;i<=max;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        count[a[i]]++;
    }
    for(int i=0;i<=max;i++)
    {
        count[i]=count[i] + count[i-1];//cumulative frequency
    }
    
    int result[n];
    for(int i=n-1;i>=0;i--)
    {
        result[count[a[i]]-1] = a[i];
        count[a[i]]--;
    }
    
    for(int i=0;i<n;i++)
    {
       a[i]=result[i];
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
