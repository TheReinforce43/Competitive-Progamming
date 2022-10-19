#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;


    cin>>t;
    while(t--)
    {
        string str,ans;
        cin>>str;
        ans +=str.at(0);
        ans +=str.at(1);

        for(int i=2;i<str.size();i+=2)
        {
            ans +=str.at(i+1);
        }
        cout<<ans<<endl;
    }

    return 0;
}
