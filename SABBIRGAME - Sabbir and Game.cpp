#include<bits/stdc++.h>

using namespace std;

const int mx=1000;
int arr[mx];
int n;

bool check(long int mid)
{
    for(int i=0;i<n;i++)
    {
        mid+=arr[i];
        if(mid<=0) return 0;
    }
    
    return 1;
}


int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        
        for(int i=0;i<n;i++) cin>>arr[i];
        long long l=0,r=1e10+123,mid,ans=0;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            
            if(check(mid))
            {
                ans=mid;
                r=mid-1;
                //cout<<ans<<endl;
            }
            else l=mid+1;
            
    
        }
        cout<<ans<<"\n";
    }
    return 0;
}