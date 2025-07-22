#include <stdio.h>
#include <string.h>

int main() {
    char binary_input[100];
    int zero = 0, one = 0, decimal_moadel = 0;


    printf("enter num: ");
    scanf("%s", binary_input);


    for (int i = 0; i < strlen(binary_input); i++) {
        if (binary_input[i] != '0' && binary_input[i] != '1') {
            printf("invalid input\n");
            return 1;
        }
    }


    for (int i = 0; i < strlen(binary_input); i++) {
        if (binary_input[i] == '0') {
                zero++;
        }
        else if (binary_input[i] == '1') {
                one++;
        }
        decimal_moadel = decimal_moadel * 2 + (binary_input[i] - '0');
    }


    printf("zero: %d\n", zero);
    printf("ones: %d\n", one);
    printf("moadel: %d\n", decimal_moadel);

    return 0;
}
