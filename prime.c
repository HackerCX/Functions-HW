#include <stdio.h>

int int_sqrt(int n) {
    int x = n, y = (x + 1) / 2;
    while (y < x) {
        x = y;
        y = (x + n / x) / 2;
    }
    return x;
}

int is_prime(unsigned long long n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    int root = int_sqrt(n);
    for (int i = 3; i <= root; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n = 0;
    scanf("%d", &n);
    if(is_prime){
        printf("your Number is Prime");
    }else{
        printf("Your number isnt prime");
    }
    return 0;
}

