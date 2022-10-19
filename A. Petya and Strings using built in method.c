#include<stdio.h>

int main()
{
    char str1[100],str2[100];
    int result;
    scanf("%s%s",&str1,&str2);
    result=strcasecmp(str1,str2);
    printf("%d",result);
    return 0;
}
