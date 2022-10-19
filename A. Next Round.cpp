#include<bits/stdc++.h>

using namespace std;

int main()
{
    int P=0;
    int n,k,F=1,temp,value;
    int arr[100];
    cin>>n>>k;
    if(1<=k<=n<=50)
    {
        for(int i=1;i<=n;i++)
        {
            cin>>value;
            if(0<=value<=100)
            {
                arr[i]=value;
            }
        }
        for(int i=1;i<n;i++)
        {
            if(arr[i]>=arr[i+1])
                continue;
            else
                F=0;
        }
        if(F==1)
        {
            temp=arr[k];

            for(int i=1;i<=n;i++)
            {
                if(arr[i]>=temp && arr[i]>0)
                    P++;
            }
            cout<<P;

        }
    }
    return 0;
}
