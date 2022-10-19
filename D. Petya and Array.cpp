#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;

using namespace __gnu_pbds;

typedef tree< long long  , null_type, less_equal<long long>, rb_tree_tag, tree_order_statistics_node_update > ordered_set;

const int mx=2*1e5+124;
long long a[mx],sum[mx];
int main() {
    
    long long n,t,ans=0;
    
    cin>>n>>t;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) sum[i]=a[i]+sum[i-1];
    
    ordered_set st;
    map<long long ,int> cnt;
    st.insert(0);
    cnt[0]++;
    for(int i=1;i<=n;i++)
    {
        ans+= ( i-  st.order_of_key(sum[i]-t) - cnt[sum[i]-t] );
        st.insert(sum[i]);
        cnt[sum[i]]++;
        //cout<<ans<<"  ";
    }
    
    cout<<ans;
    
    return 0;
}