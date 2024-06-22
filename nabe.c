#include <stdio.h>

int main() {
    int num = 1;
    while (num <= 1000) {
        int temp = num;
        int check3 = 0; //判別

        while (temp > 0) {
            if (temp % 10 == 3) {
                check3 = 1;
                break;
            }
            temp /= 10;
        }

        if (num % 3 == 0 || check3) {
            printf("%d !!!!!!!!!!\n", num);
        } else {
            printf("%d\n", num);
        }
        num++;
    }

    return 0;
}


