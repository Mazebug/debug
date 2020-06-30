#include <stdio.h>
#include<math.h>

int main() 
{
    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    int matrix[102][102];
    int m;
    int n;
    int i,j;
    int inf = 0x3f3f3f3f;
    for (i = 0; i < 102; i++){
        for (j = 0; j < 102; j++){
            matrix [i][j] = inf;
        }
    }
    scanf("%d %d", &m, &n);
    for(i = 1; i <= m; i++) {
        for(j = 1; j <= n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int dir = 0;
    int cnt = 0;
    int x = 1;
    int y = 1;
    printf("%d",matrix[x][y]);
    matrix[x][y] = inf;
    while(cnt != n * m - 1) {
        if (matrix[x + dx[dir]][y + dy[dir]] == inf) {
            dir++;
            dir %= 4;
            continue;
        }
        x += dx[dir];
        y += dy[dir];
        printf(" %d", matrix[x][y]);
        matrix[x][y] = inf;
        cnt++;
    }
    return 0;
}
