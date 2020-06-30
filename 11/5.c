
#include <stdio.h>
#include <string.h>

    int main() 
    {
        char arr[32] = {0};
        int bits[32];
        char result[33];
        char input[500];
        scanf("%s", input);
        
        int length = strlen(input);

        for (int i = 0; i < length; i++) {
            arr[(i + 1) % 32] = arr[(i + 1) % 32] + (int)(input[i]);
        }
        
        for (int j = 0; j < 32; j++) {
            bits[j] = (arr[31 - j]) ^ (arr[j] << 1);
            int b = (bits[j] % 85) + 34;
            result[j] = (char)b;
        }
        
        result[32] = '\0';
        printf("%s", result);
        
        return 0;
    }
