#include <stdio.h>

int main() {
    char *msg = "Buon San Valentino, Prof!";
    int i, j;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 7; j++) {
            if ((i == 0 && (j == 1 || j == 5)) ||
                (i == 1 && (j == 0 || j == 2 || j == 4 || j == 6)) ||
                (i == 2 && (j % 2 == 0)) ||
                (i == 3 && (j == 1 || j == 5)) ||
                (i == 4 && (j == 2 || j == 4)) ||
                (i == 5 && j == 3)) {
                printf("❤ ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\n%s\n", msg);
    return 0;
}