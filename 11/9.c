#include <stdio.h>
#include <string.h>

int main() 
{
    char in[500];
    char out[33];
    int oneInt;
    int k;
    int arr[32];
    int bits[32];
    int i;
    int j;
    
    scanf("%s", in);
    k = strlen(in);
    
    for (i = 0; i < 32; i++) {
        arr[i] = 0;
    }
   
    for (i = 1; i <= k; i++) {
        oneInt = in[i - 1];
        arr[i % 32] += oneInt;
    }
    
    for (j = 0; j < 32; j++) {
        oneInt = (arr[31 - j] ^ (arr[j] << 1));
        bits[j] = oneInt;
    }
    
    for (j = 0; j < 32; j++) {
        oneInt = (bits[j] % 85 + 34);
        out[j] = oneInt;
    }

    out[33] = '\0';
    
    printf("%s", out);
        
    return 0;
}
