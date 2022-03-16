#include "stdio.h"
#include "chapter1/topic12_4_2_1.h"
#include "chapter1/topic1_end.h"

void hello() {
    printf("Hello, World!\n");
}

void testF(){
    int x = 5;
    printf("%d\n", f1(x));
    printf("%d\n", f2(x));
    printf("%d\n", f3(x));
}


int main() {
    testF();
    return 0;
}