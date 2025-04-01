#include <stdio.h>

void getMultTable(int n){
    for(int i = 1; i <= 10; ++i){
        int mult = n * i;
        printf("%d * %d = %d\n", n, i, mult);
    }
}

int main(){
    int n = 0;
    scanf("%d", &n);
    getMultTable(n);
    return 0;
}
