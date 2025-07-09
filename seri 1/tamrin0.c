#include <stdio.h>

int main(){

    int n,x,j,z = 1,cj,cz=0;
    printf("enter ur num: ");
    scanf("%d",&n);

    if (n % 10 == 0){
        n = n / 10;
    }

    for (int i = 0; n % 10 != 0 ; i++){
        x = n % 10;
        j += x;
        z *= x;
        n = n / 10;
    }
    cj++;
    cz++;


    while (j >= 10 || z >= 10) {
        int j2 = 0, z2 = 1;


        while (j > 0) {
            j2 += j % 10;
            j /= 10;

        }

        while (z > 0) {
            z2 *= z % 10;
            z /= 10;
        }

        j = j2;
        z = z2;

        if (j >= 10) {
            cj++;
        }
        if (z >= 10) {
            cz++;
        }
    }

    printf("%d\n",cj);
    printf("%d",cz);

    return 0;
}
