#include <stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);
    int step[51];
    int i;
    step[1] = 0;
    step[2] = 1;
    step[3] = 1;
    for (i = 4; i <= N; i++){
        step[i] = step[i - 2] + step[i - 3];
    }
    printf("%d", step[N]);
    return 0;
}
