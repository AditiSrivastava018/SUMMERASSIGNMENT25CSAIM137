#include <stdio.h>

int main() {
    int a[100], b[100];
    int n, m, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &m);

    printf("Enter elements of second array:\n");
    for(i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    printf("Common elements are: ");

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            if(a[i] == b[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}