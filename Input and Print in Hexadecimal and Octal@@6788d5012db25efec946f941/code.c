#include <stdio.h>



int main() {
    int num;
    scanf("%d", &num);
    num = toupper(num);
    printf("Hexadecimal: %x\n", num);
    
    printf("Octal: %o\n", num);
    return 0;
}