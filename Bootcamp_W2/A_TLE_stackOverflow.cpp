#include <stdio.h>
#include <stdlib.h>

    int main(int argc, const char * argv[])
    {
        int sum = 0,
        cases = 0,
        i, j, buff;

        scanf("%d", &cases);


        int *n;
        n = (int*) malloc(cases * sizeof(int));

        for (i = 0; i < cases; i++) {
            scanf("%d", &n[i]);
        }
        for (i = 0; i < cases; i++ ) {
            buff = n[i] / 2;
            if (n[i] == 1) {
                sum = -1;
            }


            if (!(n[i] & 1)) {
                for (j = 2; j < buff; j++) {
                    if (n[i] % j == 0) {
                        sum += n[i] / j + j;
                        buff /= j;
                    }
                }
            }


            else {
                for (j = 3; j < buff; j += 2) {
                    if (n[i] % j == 0) {
                        if (n[i] / j == j) { sum += j; break; }
                        else sum += n[i] / j + j;
                    }
                    buff /= j;
                }
             }
            printf("%d\n", ++sum);
            sum = 0;
        }
        return 0;
    }
