#include <stdio.h>
#include <string.h>

int main() 
{
    char before[3];
    scanf("%s", before);
    char calculate[100][2];
    int i = 0;
    int count = 0;
    int flag[3] = {0, 0, 0};
    while(scanf("%s", calculate[i]) != EOF) {
        count++;
        i++;
    }
    int result=0;
    for(i = 0; i < strlen(before); i++) {
        if(before[i] == 'r') {
            result += 4;
            flag[0] = 1;
        } 
        if(before[i] == 'w') {
            result += 2;
            flag[1] = 1;
        } 
        if(before[i] == 'x') {
            result += 1;
            flag[2] = 1;
        }
    }
    //计算后的结果
    for(i = 0; i < count; i++) {
        if(calculate[i][0] == '+') {
            if(calculate[i][1] == 'r' && flag[0] == 0) {
                result += 4;
                flag[0] =1;
            } 
            if(calculate[i][1] == 'w' && flag[1] == 0) {
                result += 2;
                flag[1] = 1;
            } 
            if(calculate[i][1] == 'x' && flag[2] == 0) {
                result += 1;
                flag[2] = 1;
            } 
        }else if(calculate[i][0] == '-') {
            if(calculate[i][1] =='r' && flag[0] == 1) {
                result -= 4;
                flag[0] = 0;
            } 
            if(calculate[i][1] == 'w' && flag[1] == 1) {
                result -= 2;
                flag[1] = 0;
            } 
            if(calculate[i][1] == 'x' && flag[2] == 1) {
                result -= 1;
                flag[2] = 0;
            } 
        }    
    }
    printf("%d", result);
    return 0;
}
