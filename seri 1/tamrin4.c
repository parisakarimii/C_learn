#include <stdio.h>

int main(){

    int n,x;
    printf("enter ur num: ");
    scanf("%d",&n);

    if (n % 10 == 0){
        n = n / 10;
    }

    for (int i = 0; n % 10 != 0 ; i++){
        x = n % 10;
        n = n / 10;
        printf("%d",x);
    }

}
