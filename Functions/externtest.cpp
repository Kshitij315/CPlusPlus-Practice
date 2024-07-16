#include <cstdio>

extern long Compute(int, int, short = 1);

int main(void)
{
    int l, u;

    printf("Lower and Upper Limits: ");
    scanf("%d%d", &l, &u);
    try
    {
        printf("First computation result : %ld\n", Compute(l, u));
        printf("Second computation result: %ld\n", Compute(l, u, 2));
    }

    catch (int e)
    {
        printf("error occured ivald upper limit %d\n", e);
    }
    catch (short e)
    {
        printf("Invalid limit%d\n", e);
    }
    catch (...)
    {
        puts("Goodbye");
    }
}