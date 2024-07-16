#include <cstdio>

void Swap(long* first, long* second)
{
    long third = first[0];
    first[0] = second[0];
    second[0] = third;
}

int main(void)
{
    long x = 0, y = 1;

    printf("Original values: %ld, %ld\n", x, y);
    Swap(&x, &y);
    printf("Swapped values : %ld, %ld\n", x, y);
}