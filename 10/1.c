#include <stdio.h>
    
int main() 
{
    int a, b, c, d;
    
    scanf("%d", &a);
    printf("2\n");
    for(d = 2; d <= a; d++) {
        for(b = 2; b < d; b++) {
            c = 0;
            if(d % b == 0) {
                c++;
                break;
            }
        }
        if(c == 0) {
            printf("%d\n", d);
        }
    }
    return 0;
}
