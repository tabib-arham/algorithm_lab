#include <stdio.h>

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int lcs(char X[], char Y[], int m, int n) {
    int arr[m + 1][n + 1];
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                arr[i][j] = 0;
            } else if (X[i - 1] == Y[j - 1]) {
                arr[i][j] = arr[i - 1][j - 1] + 1;
            } else {
                arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
            }
        }
    }
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("%d is the sequence length\n",arr[m][n]);
}

int main() {
    int m, n;
    printf("enter the size of sequences\n");
    scanf("%d %d", &m, &n);

    char X[m], Y[n];

    printf("enter the X sequence\n");
    for (int i = 0; i < m; i++) {
        scanf(" %c", &X[i]);
    }

    printf("enter the Y sequence\n");
    for (int i = 0; i < n; i++) {
        scanf(" %c", &Y[i]);
    }

    lcs(X, Y, m, n);
}
