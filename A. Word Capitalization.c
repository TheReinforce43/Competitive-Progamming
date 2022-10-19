#include<stdio.h>
#include<ctype.h>

int main()
{
    char str[100];
    scanf("%s",&str);
    if(str[0]>='a' && str[0]<='z')
        str[0]=toupper(str[0]);
    printf("%s",str);
    return 0;
}
