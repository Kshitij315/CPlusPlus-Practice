#include <cstdio>

// global variable (of float type) are visible in all statement-blocks
// of the program
float width, height;

int main(void)
{
    // local variable (of int type) is only visible in the
    // statement block (encolsed within {}) in which it is defined
    short int count;//16 bit instead of 32 bit

    printf("Dimensions of Banner: ");//printf doesn't add extra line
    scanf("%f%f", &width, &height);
    printf("Number of Banners: ");
    //read from keyboard and put the values into variables
    scanf("%hd", &count);
    // printf("%hd\n" ,count);

    double payment = count * width * height * 0.80;
    // .2lf means 2 digit after the decimal
    printf("Total payment = %.2lf\n", payment);
}
