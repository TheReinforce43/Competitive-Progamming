#include<bits/stdc++.h>

using namespace std;

int Test(int);

int main()
{
    int N;
    cin>>N;
    if(1<=N<=1000)
    {
        if(Test(N))
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}


/* int Test(int N)
 * {
 *     int arr[5],Lucky[1000];
 *     int index=0,temp=N,F=1;
 *     while(temp)
 *     {
 *         arr[index++]=temp%10;
 *         temp/=10;
 *     }
 *
 *     for(int i=0;i<index;i++)
 *     {
 *         if(arr[i]==7 || arr[i]==4)
 *             continue;
 *         else
 *         {
 *             F=0;
 *             break;
 *         }
 *     }
 *     if(F)
 *         return 1;
 *     else
 *     {
 *         if( (N%4==0) || (N%7==0))
 *             return 1;
 *         return 0;
 *     }
 * }
 */


 int Test(int N)
 {
     int arr[4],lucky[1000];
     int temp,index,k=0,i,j,F;

    /// Finding all lucky numbers
     for(i=4;i<=1000;i++)
     {
         temp=i;
         index=0;
         F=1;
         while(temp)
         {
             arr[index++]=temp%10;
             temp/=10;
         }
         for(j=0;j<index;j++)
         {
             if(arr[j]==4 || arr[j]==7)
                continue;
             else
             {
                 F=0;
                 break;
             }
         }
         if(F)
            lucky[k++]=i;
         else if( (i%4==0) || (i%7==0))
            lucky[k++]=i;
         else{
            for(j=0;j<(k-1);j++)
            {
                if(i%lucky[j]==0)
                {
                    lucky[k++]=i;
                    break;
                }
            }
         }
     }

    /// Now check the value of N is lucky or not.
     temp=N;
     index=0;
     F=1;
     while(temp)
     {
         arr[index++]=temp%10;
         temp/=10;
     }
     for(i=0;i<index;i++)
     {
         if(arr[i]==4 || arr[i]==7)
            continue;
        else
        {
            F=0;
            break;
        }
     }
     if(F)
        return 1;
     else if( (N%4==0) || (N%7==0))
        return 1;
     else
     {
         for(i=0;i<(k-1);i++)
         {
             if(N%lucky[i]==0)
                return 1;
         }
     }

     return 0;

 }


