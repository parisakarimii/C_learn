#include <stdio.h>

struct khazan {
    char name[20];
    double c;
    double voltage;
};

int main() {
    int n;
    printf("number of n: ");
    scanf("%d", &n);

    struct khazan info[n];


    for (int i = 0; i < n; i++) {
        printf("\ninformation %d:\n", i + 1);
        printf("name: ");
        scanf("%s", info[i].name);
        printf("zarfiat: ");
        scanf("%lf", &info[i].c);
        printf("voltazh: ");
        scanf("%lf", &info[i].voltage);
    }


    double series = 0;
    for (int i = 0; i < n; i++) {
        series += 1 / info[i].c;
    }
    series = 1 / series;


    double p = 0;
    for (int i = 0; i < n; i++) {
        p += info[i].c;
    }


    printf("\nseri: %.2f \n", series);
    printf("\nmovazi: %.2f \n", p);

    return 0;
}
