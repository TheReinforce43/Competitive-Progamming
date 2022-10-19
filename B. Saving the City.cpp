#include<bits/stdc++.h>

using namespace std;

int main() {
    
    int t,a,b;
    string str;
    
    cin>>t;
    while(t--)
    {
        int count=0;
        cin>>a>>b;
        cin>>str;
        int arr[str.size()];
        
        for(int i=0;i<str.size();i++)
           arr[i]=str[i]-'0';
        
        for(int i=0;i<str.size();i++)
        {
            if(arr[i]==1 && a>0)
            {
                count+=a;
                a=0;
                int j=i;
                while(arr[j]==1&& j<str.size())
                {
                    arr[j]=0;
                    j++;
                }
                if(i!=j)
                    i=j-1;
            }
            else if(arr[i]==1 && a<0 && b>0)
            {
                count++;
                b--;
                int j=i;
                while(arr[j]==1&& j<str.size())
                {
                    arr[j]=0;
                    j++;
                }
                if(i!=j)
                    i=j-1;
                
            }
            else continue;
        }
        cout<<count<<"\n";
        
    }
    
    return 0;
}