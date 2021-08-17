#include <stdio.h>
int Sum(int n)
{
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int main()
{
    int n = 687;
    printf(" %d ", Sum(n));
    return 0;
}
