#include <stdio.h>

    int main() 
    {
        int num;
        scanf("%d", &num);
        int digit;
        int a;

        printf("2\n"); 
        
        for(digit = 3; digit <= num; digit++) {
            for(a = 2; a < num; a++) {
                if(digit % a ==0) {
                    break;
                }
                if(a == digit -1){
                    printf("%d\n", digit);
                }
            }
        }
        return 0;
    }
