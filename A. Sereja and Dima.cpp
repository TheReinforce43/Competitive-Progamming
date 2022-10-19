#include<bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> v;
    int F=1,key,N,left,right,A=0,B=0;
    cin>>N;
    while(N--)
    {
        cin>>key;
        v.push_back(key);
    }
    
    while(!v.empty())
    {
        left=*v.begin();
        right=v.back();
        
        if(F%2!=0)
        {
            if(left<right)
            {
                A+=right;
                v.pop_back();
            }
            else
            {
                A+=left;
                v.erase(v.begin());
            }
        }
        else{
            if(left<right)
            {
                B+=right;
                v.pop_back();
            }
            else
            {
                B+=left;
                v.erase(v.begin());
            }
        }
        F++;
    }
    cout<<A<<" "<<B;
    return 0;
}