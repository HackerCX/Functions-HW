#include <stdio.h>

int fact(int n){
    unsigned long long result = 1;
    
    for (int i = 2; i <= n; i++) {
        unsigned long long temp = 0;
        
        for (int j = 0; j < i; j++) {
            temp += result;
        }
        
        result = temp;
    }
    
    return result;
}
int main(){
    int n = 0;
    scanf("%d", &n);
    printf("%d",fact(n));
    return 0;
}

