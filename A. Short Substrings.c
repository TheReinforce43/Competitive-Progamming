
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string str,ans;

    cin>>t;
    while(t--)
    {
        cin>>str;
        ans+=str[0]+str[1];

        for(int i=2;i<str.size();i+=2)
        {
            ans+=ans[i+1];
        }
        cout<<ans<<endl;
    }

    return 0;
}
