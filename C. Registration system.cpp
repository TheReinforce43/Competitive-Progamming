#include<bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin>>N;
    
    map<string,int>m;
    while(N--)
    {
        string str;
        cin>>str;
        if(m[str]==0)
        {
            m[str]++;
            cout<<"OK\n";
        }
        else
        {
          cout<<str<<m[str]<<endl;
          m[str]++;
        }
    
    }
    return 0;
}