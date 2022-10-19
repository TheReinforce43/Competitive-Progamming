#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int Test(char []);

int main()
{
    char str[100];
    int len;
    scanf("%s",&str);
    len=strlen(str);
    if(1<=len <=100)
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
    char temp[]="hello";
    int k=0,len;
    len=strlen(str);

    for(int i=0;str[i]!='\0';i++)
    {
        for(int j=i;j<len;j++)
        {
            if(str[j]!=temp[k])
                continue;
            else
            {
                i=j;
                k++;
                break;
            }
        }
    }
    if(k==5)
        return 1;
    else
        return 0;

}
