#include <stdio.h>

int main(void) {
    char letter;
    int number;

    scanf("%c%d", &letter, &number);


    if ((letter == 'A' || letter == 'C' || letter == 'E' || letter == 'G') && (number % 2 == 1)) {
        printf("BLACK\n");
    } else if ((letter == 'B' || letter == 'D' || letter == 'F' || letter == 'H') && (number % 2 == 0)) {
        printf("BLACK\n");
    } else {
        printf("WHITE\n");
    }

    return 0;
}
