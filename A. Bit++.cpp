#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,ans=0;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;

        if(str[0]=='+' || str[1]=='+')
            ans++;
        else if(str[0]=='-' || str[1]=='-')
            ans--;
    }
    cout<<ans<<endl;
    return 0;

}
