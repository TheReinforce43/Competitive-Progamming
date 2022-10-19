#include<bits/stdc++.h>

using namespace std;

void Quick_sort(int arr[],int low,int high);
int Partition(int arr[],int low,int high);
int main() {
    
    int t,N,M;
    
    double sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>N>>M;
        int arr[N];
        
        for(int i=1;i<=N;i++) cin>>arr[i];
        
        Quick_sort(arr,1,N);
        for(int i=1;i<=N;i++)
        {
            for(int j=i;j<=N;j++)
            {
                sum+=(double)arr[j]/j;
            }
        }
       /// cout<<sum<<endl;
        if(sum==(double)M)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        
    }
    return 0;
}

void Quick_sort(int arr[],int low,int high)
{
    int P;
    if(low<high)
    {
        P=Partition(arr,low,high);
        Quick_sort(arr,low,P-1);
        Quick_sort(arr,P+1,high);
    }
}

int Partition(int arr[],int low,int high)
{
    int i=low,j=high;
    int pivot=arr[i];

    while(i<j)
    {
        do
        {
            i++;
        }while(arr[i]<=pivot);
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
