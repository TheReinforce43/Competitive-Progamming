#include<bits/stdc++.h>

using namespace std;

int main() {
    
    int N;
    cin>>N;
    map<string,bool>m;
    while(N--)
    {
        string str;
        cin>>str;
        if(m[str]==1) cout<<"YES\n";
        else cout<<"NO\n";
        m[str]=1;
    }
    return 0;
}