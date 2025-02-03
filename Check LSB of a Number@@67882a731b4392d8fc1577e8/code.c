#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num & 1){
        printf("set");
    }else{
        printf("%d Not Set");
    }
    return 0;
}