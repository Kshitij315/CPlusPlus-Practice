#include "banner3.h"
#include <cstdio>

// double Buy (Banner* banner, int copies)
// {
//    float discount = copies < 10 ? 0:55;
//     return (1 - discount / 100) * copies * banner->Price();

// }A reference type (T&) automatically addresses the 
// value of the variable with which 
// it is initialized and automatically indirects 
// to this value wherever it is used. A reference type 
// parameter declared with 'const' 
// qualifier treats the addressed data as read-only.
double Buy (const Banner& banner, int copies)//const don't make any changes to data
{
   float discount = copies < 10 ? 0:55;
    return (1 - discount / 100) * copies * banner.Price();

}
int main(void)
{
int count;
printf("Enter number of copies");
scanf("%d", &count);
Banner a; //activating banner with default constructor
printf("Total payment for standard banner:%.2f\n",Buy(a,count));//copy is passed
 Banner b(30, 8); //activating banner with parameterized constructor

printf("Total payment for custom banner:%.2f\n",Buy(b,count));//copy is passed
}