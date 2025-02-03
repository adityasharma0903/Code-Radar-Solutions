#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num & 1){
        printf("%d set");
    }else{
        printf("%d Not Set");
    }
    return 0;
}