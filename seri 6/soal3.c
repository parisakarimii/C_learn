#include <stdio.h>
#include <stdlib.h>


int* f(int n) {
    int* array = (int*)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("error!\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        array[i] = i * i;
    }

    return array;
}

int main() {
    int n;
    printf("enter : ");
    scanf("%d", &n);
    int* b = f(n);
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
