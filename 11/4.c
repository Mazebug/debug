#include <stdio.h>
#include <string.h>

int f(char k[500]) 
{
    int bits[32];
    int  arr[32]= {0};
    int i;
    int j;
    int m = strlen(k);
    
    for(i = 1; i <= m; i++) {
        arr[i % 32] += k[i-1];   
    }
    for(j = 0; j <= 31; j++) {
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
        printf("%c", bits[j] % 85 + 34);
    } 
    
    return 0;
    }

int main() 
{   
    char k[500];
    scanf("%s", k);
    
    f(k);
    
    return 0;
}
