#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;
    printf("entre le nombre de l'index :");
    scanf("%d", &n);

    int my[n];
    for (i = 0; i < n; i++) {
        printf("entre le %d nombre :", i + 1);
        scanf("%d", &my[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d\n", my[i]);
    }

    return 0;
}


