#include<bits/stdc++.h>

using namespace std;


int main() {
    set<int>s;
    int N;
    cin>>N;
    
    for(int i=0;i<N;i++)
    {
        int a;
        cin>>a;
        s.insert(a);
    }
    if(s.size()>1)
        cout<<*(++s.begin());
    else
        cout<<"NO";
    return 0;
}