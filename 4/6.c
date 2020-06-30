#include <stdio.h>

int main()
{
    int n = 10;
    int m;
    int numbers[10];
    int i;
    int j;
    int tmpt;

    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (numbers[i] < numbers[j]) {
                tmpt = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = tmpt;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        if (i != 9) {
            printf("%d ", numbers[i]);
        } else {
            printf("%d", numbers[i]);
        }
    }

    return 0;
}
