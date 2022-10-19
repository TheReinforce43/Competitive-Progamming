#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,max=0,value;
    cin>>N;
    long int sum=0;

    for(int i=0;i<N;i++)
    {
        cin>>value;
        if(value>max)
            max=value;
        sum+=value;
    }
    cout<<sum/max;
    return 0;
}
