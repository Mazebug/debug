#include <stdio.h>

    int main() 
    {
        int N;
        int i;
        scanf("%d", &N);
        int part[N];
        part[1] = 0;
        part[2] = 1;
        part[3] = 1;
        for(i = 4; i <= N; i++) {
            part[i] = part[i - 2] + part[i - 3];
        }
        printf("%d", part[N]);
        return 0;
    }
