#include<stdio.h>
#include<ctype.h>
#include<string.h>
int Test(char [],char []);

int main()
{
    int len1,len2;
    char a[110],b[110];
    scanf("%s%s",&a,&b);
    len1=strlen(a);
    len2=strlen(b);

    if(len1==len2 && len1<=100)
    {
        printf("%d",Test(a,b));
    }
    return 0;
}

int Test(char str1[],char str2[])
{
    int i;
    char temp1,temp2;

    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i]>='A' && str1[i]<='Z')
            temp1=tolower(str1[i]);
        else
            temp1=toupper(str1[i]);

        if(str2[i]>='A' && str2[i]<='Z')
            temp2=tolower(str2[i]);
        else
            temp2=toupper(str2[i]);

        if( (str2[i]==str1[i]) || (str2[i]== temp1) )
            continue;

        else if( (str1[i]>str2[i] && temp1>temp2) || (str1[i]<str2[i] && str1[i]>temp2 && temp1>str2[i]) || (str1[i]>str2[i] && str1[i]>temp2 &&temp1>str2[i]) )
           return 1;

        else if( (str1[i]<str2[i] && temp1<temp2) || (str1[i]>str2[i] && str1[i]<temp2 && temp1<str2[i]) || (str1[i]<str2[i] && str1[i]<temp2 && temp1<str2[i]))
        return -1;
    }

    return 0;
}
