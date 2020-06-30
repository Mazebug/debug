#include <stdio.h>
#include <string.h>

    int main() 
    {
        int n;
        scanf("%d\n", &n);
        char names[n][100];
        
        for(int i = 0; i < n; i++){
            fgets(names[i], 100, stdin);
        }
        char temp[100];
        for(int i = 0; i < n - 1; i++){
            for(int j = i; j < n - 1; j++){
                if(strlen(names[j + 1]) > strlen(names[j])){
                    strcpy(temp, names[j + 1]);
                    strcpy(names[j + 1], names[j]);
                    strcpy(names[j], temp);
                }
            }
        }
        printf("%s", names[0]);
        return 0;
    }
