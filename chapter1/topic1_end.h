#include "stdio.h"
#include "stdlib.h"

/**
 * 斐波那契数列
 */

/**
 * 递归
 * @param x
 * @return
 * O(2^n)
 */
int f1(int x) {
    return (x <= 1) ? 1 : f1(x - 1) + f1(x - 2);
}

/**
 * 动态规划
 * @param x
 * @return
 * O(n)
 */
int f2(int x) {
    if (x < 2) {
        return 1;
    }
    int p = 1, q = 1, r = 1;
    for (int i = 2; i <= x; ++i) {
        p = q;
        q = r;
        r = p + q;
    }
    return r;
}

/**
 * 带记录表的递归
 * @param x
 * @return
 * O(n)
 * s(n)
 */
int *array;

int f3(int x) {
    if (x < 2) {
        return 1;
    }
    array = (int *) malloc(x * sizeof(int));
    array[0] = 1;
    array[1] = 1;
    int p = array[x - 1];
    if (p == 0) {
        array[x - 1] = f3(x - 1);
        p = array[x - 1];
    }
    return p + array[x-2];
}