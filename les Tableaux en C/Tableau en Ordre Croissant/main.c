#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n , sum,j;
    printf("entre le nombre de l'index :");
    scanf("%d", &n);

    int t[n];
    for (i = 0; i < n; i++) {
        printf("entre le %d nombre :", i + 1);
        scanf("%d", &t[i]);
    }
    for (i = 0; i < n; i++) {
      for (j = i+1; j <n ; j++){
          if (t[i]<t[j]) {
                sum = t[i];
            t[i] = t[j];
            t[j] = sum;

          }
          }
    }
          printf("le order est :");
        for (i= 0; i <n ;i++){

           printf("%d ", t[i]);
        }

    return 0;
}

