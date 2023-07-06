#include <stdio.h>

int countSequences(int n) {
    int mod = 12345;

    int a = 1;
    int b = 1;
    int c = 2;

    if (n == 1) {
        return a;
    }
    else if (n == 2) {
        return b;
    }
    else if (n == 3) {
        return c;
    }

    int count = 0;
    for (int i = 4; i <= n; i++) {
        count = (a + b + c) % mod;
        a = b;
        b = c;
        c = count;
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int sequences = countSequences(n);
    printf("%d\n", sequences);

    return 0;
}