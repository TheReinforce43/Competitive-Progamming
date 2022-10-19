#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,k;
    cin>>N>>k;
    if((2<=N<=10^9) && (1<=k<=50) )
    {
        while(k--)
        {
            if(N%10!=0)
                N--;
            else
                N/=10;
        }
        if(N>0)
            cout<<N;
    }

    return 0;
}
