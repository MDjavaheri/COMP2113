#include <stdio.h>

int main(void) {
    int     i = 1, sum = 0;

    for (i=1; i <= 5; ++i) {
        sum += i;
    }

    printf("sum = %d\n", sum);
    return 0;
}
