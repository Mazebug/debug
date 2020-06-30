#include <stdio.h>
    
    void space(int, int);

    int main() 
    {
        int matrix[100][100];
        int m;
        int n;
        scanf("%d %d",&m, &n);
        int mix = ((m >= n)? n : m);
        int posi = 2 * mix - 1 + (m > n);     //操作方向描述变量
        int i, j;
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                scanf("%d", &matrix[i][j]);        
            }
        }
        int count = 0;
        int a;
        for(i = 1; i <= posi; i++){
             switch(i % 4){
                case 1:
                    for(a = (i / 4); a < (n - i / 4); a++) {
                        printf("%d", matrix[i / 4][a]);
                        count++;
                        space(count, m * n);
                    }
                    break;
                case 2:
                    for(a = (i / 4 + 1); a < (m - i / 4); a++) {
                        printf("%d", matrix[a][n - i / 4 - 1]);
                        count++;
                        space(count, m * n);
                    }
                    break;
                case 3:
                    for(a = (i / 4 + 1); a < (n - i / 4); a++) {
                        printf("%d", matrix[m - i / 4 - 1][n - a - 1]);
                        count++;
                        space(count, m * n);
                    }
                    break;
                case 0:
                    for(a = (i / 4); a < (m - i / 4); a++) {
                        printf("%d", matrix[m - a - 1][i / 4 - 1]);
                        count++;
                        space(count, m * n);
                    }
                    break;
            }       
        }
        return 0;
    }
    void space(int a, int b)
    {
        if(a != b){
            printf(" ");
        }
    }
