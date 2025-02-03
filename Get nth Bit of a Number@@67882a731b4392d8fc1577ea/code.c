#include <stdio.h>

int main() {
    int num , n , bitvalue;
    scanf("%d", &num);
    scanf("%d", &n);

    bitvalue = (num >> n) & 1;
    printf("%d\n", bitvalue);
    return 0;
}