#include <stdio.h>

int main() {
    char alpha, str;
    str = toupper(alpha);
    if (str == alpha){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
    return 0;
}