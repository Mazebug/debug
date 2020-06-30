#include <stdio.h>

int main()
{
    int n = 10;
    int numbers[10];
    int m;
    int i;
    int k;
    int j;
    int o;

    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for (j = 0; j < n; j++) {
        m = j;
        for (k = j + 1; k < n; k++) {
            if (numbers[m] < numbers[k]) {
                m = k;
            }
        }
        o = numbers[j];
        numbers[j] = numbers[m];
        numbers[m] = o;
    }
    for (int q = 0; q < n; q++) {
        if (q == 9) {
            printf("%d", numbers[q]);
        } else {
            printf("%d ", numbers[q]);
        }
    }

    return 0;
}
