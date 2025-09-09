#include <stdio.h>

int main() {
    int num, i, flag;

    printf("Prime numbers between 1 and 20 are:\n");

    
    for (num = 2; num <= 20; num++) {
        flag = 0; 


        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                flag = 1; 
                break;
            }
        }

        // if flagg is still 0, number is prime
        if (flag == 0) {
            printf("%d ", num);
        }
    }

    return 0;
}
