#include<bits/stdc++.h>

using  namespace std;

const int mx=1e8+123;


bitset<mx> is_prime;
int prime[mx];
 int Prime_gen()
{
    int size =2;
    is_prime[2]=1;
    prime[1]=2;
    for(int i=3;i<=mx;i+=2) is_prime[i]=1;
    
    for(int i=3;i<=sqrt(mx);i+=2)
    {
        
        if(is_prime[i]==1)
        {
            for(int j=i*i;j<=mx;j+=(i+i))
                is_prime[j]=0;
        }
    }
    int k=2;
    for(int i=3;i<=mx;i+=2)
    {
        if(is_prime[i]==1)
        {
            prime[k++]=i;
            size++;
        }
    }
    
    return size;
}

int main() {
    
     int range=Prime_gen();
    
    for(int  i=1;i<range;i+=100)
    {
        cout<<prime[i]<<"\n";
    }
    return 0;
}