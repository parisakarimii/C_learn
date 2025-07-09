#include <stdio.h>

int main() {
    int a, b, n;


    scanf("%d %d %d", &a, &b, &n);


    for (int x = 0; x <= n; x += a) { 
        int y = n - x;  
        if (y % b == 0) {  
            printf("%d %d\n", x, y);
        }
    }

    return 0;
}
