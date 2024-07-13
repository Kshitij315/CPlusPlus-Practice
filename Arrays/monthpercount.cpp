#include<cstdio>
//global array identified by year with 12 elements of int type 
//for global variable default is zero
int year[]={31,28,31,30,31,31,31,30,31,30,31};

int main(void)
{
int month;
printf("month[1-12]: ");
scanf("%d",&month);
//index is form 0 to n-1
int days = year[month-1];
double amount=days*(days+1)/2;//n(n+1)/2
printf("Total amount: %.2lf\n",amount);
}