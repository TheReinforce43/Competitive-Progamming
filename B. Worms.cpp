#include<bits/stdc++.h>

using namespace std;

const int mx=1e5;
int arr[mx];

bool check( vector< pair<int,pair<int,int> > > pr,int mid,int q)
{
    
    auto a=pr[mid].second.first;
    auto b=pr[mid].second.second;
    //cout<<"First "<<a<<";  second: "<<b<<"\n";
    if(a>=q && b<=q)
        return true;
    else return false;
}

int main() {
    
    vector< pair<int,pair<int,int> > > pr;
    int n,m,q,temp=0;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>arr[i];
    
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {   
            pr[i]=make_pair(i,make_pair(1,arr[i])) ;
            
        }
        else
        {
            pr[i]=make_pair(i,make_pair(temp+1,temp+arr[i]) ) ;
        }
        temp+=arr[i];
    }
   
    
    cin>>m;
    while(m--)
    {
        int l=1,r=n,mid;
        cin>>q;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            auto a=pr[mid].second.first;
            auto b=pr[mid].second.second;
            if(check(pr,mid,q))
            {
               
                
                break;
            }
            else if(a>q && b>q)
                r=mid-1;
            else l=mid+1;
        }
        
        cout<<mid<<"\n";
        
    }
    return 0;
}