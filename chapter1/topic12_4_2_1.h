#include "stdio.h"

int T(int n, int i) {
    printf("%d\n",i);
    if (n == 1) {
        return 1;
    }
    return 2 * T(n/2, i + 1) + n;
}

void run() {
    int a = T(15,0);
    printf("%d\n",a);
}


