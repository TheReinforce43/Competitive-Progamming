#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int N,a,b;
    int temp=0,max=0;
    cin>>N;
    if(2<=N<=1000)
    {
        while(N--)
        {
            cin>>a>>b;
            if( (0<=a) && (0<=b<=1000))
            {
                temp-=a;
                temp+=b;
                if(max<temp)
                    max=temp;
            }
        }
        cout<<max;
    }

    return 0;
}
