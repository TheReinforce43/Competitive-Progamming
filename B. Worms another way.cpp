#include<bits/stdc++.h>

using namespace std;

const int mx=1e5;

int L[mx],R[mx],arr[mx];

int main() {
    
    int n,m,q,last=0;
    
    cin>>n;
    
    for(int i=1;i<=n;i++) cin>>arr[i];
    
    for(int i=1;i<=n;i++)
    {
        L[i]=last+1;
        R[i]=last+arr[i];
        last=R[i];
    }
 
   cin>>m;
    while(m--)
    {
        
        cin>>q;
        int l=1,r=n,mid;
        while(l<=r)
        {
            //cin>>q;
            mid=l+(r-l)/2;
            
            if(L[mid]<=q && R[mid]>=q)
            {
                    //cout<<mid<<"\n";
                    break;
            }
            else if(L[mid]>q && R[mid]>q)
            r=mid-1;
            else l=mid+1;
        }
        
        cout<<mid<<"\n";
    }
    
    return 0;
}