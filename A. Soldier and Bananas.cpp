#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,w,temp=0;
    long long int sum=0,result;
    cin>>k>>n>>w;

    if(1<=k && 1<=w<=1000 && 0<=n<=10^9)
    {
        for(int i=1;i<=w;i++)
            sum+=(k*i);

        result=sum-n;
        if(result>0)
            cout<<result;
        else
            cout<<temp;
    }
    return 0;
}
