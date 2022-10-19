#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;

int Test(char []);

int main()
{
    char str[100];
    int F=1;
    gets(str);
    for(int i=0;str[i]!='0';i++)
    {
        if(str[i]>=48 && str[i]<=49)
            continue;
        else
            F=0;
    }
    if(F==1)
    {
        if(Test(str))
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}


int Test(char str [])
{
    int arr[100];
    int len,cnt=0,temp;
    len=strlen(str);
    for(int i=0;i<len;i++)
        arr[i]=str[i]-'0';

    for(int i=0;i<len;i++)
    {
        temp=arr[i];
        cnt=0;
        for(int j=i;(j<len&& arr[j]==temp);j++)
            cnt++;
        if(cnt>=7)
            return 1;
    }
    return 0;
}
