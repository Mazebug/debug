#include <stdio.h>
#include <string.h>

    int main() 
    {
        int counter = 0;
        char name[3];
        int flag[3] = {0, 0, 0};
        if (scanf("%s", name) != EOF){
            for(int j = 0; j < strlen(name); j++){
                if(name[j] == 'r') {
                    counter += 4;
                    flag[0] = 1;
                } 
                if(name[j] == 'w'){
                    counter += 2;
                    flag[1] = 1;
                }
                if(name[j] == 'x'){
                    counter += 1;
                    flag[2] = 1;
                }
            }
        }
        while(scanf("%s", name) != EOF){
            for(int j = 0; j < strlen(name); j++){
                if (name[0] == '+' && name[1] == 'r' && flag[0] == 0){
                    counter += 4;
                    flag[0] = 1;
                }else if(name[0] == '+' && name[1] == 'w' && flag[1] == 0){
                    counter += 2;
                    flag[1] = 1;
                }else if(name[0] == '+' && name[1] == 'x' && flag[2] == 0){
                    counter += 1;
                    flag[2] = 1;
                }else if(name[0] == '-' && name[1] == 'r' && flag[0] == 1){
                    counter -= 4;
                    flag[0] = 0;
                }else if(name[0] == '-' && name[1] == 'w' && flag[1] == 1){
                    counter -= 2;
                    flag[1] = 0;
                }else if(name[0] == '-' && name[1] == 'x' && flag[2] == 1){
                    counter -= 1;
                    flag[2] = 0;
                }
            }
        }
        printf("%d", counter);
        return 0;
    }
