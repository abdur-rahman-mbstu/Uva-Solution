#include<stdio.h>
int main()
{
    long int a,b,i,max,n,m,k,maxval;
    while(scanf("%ld%ld",&a,&b)==2)
    {
        if(a==0&&b==0)
            break;
        max=0;
        if(a>b)
        {
            int m=a;
            a=b;
            b=m;
        }
        for(i=a; i<=b; i++)
        {
            long int count=0;
            n=i;
            do
            {
                if(n%2==0)
                    n=n/2;
                else
                    n=3*n+1;
                count++;
            }while(n!=1);
                if(count>max)
                {
                    max=count;
                    maxval=i;
                }
            }
        printf("Between %ld and %ld, %ld generates the longest sequence of %ld values.\n",a,b,maxval,max);
    }
    return 0;
}
