#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int t,N;
    cin>>t;
    while(t--)
    {
        cin>>N;
        int temp=N-1;
        while((N&temp)!=0)
        {
            N--;
            temp=N-1;
        }
        cout<<temp<<endl;
    }

    return 0;
}
