# include <stdio.h>

int main()
{
    int matrix_a[10][10];
    int matrix_b[10][10];
    int matrix_c[10][10];
    int m;
    int n;
	
    int i;
    int j;
    int k;
	
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            matrix_c[i][j] = 0;
        }
    }

    scanf("%d %d", &m, &n);
	
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix_a[i][j]);
        }
    }
			
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix_b[i][j]);
        }
    }
	
    for (i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            for (k = 0; k < n; k++) {
                matrix_c[i][j] += (matrix_a[i][k] * matrix_b[k][j]);
            }
        }
    }
	
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            printf("%d", matrix_c[i][j]);
            if (j < m - 1 ) {
                printf(" ");
            }
            if (i == m - 1) {
                continue;
            }
            if (j == m - 1) {
                printf("\n");
            }
        }
    }
    return 0;
}
