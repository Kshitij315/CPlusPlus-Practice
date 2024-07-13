#include<cstdio>
int main(void)
{

	long num;
	printf("Positive integer: ");

	scanf("%ld",&num);
	if(num<0)
		num=-num;
	//register only works in C
	long a=1,b=num,c=0;

	do{
		a=a*10;
		c=c+1;

		}
	while(a<=b);
	printf("Number of digits=%ld\n",c);
}