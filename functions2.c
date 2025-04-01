#include <stdio.h>

void getMultTable(int n){
    for(int i = 1; i <= 10; ++i){
        int mult = n * i;
        printf("%d * %d = %d\n", n, i, mult);
    }
}

int main(){
    for(int i = 1; i <= 10; ++i){
        getMultTable(i);
        printf("\n");
    }
    return 0;
}
