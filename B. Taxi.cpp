#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    float sum=0;
    bool temp=false;
    cin>>N;

    int arr[N+10];

    for(int i=0;i<N;i++) cin>>arr[i];

    int count_1=count(arr,arr+N,1);
    int count_2=count(arr,arr+N,2);
    int count_3=count(arr,arr+N,3);
    int count_4=count(arr,arr+N,4);

    if (count_3<=count_1)
    {
        sum+=count_3;
        count_1-=count_3;
        count_3=0;
    }
    else if(count_3 > count_1)
    {
        sum+=count_1;
        count_3-=count_1;
        count_1=0;
    }
    sum+=count_2/2;
    if( (count_2%2)!= 0)
    {
        if(count_1==1)
            count_1--;
        if(count_1>=2)
            count_1-=2;
        sum++;
        count_2=0;
    }
    float a=count_1;
    sum += ceil( float(a/4) );
    sum+=count_3;
    sum+=count_4;
    cout<<sum<<endl;


    return 0;
}
