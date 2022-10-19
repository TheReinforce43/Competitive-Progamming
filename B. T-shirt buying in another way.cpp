#include<bits/stdc++.h>
#define int_mx 1100000000
using namespace std;

const int mx=2e5+123;



long int p[mx];
int a[mx];
int  b[mx];

int main() {
    
    int N,M;
    int R,C,chc;
    
    cin>>N;
    
    for(int i=1;i<=N;i++) cin>>p[i];
    for(int i=1;i<=N;i++) cin>>a[i];
    for(int i=1;i<=N;i++) cin>>b[i];
    
    priority_queue<int, vector<int>, greater<int> > pq[5][5];
    
    for(int i=1;i<=N;i++)
        pq[a[i]][b[i]].push(p[i]);
        
    cin>>M;
    
    while(M--)
    {
        cin>>chc;
       long int price=int_mx;
        for(int i=1;i<=3;i++)
        {
            if(!pq[chc][i].empty() && pq[chc][i].top()<price  )
            {
                R=chc;
                C=i;
                price=pq[chc][i].top();
            }
        }
        
        for(int i=1;i<=3;i++)
        {
            if(!pq[i][chc].empty() && pq[i][chc].top()<price)
            {
                R=i;
                C=chc;
                price=pq[i][chc].top();
            }
            
        }
        
        if(price==int_mx) cout<<"-1 ";
        else 
        {
            cout<<price<<" ";
            pq[R][C].pop();
        }
    }
    cout<<endl;
    
   
    return 0;
}
