#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i=0;
    int x;
    int y;
    int k;
    double p;
    double q;

    for (x = 0; x <= n / 2; x++) {
        for (y = 0; y <= n / 3; y++) {
            if (x * 2 + y * 3 == n) {
                p = 1;
                q = 1;
                for (k = x + y; k > y; k--) {
                    p *= k;
                }
                for (k = 1; k <= x; k++) {
                    q *= k;
                }
                i += p / q;
            }
        }
    }
    printf("%d", i);

    return 0;
}
