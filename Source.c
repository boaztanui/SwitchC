#include <stdio.h>


int main() {

    char grade;

    printf("Input Grade: ");
    scanf("%c", &grade);

    switch (grade) {
    case 'A':
        printf("Distinction");
        break;
    case 'B':
        printf("Merit");
        break;
    case 'C':
        printf("Pass");
        break;
    case 'D':
        printf("Refer");
        break;
    default:
        printf("Fail");
        break;
    }
    return 0;
}
