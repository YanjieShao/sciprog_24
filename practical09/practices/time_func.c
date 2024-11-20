#include <stdio.h>
#include <time.h>
#include <math.h>

int main() {
    int i;
    time_t tst, tend;  //time (seconds)
    clock_t cst, cend;  //time in internal clock units

    tst = time(0);
    cst = clock();

    for (i = 0; i <= 99999999; i++) {
        sqrt(i);
    }

    tend = time(0);
    cend = clock();

    printf("Elapsed (actual): %lf seconds\n", difftime(tend, tst)); //runtime (seconds)
    printf("Elapsed (CPU): %lf seconds\n", (double)(cend - cst) / CLOCKS_PER_SEC); //seconds

    return 0;
}
