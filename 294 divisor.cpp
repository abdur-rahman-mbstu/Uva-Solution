#include<stdio.h>
#include<math.h>
main()
{
    long long t,l,h,temp,maxdiv,maxnum,a,b,i,j,div;
    scanf("%lld",&t);
    while(t--)
    {
        maxdiv=0;
        scanf("%lld%lld",&l,&h);
        a=l;
        b=h;
        if(l>h)
        {
            temp=l;
            l=h;
            h=temp;
        }
        for(i=l; i<=h; i++)
        {
            div=0;
            for(j=1; j<=sqrt(i); j++)
                if(i%j==0)
                    div+=2;
            if((long long)sqrt(i)==sqrt(i))
                div--;
            if(div>maxdiv)
            {
                maxdiv=div;
                maxnum=i;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",a,b,maxnum,maxdiv);
    }
    return 0;
}
