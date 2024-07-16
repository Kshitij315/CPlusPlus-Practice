#include <cstdio>

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *p);
        p++;
    }
}
// Prints: 1 2 3 4 5