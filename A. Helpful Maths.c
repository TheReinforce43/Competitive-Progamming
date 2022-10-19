#include<stdio.h>
#include<string.h>

void Counting_sort(int [],int );

int main()
{
    char str[100];
    int dec[100];
    int i,j=0,k,len,F=1;
    scanf("%s",&str);
    len=strlen(str);

    for(i=0;i<len;i++)
    {
        if(str[i]=='+' || (str[i]>=49 &&str[i]<=51) )
            continue;
        else
        {
            F=0;
            break;
        }
    }
    if(F==1)
    {
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]>=48 && str[i]<=57)
                dec[j++]=str[i]-'0';
        }

         Counting_sort(dec,j);
         j=0;
        for(i=0;i<len;i++)
        {
            if(i%2==0)
                str[i]=dec[j++]+'0';
            else
                str[i]='+';

        }
        printf("%s",str);

    }
    return 0;
}

void Counting_sort(int arr[],int N)
{
     int i,j,k,M=arr[0];
	for(i=1;i<N;i++)
	{
		if(arr[i]>M)
			M=arr[i];
	}
	int temp[M+1];
	for(i=0;i<=M;i++)
	    temp[i]=0;

	for(i=0;i<N;i++)
	{
		j=arr[i];
		temp[j]+=1;
	}
	k=0;
	for(i=0;i<=M;i++)
	{
		for(j=0;j<temp[i];j++)
			arr[k++]=i;
	}
}
