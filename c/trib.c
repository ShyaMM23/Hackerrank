#include <stdio.h>

int trib(int n, int a, int b, int c) {
    // Base conditions
    if(n == 1) return a;
    if(n == 2) return b;
    if(n == 3) return c;

    // Recursive call
    return trib(n-1, a, b, c) 
         + trib(n-2, a, b, c) 
         + trib(n-3, a, b, c);
}

int main() {
    int n, a, b, c;

    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);

    printf("%d", trib(n, a, b, c));

    return 0;
}
