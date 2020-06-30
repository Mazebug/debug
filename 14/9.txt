#include <stdio.h>

int main()
{
    int n;
    int i;
    int j;
    scanf ("%d", &n);

    for (i = n; i >= 1; i--) {
        for (j = i; j >= 1; j--) {
            printf("%d", j);
            if (j != 1) {
                printf(" ");
            }
        }
        if (i != 1) {            
            printf("\n");
        }
    }

    return 0;
}
