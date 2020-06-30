#include <stdio.h>
#include <string.h>

int main() 
{
    int arr[32] = {0};
    int bits[32];
    char result[33];
    char input[500];
    scanf("%s", input);
    
    int length = strlen(input);

    for (int i = 1; i <= length; i++) {
        arr[i % 32] = arr[i % 32] + (int)input[i - 1];
    }
    
    for (int j = 0; j < 32; j++) {
        bits[j] = (arr[31 - j]) ^ (arr[j] << 1);
        int b = bits[j] % 85 + 34;
        result[j] = (char)b;
    }
    
    result[32] = '\0';
    printf("%s\n", result);
    
    return 0;
}
