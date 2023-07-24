#include<bits/stdc++.h>

using namespace std;


long int getSum(long int n)
{
    return n*(n+1)/2;
}
int main() {
    
    long int y;
    int t;
    scanf("%d",&t);
    
    
    while(t--)
    {
        scanf("%ld",&y);
        bool F=0;
        long int mid,l=1,r=y;
       
        
        while(l<=r)
        {
            mid=l+(r-l)/2;
            //temp=getSum(mid);
            if(getSum(mid)==y)
            {
                F=1;
                break;
            }
            else if(y>getSum(mid))
                l=mid+1;
            else r=mid-1;
            
        }
        
        if(F==1)
            printf("%ld\n",mid);
        else 
            printf("NAI\n");
      
    }
    return 0;
}
