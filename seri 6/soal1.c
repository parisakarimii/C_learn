#include <stdio.h>
#include <stdlib.h>

void swap_num(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    int *num1 = (int *)malloc(sizeof(int));
    int *num2 = (int *)malloc(sizeof(int));

    printf("num1: ");
    scanf("%d", num1);
    printf("num2: ");
    scanf("%d", num2);


    swap_num(num1, num2);


    printf("\nafter:\n");
    printf("num1: %d\n", *num1);
    printf("num2: %d\n", *num2);


    free(num1);
    free(num2);

    return 0;
}
