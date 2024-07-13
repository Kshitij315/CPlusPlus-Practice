#include<cstdio>
//program add square of numbers from lower to upper
int main()
{
    long lower,upper;
    printf("Enter the lower & upper limit: ");
    scanf("%ld %ld", &lower, &upper);
    
    long result = 0;
    for(long num = lower; num <= upper;++num)
    {
        result +=  num*num;
    }

    printf("Computation result: %ld\n",result);
}