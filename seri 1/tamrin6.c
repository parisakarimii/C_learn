#include <stdio.h>


int jam(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int jam2(int num) {
    int count = 0;
    while (num >= 10) {
        num = jam(num);
        count++;
    }
    return count;
}


int zarb(int num) {
    int product = 1;
    while (num > 0) {
        product *= num % 10;
        num /= 10;
    }
    return product;
}


int zarb2(int num) {
    int count = 0;
    while (num >= 10) {
        num = zarb(num);
        count++;
    }
    return count;
}

int main() {
    int num;
    printf("enter num: ");
    scanf("%d", &num);

    printf("%d\n", jam2(num));
    printf("%d\n", zarb2(num));

    return 0;
}

