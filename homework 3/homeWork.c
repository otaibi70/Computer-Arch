#include <stdio.h>
#include <time.h>

#define SIZE 100000000


long dependent() {
    long sum = 0;
    for (long i = 0; i < SIZE; i++) {
        sum = sum + i;
    }
    return sum;
}


long independent() {
    long sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;

    for (long i = 0; i < SIZE; i++) {
        sum1 += i;
        sum2 += i;
        sum3 += i;
        sum4 += i;
    }

    return sum1 + sum2 + sum3 + sum4;
}

int main() {
    clock_t start, end;

    start = clock();
    long d = dependent();
    end = clock();
    double time_dep = (double)(end - start) / CLOCKS_PER_SEC;

    start = clock();
    long ind = independent();
    end = clock();
    double time_ind = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Dependent Time: %f seconds\n", time_dep);
    printf("Independent Time: %f seconds\n", time_ind);

    return 0;
}