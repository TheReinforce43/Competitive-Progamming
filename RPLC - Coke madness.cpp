#include<bits/stdc++.h>
 
using namespace std;
const int int_max =1e6+140;
long long arr[int_max];
int n;
bool check(long long mid)
{
    //long long temp=mid;
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
    
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        
        for(int i=0;i<n;i++) cin>>arr[i];
        
        long long l=1,r=1e14,mid,ans=1;
        
        while(l<=r)
        {
            mid=l+(r-l)/2;;
            if(check(mid))
            {
                ans=mid;
                r=mid-1;
                //cout<<ans<<endl;
            }
            else l=mid+1;
        }
        
        cout<<"Scenario #"<<i<<": "<<ans<<"\n";       //Scenario #1: 7
    }
    return 0;
}

