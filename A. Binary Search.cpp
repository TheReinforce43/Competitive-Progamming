#include<bits/stdc++.h>

using namespace std;
const int mx=1e5;
int arr[mx];

bool Test(int N,int k)
{
    int l=1,r=N,mid;
    
    while(l<=r)
    {
        mid=l+(r-l)/2;
        
        if(arr[mid]==k)
            return true;
        else if(arr[mid]>k)
            r=mid-1;
        else l=mid+1;
    }
    
    return false;
}

int main() {
    
    int n,k;
    cin>>n>>k;
    int key[k];
    for(int i=1;i<=n;i++ ) cin>>arr[i];
    
    for(int i=1;i<=k;i++) 
    {
        cin>>key[i];
        if(Test(n,key[i]))
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}