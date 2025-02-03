#include <stdio.h>

int main() {
    int num, msb;
    scanf("%d", &num);
    msb = 1<<31;
    if (num & msb){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}