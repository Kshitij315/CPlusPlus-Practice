#include <stdio.h>

int main(void)
{
    int copies;
    const float price_per_copy = 1.0;
    const float gst_rate = 0.18;  // 18% GST

    printf("Number of newspaper copies: ");
    scanf("%d", &copies);

    float subtotal = copies * price_per_copy;
    float gst = subtotal * gst_rate;
    float total_price = subtotal + gst;

    printf("Subtotal = %.2f Rs\n", subtotal);
    printf("GST (18%%) = %.2f Rs\n", gst);
    printf("Total price = %.2f Rs\n", total_price);

    return 0;
}