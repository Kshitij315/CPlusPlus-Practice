#include<cstdio>
//program add square of numbers from lower to upper
int main()
{
    int n ;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    double result = 0;
    for(long num = 1; num <= n;++num)
    {
        result +=  1.0/num;
    }

    printf("Computation result: %lf\n",result);
}