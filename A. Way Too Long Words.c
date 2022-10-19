#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,n,len,temp;
    int arr[100];
    char str[200],new_str[200];
    scanf("%d",&n);
    if(1<=n<=100)
    {

         while(n--)
         {

            i=0,j=0,k=0;
            scanf("%s",&str);
            len=strlen(str)-2;
            temp=len;
            if(len>=9)
            {
                printf("%c",str[0]);
                while(len)
                {
                    arr[i++]=len%10;
                    len/=10;
                }
                i--;
                while(i>=0)
                {
                    printf("%d",arr[i--]);
                }
                printf("%c",str[temp+1]);

                printf("\n");
            }
            else
                printf("%s\n",str);
         }
    }

    return 0;
}
