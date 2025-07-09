#include <stdio.h>

int main(){

    int n,m,s=0,x;
    scanf("%d %d",&n,&m);
    scanf("%d",&x);
    
    for (int j = n ; j < m ;j++){
        int isprime = 1;
        for (int i = 2; i< j ; i++)
        {
            if (j % i == 0){
                isprime = 0;
                break;
            }
        }
        if (j == 1){
            isprime = 0;
        }

    if(isprime){
        s += j;
    }

    }
    printf("%d",s - x);
    return 0;

}
