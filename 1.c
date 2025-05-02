#include <stdio.h>

int max(int a, int b)
{
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main ()
{
    int result = max(10, 5);
    printf("Max value is: %d\n", result);
    return 0;
}
