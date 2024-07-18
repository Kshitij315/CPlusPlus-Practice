#include "banner3.h"
#include <cstdio>

double Buy (Banner* info, int copies)
{
   float discount =Banner::BulkDiscount(copies);
    return (1 - discount / 100) * copies * info->Price();

}

int main(void)
{
int count;
printf("Enter number of copies");
scanf("%d", &count);
Banner a; //activating banner with default constructor
printf("Total payment for standard banner:%.2f\n",Buy(&a,count));//copy is passed
 Banner b(30, 8); //activating banner with parameterized constructor

printf("Total payment for custom banner:%.2f\n",Buy(&b,count));//copy is passed
}