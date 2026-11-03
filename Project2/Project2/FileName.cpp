#include <stdio.h>

int main(void) {
    int m, n;
    scanf("%d%d", &m, &n);
    int a[m][n], i = 0;
    for (i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int max_j = 0, flag_no = 0;
    for (i = 0; i < m; i++) {
        for (int j = 0; j < n; ++j) {
            if (a[i][max_j] < a[i][j]) {
                max_j = j;
            }
        }
        for (int k = 0; k < m; ++k) {
            if (a[k][max_j] < a[i][max_j]) {
                flag_no = 1;
                break;
            }
        }
    }
    if (flag_no == 0) {
        printf("a[%d][%d]=%d\n", i, max_j, a[i][max_j]);
    }
    else {
        printf("no\n");
    }
    return 0;
}
