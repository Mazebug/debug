#include <stdio.h>
#include <string.h>

int main() 
{
    int n;
    char names[200][200];
    char max[200];

    scanf("%d\n", &n);
    
    for(int i = 0; i < n; i++){
        int z = 0;
        while(scanf("%c", &names[i][z]) != EOF && names[i][z] != '\n'){
            z++;
        }
    }
    strcpy(max, names[0]);
    for(int i = 0; i < n; i++) {
        if(strlen(max) < strlen(names[i])) {
            strcpy(max, names[i]);
        }
    }
    
    printf("%s", max);
    
    return 0;
}
