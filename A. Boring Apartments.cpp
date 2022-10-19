#include<bits/stdc++.h>

using namespace std;

int main() {
    
    int arr[]={1,2,3,4};
    int t;
    cin >>t;
    
    while(t--)
    {
        int N,temp,count=0,sum=0;
        
        cin>>N;
        temp=N;
        
        while(temp)
        {
            count++;
            temp/=10;
        }   
        temp=N/pow(10,count-1);
        
        for(int i=1;i<temp;i++)
            sum+=10;
            
        for(int i=0;i<count;i++)
            sum+=arr[i];
        cout<<sum<<endl;
    }
    return 0;
}