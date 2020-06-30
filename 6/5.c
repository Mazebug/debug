#include <stdio.h>
#include <string.h>

int main() 
{
    char input[4];
    int counter = 0;
    scanf("%s", input);
    char operation[3];
    int flag[3] = {0, 0, 0};
    if (input[0] == 'r' && input[1] == 'w' && input[2] == 'x') {
        counter = 7;
        flag[0] =  flag[1] = flag[2] = 1;
    } else if (input[0] == 'r' && input[1] == 'w') {
        counter = 6;
        flag[0] = flag[1] = 1;
    } else if (input[0] == 'r' && input[1] == 'x') {
        counter = 5;
        flag[0] = flag[2] = 1;
    } else if (input[0] == 'w' && input[1] == 'x') {
        counter = 3;
        flag[1] = flag[2] = 1;
    } else if (input[0] == 'r') {
        counter = 4;
        flag[0] = 1;
    } else if (input[0] == 'w') {
        counter = 2; 
        flag[1] = 1;
    } else {
        counter = 1;
        flag[2] = 1;
    }
    
    while (scanf("%s", operation) != EOF) {
        if (operation[0] == '+' && operation[1] == 'r' && flag[0] == 0) {
            counter += 4;
        } else if (operation[0] == '+' && operation[1] == 'w' && flag[1] == 0) {
            counter += 2;
        } else if (operation[0] == '+' && operation[1] == 'x' && flag[2] == 0) {
            counter += 1;   
        } else if (operation[0] == '-' && operation[1] == 'r' && flag[0] == 1) {
            counter -= 4; 
        } else if (operation[0] == '-' && operation[1] == 'w' && flag[1] == 1) {
            counter -= 2;
        } else if (operation[0] == '-' && operation[1] == 'x' && flag[2] == 1) {
            counter -= 1;
        }
    } 
    printf("%d", counter);
    return 0;
}

