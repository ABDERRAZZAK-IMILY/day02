#include <stdio.h>

int factorial(int x) {
    if (x > 1) {
        return x * factorial(x - 1);
    } else {
        return 1;
    }
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}
