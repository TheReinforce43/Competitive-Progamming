#include<bits/stdc++.h>

using namespace std;

bool compare(string a, string b)
{
    return (a+b < b+a);
}


int main()
{
    vector<string> str;
    int N;
    cin>>N;
    string ans;
    while(N--)
    {
        string temp;
        cin>>temp;
        str.push_back(temp);
    }

    sort(str.begin(),str.end(),compare);

    for(auto u:str)
        ans+=u;
    cout<<ans<<endl;

    return 0;
}
