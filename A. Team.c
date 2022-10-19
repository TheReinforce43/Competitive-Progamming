#include<stdio.h>

int main()
{
    int a,b,c,n,count=0;
    scanf("%d",&n);

    if(1<=n<=1000)
    {
        while(n--)
        {
            scanf("%d%d%d",&a,&b,&c);
            if( (a==0 ||a==1) && (b==0 ||b==1) && (c==0 ||c==1))
            {
                if(a&&b&&c)
                    count++;
                else if(a &&b)
                    count++;
                else if(a &&c)
                    count++;
                else if(b&&c)
                    count++;
            }
        }
        printf("%d",count);
    }


    return 0;
}
