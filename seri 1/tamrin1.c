#include <stdio.h>

int main(){

    int n,x,s = 0;
    printf("enter ur num:\n");
    scanf("%d",&n);

    for (int i = 0 ; i < n ; i++){
        scanf("%d",&x);
        s += x;
    }
    printf("%d\n",s);
}
