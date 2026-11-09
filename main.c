#include <stdio.h>

int main(void)
{
    int n;
    int count = 0;

    if (scanf("%d", &n) != 1) {
        return 0;
    }

    if (n < 0) {
        printf("NG");
        return 0;
    }

    for (int first = 0; first <= 50; first++) {
        for (int second = first + 1; second <= 50; second++) {
            if (first + second == n) {
                count += 2;
            }
        }
    }

    printf("%d", count);
    return 0;
}