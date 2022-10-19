#include<stdio.h>
#include<ctype.h>
#include<string.h>

void Test(char []);

int main()
{
    int i,len,F=1;
    char str[110];
    scanf("%s",&str);
    len=strlen(str);
    for(i=0;str[i]!='\0';i++)
    {
        if( (str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
            continue;
        else
            F=0;
    }
    if( (1<= len <=100 ) && F==1 )
    {
        Test(str);
    }
    return 0;
}

void Test(char str[])
{
    int i,j=0,len;
    char ch,temp;
    char arr[110];

    for(i=0;str[i]!='\0';i++)
    {
        ch=str[i];
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' ||ch=='U' || ch=='Y' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y' )
            continue;
        else
        {
            arr[j++]='.';
            if(ch>='A' && ch<='Z')
            {
                temp=tolower(ch);
                arr[j++]=temp;
            }
            else
                arr[j++]=ch;
        }
    }
    arr[j]='\0';
    len=strlen(arr);
    if(1<=len <=100)
        printf("%s",arr);
}
