#include<stdio.h>

int main()
{
    int n, i, j;
    
    scanf("%d", &n);
    
    if(n == 2){
        printf("2\n");
    } else {
        printf("2\n");

        for(i = 3; i <= n; i++) {
            for(j = 2; j < i; j++) {
                if(i % j == 0){
                    break;
                } else if(j == i - 1){
                    printf("%d\n",i);
                    break;
                }
            }
        }
    }
    return 0;
}
    
