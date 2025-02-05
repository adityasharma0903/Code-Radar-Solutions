#include <stdio.h>

int main() {
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(square(a)==b){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}