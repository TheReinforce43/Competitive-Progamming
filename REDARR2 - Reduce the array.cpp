#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,N;
    
    cin>>t;
    
    while(t--)
    {
        priority_queue<int> pq;
        cin>>N;
        
        for(int i=0;i<N;i++)
        {
            int a;
            cin>>a;
            pq.push(-a);
        }
        
        int cost=0;
        
        while(pq.size()!=1)
        {
            int a,b;
            a=-pq.top(); pq.pop();
            b=-pq.top(); pq.pop();
            
            cost+=a+b;
            pq.push(-(a+b));
        }
        
        cout<<cost<<"\n";
    }
    
    return 0;
}