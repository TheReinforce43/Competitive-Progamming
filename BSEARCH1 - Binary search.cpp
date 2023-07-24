#include<bits/stdc++.h>

using namespace std;

int main() {
    
    freopen("input.txt","r",stdin);
    int N,t;
    scanf("%d%d",&N,&t);
    vector<long int>v;
    
    for(int i=0;i<N;i++) 
    {
       long int a;
       scanf("%ld",&a);
        v.push_back(a);
    }
    while(t--)
    {
        long int x;
        cin>>x;
        
        if(binary_search(v.begin(),v.end(),x))
        {
            int low=lower_bound(v.begin(),v.end(),x)-v.begin();
            printf("%d\n",low);
        
        }
        else
            printf("-1\n");
    }
    return 0;
}