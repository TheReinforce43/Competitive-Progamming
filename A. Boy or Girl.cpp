#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>

using namespace std;

int Test(char []);

int main()
{
    int F=1;
    char str[100];
    scanf("%s",&str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
            continue;
        else
        {
            F=0;
            break;
        }
    }
    if(F)
    {
        if(Test(str))
            cout<<"CHAT WITH HER!";
        else
            cout<<"IGNORE HIM!";
    }
    return 0;
}

int Test(char str [])
{
    char new_str[100];
    char ch;
    int F=1,len,k=0;
    len=strlen(str);
    for(int i=0;i<len;i++)
    {
        ch=str[i];
        F=1;
        for(int j=i+1;j<len;j++)
        {
            if(str[j]!=ch)
                continue;
            else
            {
                F=0;
                break;
            }
        }
        if(F)
            new_str[k++]=ch;
    }

    new_str[k]='\0';
    len=strlen(new_str);

    if(len%2==0)
        return 1;
    else
        return 0;
}
